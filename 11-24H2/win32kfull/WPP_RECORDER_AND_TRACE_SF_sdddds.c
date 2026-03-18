/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sdddds @ 0x1402E63EC
 * Callers:
 *     xxxSBTrackInit @ 0x1402E6E60 (xxxSBTrackInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_sdddds(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        const char *a9,
        char a10,
        char a11,
        char a12,
        char a13,
        __int64 a14)
{
  _UNKNOWN **result; // rax
  const char *v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v21; // rdx
  __int64 v22; // rax
  const char *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rbx
  int v26; // [rsp+20h] [rbp-88h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF

  result = &retaddr;
  v15 = a9;
  v16 = -1LL;
  v17 = a14;
  if ( a2 )
  {
    if ( a14 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( *(_BYTE *)(a14 + v21) );
    }
    if ( a9 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a9[v22] );
    }
    WORD1(v23) = WORD1(a9);
    if ( !a9 )
      v23 = "NULL";
    HIWORD(v26) = WORD1(v23);
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids);
  }
  if ( a3 )
  {
    if ( v17 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( *(_BYTE *)(v17 + v24) );
    }
    if ( a9 )
    {
      do
        ++v16;
      while ( a9[v16] );
      v25 = v16 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    if ( !a9 )
      v15 = "NULL";
    LOWORD(v26) = 64;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          9LL,
                          &WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
                          v26,
                          v15,
                          v25,
                          &a10,
                          4LL,
                          &a11,
                          4LL,
                          &a12);
  }
  return result;
}
