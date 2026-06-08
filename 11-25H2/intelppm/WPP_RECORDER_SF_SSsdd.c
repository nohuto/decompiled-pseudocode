/*
 * XREFs of WPP_RECORDER_SF_SSsdd @ 0x14000B4A0
 * Callers:
 *     ValidatePssSymmetry @ 0x14002FB38 (ValidatePssSymmetry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_SSsdd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const wchar_t *a6,
        const wchar_t *a7,
        __int64 a8)
{
  const wchar_t *v8; // r14
  const wchar_t *v9; // rsi
  __int64 v10; // rbx
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  const wchar_t *v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rax
  bool v19; // zf
  int v21; // [rsp+20h] [rbp-88h]

  v8 = a6;
  v9 = a7;
  v10 = -1LL;
  v12 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a8 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( *(_BYTE *)(a8 + v13) );
    }
    if ( a7 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a7[v14] );
    }
    if ( a6 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a6[v15] );
    }
    WORD1(v16) = WORD1(a6);
    if ( !a6 )
      v16 = L"NULL";
    HIWORD(v21) = WORD1(v16);
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids);
  }
  if ( a8 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_BYTE *)(a8 + v17) );
  }
  if ( a7 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a7[v18] );
  }
  if ( !a7 )
    v9 = L"NULL";
  v19 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v10;
    while ( a6[v10] );
    v12 = 2 * v10 + 2;
    v19 = a6 == 0LL;
  }
  if ( v19 )
    v8 = L"NULL";
  LOWORD(v21) = 71;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids, v21, v8, v12, v9);
}
