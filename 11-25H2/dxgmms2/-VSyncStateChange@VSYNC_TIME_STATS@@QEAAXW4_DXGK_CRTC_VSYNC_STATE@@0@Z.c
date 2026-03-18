/*
 * XREFs of ?VSyncStateChange@VSYNC_TIME_STATS@@QEAAXW4_DXGK_CRTC_VSYNC_STATE@@0@Z @ 0x14002D770
 * Callers:
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x14002CBC4 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 * Callees:
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x140016220 (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     RtlULongLongMult @ 0x140035FA0 (RtlULongLongMult.c)
 */

void __fastcall VSYNC_TIME_STATS::VSyncStateChange(
        VSYNC_TIME_STATS *this,
        enum _DXGK_CRTC_VSYNC_STATE a2,
        enum _DXGK_CRTC_VSYNC_STATE a3)
{
  LARGE_INTEGER v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // r9
  unsigned __int64 v9; // r10
  ULONGLONG v10; // r8
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r10
  ULONGLONG v15; // r8
  ULONGLONG pullResult[2]; // [rsp+40h] [rbp-10h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+78h] [rbp+28h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( a3 == DXGK_VSYNC_ENABLE )
  {
    if ( (unsigned int)(a2 - 1) > 1 )
      return;
    pullResult[0] = 0LL;
    if ( RtlULongLongMult(v6.QuadPart - *(_QWORD *)this, 0x3E8uLL, pullResult) >= 0 )
      v10 = pullResult[0] / v12;
    else
      v10 = 1000 * (v11 / v12) + 1000 * (v11 % v12) / v12;
    if ( a2 != DXGK_VSYNC_DISABLE_KEEP_PHASE )
    {
      *((_QWORD *)this + 4) += v10;
      goto LABEL_21;
    }
LABEL_20:
    *((_QWORD *)this + 3) += v10;
LABEL_21:
    *(_QWORD *)this = v8;
    if ( (byte_140081244 & 4) != 0 )
      McTemplateK0qxxx_EtwWriteTransfer();
    return;
  }
  if ( a3 == DXGK_VSYNC_DISABLE_KEEP_PHASE )
  {
    if ( a2 )
      return;
    pullResult[0] = 0LL;
    if ( RtlULongLongMult(v6.QuadPart - *(_QWORD *)this, 0x3E8uLL, pullResult) >= 0 )
      v15 = pullResult[0] / v14;
    else
      v15 = 1000 * (v13 / v14) + 1000 * (v13 % v14) / v14;
    *((_QWORD *)this + 2) += v15;
    goto LABEL_21;
  }
  if ( a2 == DXGK_VSYNC_DISABLE_KEEP_PHASE && a3 == DXGK_VSYNC_DISABLE_NO_PHASE )
  {
    pullResult[0] = 0LL;
    if ( RtlULongLongMult(v6.QuadPart - *(_QWORD *)this, 0x3E8uLL, pullResult) >= 0 )
      v10 = pullResult[0] / v9;
    else
      v10 = 1000 * (v7 / v9) + 1000 * (v7 % v9) / v9;
    goto LABEL_20;
  }
}
