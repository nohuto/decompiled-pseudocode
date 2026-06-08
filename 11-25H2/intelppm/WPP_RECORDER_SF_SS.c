/*
 * XREFs of WPP_RECORDER_SF_ss @ 0x14000CF88
 * Callers:
 *     AcpiParseCore @ 0x14003F8A0 (AcpiParseCore.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_ss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const char *a6,
        const char *a7)
{
  const char *v7; // rsi
  __int64 v8; // rbx
  const char *v9; // rdi
  __int64 v11; // r8
  const char *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdx
  const char *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  int v19; // [rsp+20h] [rbp-48h]

  v7 = a6;
  v8 = -1LL;
  v9 = a7;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a7 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a7[v11] );
    }
    v12 = a7;
    if ( !a7 )
      v12 = "NULL";
    if ( a6 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a6[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = a6;
    if ( !a6 )
      v15 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
      76LL,
      v15,
      v14,
      v12);
  }
  if ( a7 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a7[v16] );
  }
  if ( !a7 )
    v9 = "NULL";
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
    v17 = v8 + 1;
  }
  else
  {
    v17 = 5LL;
  }
  if ( !a6 )
    v7 = "NULL";
  LOWORD(v19) = 76;
  return WppAutoLogTrace(a1, 2LL, 1LL, &WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids, v19, v7, v17, v9);
}
