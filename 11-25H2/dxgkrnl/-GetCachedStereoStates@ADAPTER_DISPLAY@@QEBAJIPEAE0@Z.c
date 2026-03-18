/*
 * XREFs of ?GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z @ 0x140400E9C
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1401C09D4 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCachedStereoStates(ADAPTER_DISPLAY *this, unsigned int a2, bool *a3, bool *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // rdx
  int v11; // r8d
  __int64 v13; // [rsp+38h] [rbp-20h]

  v4 = a2;
  if ( (a3 && a4
     || (WdLogSingleEntry0(1LL),
         WdLogGlobalForLineNumber = 6630,
         DxgkLogInternalTriageEvent(
           0LL,
           262146,
           0xFFFFFFFFLL,
           L"pCurModeSupportsStereo && pStereoExists",
           6630LL,
           0LL,
           0LL,
           0LL,
           0LL),
         a3)
     && a4)
    && (unsigned int)v4 < *((_DWORD *)this + 24) )
  {
    v8 = *((_QWORD *)this + 16);
    v9 = -1073741275;
    v10 = 3984 * v4;
    v11 = *(_DWORD *)(3984 * v4 + v8 + 1116);
    if ( v11 != -1 && *(_DWORD *)(v10 + v8 + 1120) != -1 )
    {
      v9 = 0;
      *a3 = v11 == 1;
      *a4 = *(_DWORD *)(*((_QWORD *)this + 16) + v10 + 1120) == 1;
    }
    return v9;
  }
  else
  {
    WdLogSingleEntry5(2LL, a3, a4, v4, *((unsigned int *)this + 24), -1073741811LL);
    v13 = *((unsigned int *)this + 24);
    WdLogGlobalForLineNumber = 6636;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Caller specified invalid parameters or invalid VidPN source ID. pCurModeSupportsStereo=0x%I64x, pStereoExists=0x%I"
       "64x, VidPnSourceId=0x%I64x (value should be less than 0x%I64x). Returning 0x%I64x",
      (__int64)a3,
      (__int64)a4,
      v4,
      v13,
      -1073741811LL);
    return 3221225485LL;
  }
}
