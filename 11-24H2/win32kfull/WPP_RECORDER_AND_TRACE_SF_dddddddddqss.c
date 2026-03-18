/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dddddddddqss @ 0x1402AC1D0
 * Callers:
 *     ?TraceTopology@CMonitorTopology@@QEBAXXZ @ 0x1402AB77C (-TraceTopology@CMonitorTopology@@QEBAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_dddddddddqss(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        __int64 a19,
        __int64 a20)
{
  _UNKNOWN **result; // rax
  __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  char *v30; // [rsp+28h] [rbp-C9h]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+1Fh] BYREF

  result = &retaddr;
  v21 = a19;
  v22 = -1LL;
  v23 = a20;
  if ( a2 )
  {
    if ( a20 )
    {
      v27 = -1LL;
      do
        ++v27;
      while ( *(_BYTE *)(a20 + v27) );
    }
    if ( a19 )
    {
      v28 = -1LL;
      do
        ++v28;
      while ( *(_BYTE *)(a19 + v28) );
    }
    v30 = &a9;
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids);
  }
  if ( a3 )
  {
    if ( v23 )
    {
      v29 = -1LL;
      do
        ++v29;
      while ( *(_BYTE *)(v23 + v29) );
    }
    if ( v21 )
    {
      do
        ++v22;
      while ( *(_BYTE *)(v21 + v22) );
    }
    LOWORD(v30) = 24;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          5LL,
                          7LL,
                          &WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids,
                          (_DWORD)v30,
                          &a9,
                          4LL,
                          &a10,
                          4LL,
                          &a11,
                          4LL,
                          &a12);
  }
  return result;
}
