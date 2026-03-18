/*
 * XREFs of PopPluginRegisterComponentPerfStates @ 0x1405CDC78
 * Callers:
 *     PopFxRegisterComponentPerfStates @ 0x140742464 (PopFxRegisterComponentPerfStates.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PopPluginRegisterComponentPerfStates(__int64 a1)
{
  char v1; // r9

  v1 = 0;
  if ( *(_QWORD *)(a1 + 64) )
    return guard_dispatch_icall_no_overrides(32LL);
  return v1;
}
