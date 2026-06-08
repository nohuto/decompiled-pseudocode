/*
 * XREFs of WPP_RECORDER_SF_SSii @ 0x14000A004
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x140032130 (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_SSii(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const wchar_t *a6,
        const wchar_t *a7)
{
  const wchar_t *v7; // rsi
  const wchar_t *v8; // rbx
  __int64 v9; // rdi
  __int64 v11; // rbp
  __int64 v12; // rax
  const wchar_t *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
  const wchar_t *v16; // rcx
  __int64 v17; // rax
  bool v18; // zf
  int v20; // [rsp+20h] [rbp-78h]

  v7 = a6;
  v8 = a7;
  v9 = -1LL;
  v11 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a7 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a7[v12] );
    }
    v13 = a7;
    if ( !a7 )
      v13 = L"NULL";
    if ( a6 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a6[v14] );
      v15 = 2 * v14 + 2;
    }
    else
    {
      v15 = 10LL;
    }
    v16 = a6;
    if ( !a6 )
      v16 = L"NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
      70LL,
      v16,
      v15,
      v13);
  }
  if ( a7 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a7[v17] );
  }
  if ( !a7 )
    v8 = L"NULL";
  v18 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
    v11 = 2 * v9 + 2;
    v18 = a6 == 0LL;
  }
  if ( v18 )
    v7 = L"NULL";
  LOWORD(v20) = 70;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids, v20, v7, v11, v8);
}
