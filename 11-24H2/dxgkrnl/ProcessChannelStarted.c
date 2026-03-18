/*
 * XREFs of ProcessChannelStarted @ 0x14020C580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 ProcessChannelStarted()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx

  result = ((__int64 (*)(void))qword_140160398)();
  v5 = result;
  if ( result )
  {
    result = WdLogNewEntry5_WdTrace(v2, v1, v3, v4);
    *(_QWORD *)(result + 24) = v5;
    WdLogGlobalForLineNumber = 708;
  }
  return result;
}
