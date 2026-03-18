/*
 * XREFs of WPP_RECORDER_SF_LsLLqss @ 0x140069CF4
 * Callers:
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x140032D20 (ACPIWakeEnableDisableAsyncCallBack.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_LsLLqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        char a10,
        const char *a11,
        __int64 a12)
{
  const char *v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v16; // rdi
  __int64 v17; // r9
  __int64 v18; // r8
  const char *v19; // r10
  __int64 v20; // rdx
  __int64 v21; // rdx
  const char *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v26; // [rsp+20h] [rbp-98h]

  v12 = a7;
  v13 = -1LL;
  v14 = (__int64)a11;
  v16 = a12;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a12 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( *(_BYTE *)(a12 + v17) );
    }
    if ( a11 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a11[v18] );
    }
    v19 = a11;
    if ( !a11 )
      v19 = "NULL";
    if ( a7 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a7[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = a7;
    if ( !a7 )
      v22 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_1095886ccac338778821f66e45f1cb69_Traceguids,
      21LL,
      &a6,
      4LL,
      v22,
      v21,
      &a8,
      4LL,
      &a9,
      4LL,
      &a10,
      8LL,
      v19);
  }
  if ( v16 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( *(_BYTE *)(v16 + v23) );
  }
  if ( v14 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( *(_BYTE *)(v14 + v24) );
  }
  if ( v12 )
  {
    do
      ++v13;
    while ( v12[v13] );
  }
  if ( !v12 )
    v12 = "NULL";
  LOWORD(v26) = 21;
  return WppAutoLogTrace(a1, 2LL, 17LL, &WPP_1095886ccac338778821f66e45f1cb69_Traceguids, v26, &a6, 4LL, v12);
}
