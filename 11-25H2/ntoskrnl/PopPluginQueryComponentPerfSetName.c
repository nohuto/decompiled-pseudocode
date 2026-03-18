/*
 * XREFs of PopPluginQueryComponentPerfSetName @ 0x1405CDB94
 * Callers:
 *     PopFxPepPerfInfoQuery @ 0x140742264 (PopFxPepPerfInfoQuery.c)
 * Callees:
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPluginQueryComponentPerfSetName(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  ULONG_PTR v4; // rdi
  __int64 result; // rax
  unsigned __int16 v7; // [rsp+30h] [rbp-18h]

  v4 = *(_QWORD *)(a1 + 64);
  v7 = *a4;
  if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(30LL) )
    PopFxBugCheck(0x605uLL, 0x1EuLL, v4, 0LL);
  result = v7;
  *a4 = v7;
  return result;
}
