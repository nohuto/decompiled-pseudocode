/*
 * XREFs of WPP_RECORDER_SF_SSs @ 0x140009550
 * Callers:
 *     ValidateCpcSymmetry @ 0x1400306B4 (ValidateCpcSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x140030C78 (ValidatePctPtcSymmetry.c)
 *     ValidatePepPerformanceSymmetry @ 0x140030D3C (ValidatePepPerformanceSymmetry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_SSs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const char *a8)
{
  const wchar_t *v8; // rbp
  const wchar_t *v10; // rsi
  __int64 v11; // rbx
  unsigned int v12; // r12d
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rdx
  const char *v16; // r11
  __int64 v17; // rax
  __int64 v18; // r10
  const wchar_t *v19; // r9
  __int64 v20; // rax
  __int64 v21; // r8
  const wchar_t *v22; // rcx
  __int64 v23; // r14
  __int64 v24; // rax
  bool v25; // zf
  int v27; // [rsp+20h] [rbp-68h]

  v8 = a6;
  v10 = a7;
  v11 = -1LL;
  v12 = a4;
  v13 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a8 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a8[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = a8;
    if ( !a8 )
      v16 = "NULL";
    if ( a7 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a7[v17] );
      v18 = 2 * v17 + 2;
    }
    else
    {
      v18 = 10LL;
    }
    v19 = a7;
    if ( !a7 )
      v19 = L"NULL";
    if ( a6 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a6[v20] );
      v21 = 2 * v20 + 2;
    }
    else
    {
      v21 = 10LL;
    }
    v22 = a6;
    if ( !a6 )
      v22 = L"NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, const wchar_t *, __int64, const wchar_t *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
      v12,
      v22,
      v21,
      v19,
      v18,
      v16,
      v15,
      0LL);
  }
  if ( a8 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a8[v23] );
  }
  if ( a7 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a7[v24] );
  }
  if ( !a7 )
    v10 = L"NULL";
  v25 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v11;
    while ( a6[v11] );
    v13 = 2 * v11 + 2;
    v25 = a6 == 0LL;
  }
  if ( v25 )
    v8 = L"NULL";
  LOWORD(v27) = v12;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids, v27, v8, v13, v10);
}
