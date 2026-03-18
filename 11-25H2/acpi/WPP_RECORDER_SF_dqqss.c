/*
 * XREFs of WPP_RECORDER_SF_Dqqss @ 0x140061D68
 * Callers:
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x14003BCB4 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Dqqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v14; // rdx
  __int64 v15; // rdx
  const char *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  const char *v19; // rax
  __int64 v20; // rax
  int v22; // [rsp+20h] [rbp-78h]

  v10 = (__int64)a9;
  v11 = -1LL;
  v12 = (__int64)a10;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a10 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a10[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = a10;
    if ( !a10 )
      v16 = "NULL";
    if ( a9 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a9[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = a9;
    if ( !a9 )
      v19 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_9e686de552473f0b161fad9208bd891d_Traceguids,
      17LL,
      &a6,
      4LL,
      &a7,
      8LL,
      &a8,
      8LL,
      v19,
      v18,
      v16,
      v15,
      0LL);
  }
  if ( v12 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *(_BYTE *)(v12 + v20) );
  }
  if ( v10 )
  {
    do
      ++v11;
    while ( *(_BYTE *)(v10 + v11) );
  }
  LOWORD(v22) = 17;
  return WppAutoLogTrace(a1, 2LL, 6LL, &WPP_9e686de552473f0b161fad9208bd891d_Traceguids, v22, &a6, 4LL, &a7);
}
