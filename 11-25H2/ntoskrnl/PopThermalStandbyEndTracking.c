/*
 * XREFs of PopThermalStandbyEndTracking @ 0x1404C7224
 * Callers:
 *     PopThermalCsEntry @ 0x14043125C (PopThermalCsEntry.c)
 *     PopCheckAndHandleThermalConditions @ 0x14049FAD0 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalSxEntry @ 0x1404DA77C (PopThermalSxEntry.c)
 *     PopThermalCsExit @ 0x1405CF254 (PopThermalCsExit.c)
 *     PopThermalStateTransitionWorker @ 0x140748690 (PopThermalStateTransitionWorker.c)
 * Callees:
 *     PopTraceThermalStandbyComplete @ 0x1405D1C10 (PopTraceThermalStandbyComplete.c)
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_140F0A49C;
  result = 0LL;
  byte_140F0A49C = 0;
  if ( byte_140F0A49D )
  {
    byte_140F0A49D = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_140F0A4A0) / 0x989680uLL, a3);
  }
  return result;
}
