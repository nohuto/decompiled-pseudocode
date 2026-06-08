/*
 * XREFs of WPP_RECORDER_SF_SsD @ 0x14000AAD4
 * Callers:
 *     ValidateAcpi_PSD_TSD @ 0x140030B7C (ValidateAcpi_PSD_TSD.c)
 *     ValidatePssCore @ 0x1400326A0 (ValidatePssCore.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_SsD(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        const wchar_t *a6,
        const char *a7)
{
  const wchar_t *v7; // rdi
  const char *v8; // rbx
  __int64 v9; // rbp
  unsigned int v11; // r15d
  __int64 v12; // r14
  __int64 v13; // rdx
  const char *v14; // r9
  __int64 v15; // rax
  __int64 v16; // r8
  const wchar_t *v17; // rcx
  bool v18; // zf
  __int64 v19; // rsi
  bool v20; // zf
  int v22; // [rsp+20h] [rbp-68h]

  v7 = a6;
  v8 = a7;
  v9 = -1LL;
  v11 = a4;
  v12 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a7 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a7[v13] );
    }
    v14 = a7;
    if ( !a7 )
      v14 = "NULL";
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
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
      v11,
      v17,
      v16,
      v14);
  }
  v18 = a7 == 0LL;
  if ( a7 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a7[v19] );
    v18 = a7 == 0LL;
  }
  if ( v18 )
    v8 = "NULL";
  v20 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
    v12 = 2 * v9 + 2;
    v20 = a6 == 0LL;
  }
  if ( v20 )
    v7 = L"NULL";
  LOWORD(v22) = v11;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids, v22, v7, v12, v8);
}
