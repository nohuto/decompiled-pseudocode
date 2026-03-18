/*
 * XREFs of WPP_RECORDER_SF_dDqss @ 0x140060490
 * Callers:
 *     ACPIFanPrepareImpactZoneSupport @ 0x14009DCC8 (ACPIFanPrepareImpactZoneSupport.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dDqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
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
  __int64 v15; // rdx
  __int64 v16; // rdx
  const char *v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rcx
  const char *v20; // rax
  __int64 v21; // rax
  int v23; // [rsp+20h] [rbp-78h]

  v10 = (__int64)a9;
  v11 = -1LL;
  v12 = (__int64)a10;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a10 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a10[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = a10;
    if ( !a10 )
      v17 = "NULL";
    if ( a9 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a9[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = a9;
    if ( !a9 )
      v20 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
      a4,
      &a6,
      4LL,
      &a7,
      4LL,
      &a8,
      8LL,
      v20,
      v19,
      v17,
      v16,
      0LL);
  }
  if ( v12 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( *(_BYTE *)(v12 + v21) );
  }
  if ( v10 )
  {
    do
      ++v11;
    while ( *(_BYTE *)(v10 + v11) );
  }
  LOWORD(v23) = a4;
  return WppAutoLogTrace(a1, 2LL, 16LL, &WPP_667aea33661b3b69513e94c68b16346f_Traceguids, v23, &a6, 4LL, &a7);
}
