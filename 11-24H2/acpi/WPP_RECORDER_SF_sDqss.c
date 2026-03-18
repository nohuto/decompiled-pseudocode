/*
 * XREFs of WPP_RECORDER_SF_sDqss @ 0x140042118
 * Callers:
 *     ACPIFilterIrpSurpriseRemoval @ 0x1400BDC20 (ACPIFilterIrpSurpriseRemoval.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sDqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const char *a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v19; // r9
  __int64 v20; // r9
  const char *v21; // r11
  __int64 v22; // r8
  __int64 v23; // r8
  const char *v24; // r10
  __int64 v25; // rdx
  __int64 v26; // rdx
  const char *v27; // rcx
  int v28; // [rsp+20h] [rbp-78h]

  v10 = a6;
  v11 = -1LL;
  v12 = (__int64)a9;
  v14 = (__int64)a10;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a10 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a10[v19] );
      v20 = v19 + 1;
    }
    else
    {
      v20 = 5LL;
    }
    v21 = a10;
    if ( !a10 )
      v21 = "NULL";
    if ( a9 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a9[v22] );
      v23 = v22 + 1;
    }
    else
    {
      v23 = 5LL;
    }
    v24 = a9;
    if ( !a9 )
      v24 = "NULL";
    if ( a6 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( a6[v25] );
      v26 = v25 + 1;
    }
    else
    {
      v26 = 5LL;
    }
    v27 = a6;
    if ( !a6 )
      v27 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_9d2f517172373c998ff4f5e88626c58e_Traceguids,
      31LL,
      v27,
      v26,
      &a7,
      4LL,
      &a8,
      8LL,
      v24,
      v23,
      v21,
      v20,
      0LL);
  }
  if ( v14 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *(_BYTE *)(v14 + v15) );
  }
  if ( v12 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(v12 + v16) );
  }
  if ( a6 )
  {
    do
      ++v11;
    while ( a6[v11] );
    v17 = v11 + 1;
  }
  else
  {
    v17 = 5LL;
  }
  if ( !a6 )
    v10 = "NULL";
  LOWORD(v28) = 31;
  return WppAutoLogTrace(a1, 4LL, 12LL, &WPP_9d2f517172373c998ff4f5e88626c58e_Traceguids, v28, v10, v17, &a7);
}
