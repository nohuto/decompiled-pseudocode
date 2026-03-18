/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qds @ 0x1402C79EC
 * Callers:
 *     ?SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z @ 0x1402C46CC (-SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z.c)
 *     ?s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_N@Z @ 0x1402C50DC (-s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_qds(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        unsigned __int16 a7,
        __int64 a8,
        char a9,
        char a10,
        const char *a11)
{
  _UNKNOWN **result; // rax
  const char *v12; // rdi
  __int64 v13; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // rcx
  __int64 v20; // rbx
  int v21; // [rsp+20h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  v12 = a11;
  v13 = -1LL;
  if ( a2 )
  {
    if ( a11 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a11[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = a11;
    if ( !a11 )
      v19 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
                            a7,
                            &a9,
                            8LL,
                            &a10,
                            4LL,
                            v19,
                            v18,
                            0LL);
  }
  if ( a3 )
  {
    if ( v12 )
    {
      do
        ++v13;
      while ( v12[v13] );
      v20 = v13 + 1;
    }
    else
    {
      v20 = 5LL;
    }
    if ( !v12 )
      v12 = "NULL";
    LOWORD(v21) = a7;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          a5,
                          7LL,
                          &WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
                          v21,
                          &a9,
                          8LL,
                          &a10,
                          4LL,
                          v12,
                          v20,
                          0LL);
  }
  return result;
}
