/*
 * XREFs of PoSetSystemState @ 0x1403E6850
 * Callers:
 *     PoRegisterSystemState @ 0x1402B9710 (PoRegisterSystemState.c)
 * Callees:
 *     PopSetSystemState @ 0x1403E6898 (PopSetSystemState.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

void __stdcall PoSetSystemState(EXECUTION_STATE Flags)
{
  char v2; // bl

  v2 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    PopAcquirePolicyLock();
    v2 = 1;
  }
  PopSetSystemState(Flags, 7LL);
  if ( v2 )
    PopReleasePolicyLock();
}
