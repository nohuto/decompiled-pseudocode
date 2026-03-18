/*
 * XREFs of PoSetSystemState @ 0x140476720
 * Callers:
 *     PoRegisterSystemState @ 0x1404257E0 (PoRegisterSystemState.c)
 * Callees:
 *     PopSetSystemState @ 0x140476768 (PopSetSystemState.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
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
