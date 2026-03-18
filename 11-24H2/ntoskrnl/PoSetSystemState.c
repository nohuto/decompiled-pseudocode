/*
 * XREFs of PoSetSystemState @ 0x1403F2B30
 * Callers:
 *     PoRegisterSystemState @ 0x1403310B0 (PoRegisterSystemState.c)
 * Callees:
 *     PopSetSystemState @ 0x1403F2B78 (PopSetSystemState.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
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
