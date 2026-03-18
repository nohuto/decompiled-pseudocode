/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_Ds @ 0x1C0066498
 * Callers:
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@@Z @ 0x1C0065CC0 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_Ds(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        const char *a10)
{
  _UNKNOWN **result; // rax
  const char *v11; // rdi
  struct _LIST_ENTRY *Flink; // rbp
  __int64 v13; // rbx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // rcx
  int v20; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v11 = a10;
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v13 = -1LL;
  if ( a2 )
  {
    if ( a10 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a10[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = a10;
    if ( !a10 )
      v19 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, const char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
                            a1,
                            43LL,
                            &WPP_8fd0ae42632e393bc5b9afafd6bcf777_Traceguids,
                            10LL,
                            &a9,
                            4LL,
                            v19,
                            v18,
                            0LL);
  }
  if ( a3 )
  {
    if ( v11 )
    {
      do
        ++v13;
      while ( v11[v13] );
      v16 = v13 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    if ( !v11 )
      v11 = "NULL";
    LOWORD(v20) = 10;
    return (_UNKNOWN **)WppAutoLogTrace(
                          Flink,
                          4LL,
                          13LL,
                          &WPP_8fd0ae42632e393bc5b9afafd6bcf777_Traceguids,
                          v20,
                          &a9,
                          4LL,
                          v11,
                          v16,
                          0LL);
  }
  return result;
}
