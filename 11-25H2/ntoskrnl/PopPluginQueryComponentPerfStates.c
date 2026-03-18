/*
 * XREFs of PopPluginQueryComponentPerfStates @ 0x1405CDC20
 * Callers:
 *     PopFxPepPerfInfoQuery @ 0x140742264 (PopFxPepPerfInfoQuery.c)
 * Callees:
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPluginQueryComponentPerfStates(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 64);
  result = guard_dispatch_icall_no_overrides(31LL);
  if ( !(_BYTE)result )
    PopFxBugCheck(0x605uLL, 0x1FuLL, v1, 0LL);
  return result;
}
