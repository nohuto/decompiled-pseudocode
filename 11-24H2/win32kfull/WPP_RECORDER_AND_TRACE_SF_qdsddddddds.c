/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qdsddddddds @ 0x14014EC58
 * Callers:
 *     ??0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x14014E360 (--0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_qdsddddddds(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10,
        const char *a11,
        char a12,
        char a13,
        char a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19)
{
  _UNKNOWN **result; // rax
  const char *v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rax
  char *v29; // [rsp+28h] [rbp-B9h]
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+1Fh] BYREF

  result = &retaddr;
  v20 = a11;
  v21 = -1LL;
  v22 = a19;
  if ( a2 )
  {
    if ( a19 )
    {
      v27 = -1LL;
      do
        ++v27;
      while ( *(_BYTE *)(a19 + v27) );
    }
    if ( a11 )
    {
      v28 = -1LL;
      do
        ++v28;
      while ( a11[v28] );
    }
    v29 = &a9;
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
  }
  if ( a3 )
  {
    if ( v22 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( *(_BYTE *)(v22 + v25) );
    }
    if ( v20 )
    {
      do
        ++v21;
      while ( v20[v21] );
      v26 = v21 + 1;
    }
    else
    {
      v26 = 5LL;
    }
    if ( !v20 )
      v20 = "NULL";
    LOWORD(v29) = 12;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          7LL,
                          &WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
                          (_DWORD)v29,
                          &a9,
                          8LL,
                          &a10,
                          4LL,
                          v20,
                          v26,
                          &a12,
                          4LL,
                          &a13,
                          4LL,
                          &a14);
  }
  return result;
}
