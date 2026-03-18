/*
 * XREFs of ?VSyncStateChange@VSYNC_TIME_STATS@@QEAAXW4_DXGK_CRTC_VSYNC_STATE@@0@Z @ 0x140037024
 * Callers:
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z @ 0x14002FAE8 (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z.c)
 * Callees:
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x1400371D4 (McTemplateK0qxxx_EtwWriteTransfer.c)
 */

void __fastcall VSYNC_TIME_STATS::VSyncStateChange(
        VSYNC_TIME_STATS *this,
        enum _DXGK_CRTC_VSYNC_STATE a2,
        enum _DXGK_CRTC_VSYNC_STATE a3)
{
  LARGE_INTEGER v6; // rax
  LARGE_INTEGER v7; // rcx
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r10
  union _LARGE_INTEGER v13; // [rsp+78h] [rbp+20h] BYREF

  v13.QuadPart = 0LL;
  v6 = KeQueryPerformanceCounter(&v13);
  if ( a3 == DXGK_VSYNC_ENABLE )
  {
    if ( (unsigned int)(a2 - 1) > 1 )
      return;
    v11 = v6.QuadPart - *(_QWORD *)this;
    if ( is_mul_ok(v11, 0x3E8uLL) )
    {
      v9 = v11 * (unsigned __int128)0x3E8uLL % (unsigned __int64)v13.QuadPart;
      v8 = v11 * (unsigned __int128)0x3E8uLL / (unsigned __int64)v13.QuadPart;
    }
    else
    {
      v9 = v11 % v13.QuadPart;
      v7.QuadPart = 1000 * (v11 / v13.QuadPart);
      v8 = v7.QuadPart + 1000 * (v11 % v13.QuadPart) / v13.QuadPart;
    }
    if ( a2 == DXGK_VSYNC_DISABLE_KEEP_PHASE )
      *((_QWORD *)this + 3) += v8;
    else
      *((_QWORD *)this + 4) += v8;
    goto LABEL_7;
  }
  if ( a3 == DXGK_VSYNC_DISABLE_KEEP_PHASE )
  {
    if ( a2 )
      return;
    v8 = v6.QuadPart - *(_QWORD *)this;
    if ( is_mul_ok(v8, 0x3E8uLL) )
    {
      v9 = v8 * (unsigned __int128)0x3E8uLL % (unsigned __int64)v13.QuadPart;
      v10 = v8 * (unsigned __int128)0x3E8uLL / (unsigned __int64)v13.QuadPart;
    }
    else
    {
      v9 = v8 % v13.QuadPart;
      v7.QuadPart = 1000 * (v8 / v13.QuadPart);
      v10 = v7.QuadPart + 1000 * (v8 % v13.QuadPart) / v13.QuadPart;
    }
    *((_QWORD *)this + 2) += v10;
    goto LABEL_7;
  }
  if ( a2 == DXGK_VSYNC_DISABLE_KEEP_PHASE && a3 == DXGK_VSYNC_DISABLE_NO_PHASE )
  {
    v8 = v6.QuadPart - *(_QWORD *)this;
    if ( is_mul_ok(v8, 0x3E8uLL) )
    {
      v9 = v8 * (unsigned __int128)0x3E8uLL % (unsigned __int64)v13.QuadPart;
      v12 = v8 * (unsigned __int128)0x3E8uLL / (unsigned __int64)v13.QuadPart;
    }
    else
    {
      v9 = v8 % v13.QuadPart;
      v7.QuadPart = 1000 * (v8 / v13.QuadPart);
      v12 = v7.QuadPart + 1000 * (v8 % v13.QuadPart) / v13.QuadPart;
    }
    *((_QWORD *)this + 3) += v12;
LABEL_7:
    *(LARGE_INTEGER *)this = v6;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
      McTemplateK0qxxx_EtwWriteTransfer(
        v7.LowPart,
        v9,
        v8,
        a3,
        *((_QWORD *)this + 2),
        *((_QWORD *)this + 3),
        *((_QWORD *)this + 4));
  }
}
