/*
 * XREFs of WPP_RECORDER_SF_SS @ 0x1400448F0
 * Callers:
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1400443F0 (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_SS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7)
{
  const wchar_t *v7; // rdi
  const wchar_t *v8; // rbx
  __int64 v9; // rsi
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r9
  const wchar_t *v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  const wchar_t *v17; // rcx
  __int64 v18; // rax
  bool v19; // zf
  int v21; // [rsp+20h] [rbp-58h]

  v7 = a6;
  v8 = a7;
  v9 = -1LL;
  v11 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a7 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a7[v12] );
      v13 = 2 * v12 + 2;
    }
    else
    {
      v13 = 10LL;
    }
    v14 = a7;
    if ( !a7 )
      v14 = L"NULL";
    if ( a6 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a6[v15] );
      v16 = 2 * v15 + 2;
    }
    else
    {
      v16 = 10LL;
    }
    v17 = a6;
    if ( !a6 )
      v17 = L"NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, const wchar_t *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
      32LL,
      v17,
      v16,
      v14,
      v13,
      0LL);
  }
  if ( a7 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a7[v18] );
  }
  if ( !a7 )
    v8 = L"NULL";
  v19 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
    v11 = 2 * v9 + 2;
    v19 = a6 == 0LL;
  }
  if ( v19 )
    v7 = L"NULL";
  LOWORD(v21) = 32;
  return WppAutoLogTrace(a1, 4LL, 1LL, &WPP_5169c4c8089132207a438b4341aed5b6_Traceguids, v21, v7, v11, v8);
}
