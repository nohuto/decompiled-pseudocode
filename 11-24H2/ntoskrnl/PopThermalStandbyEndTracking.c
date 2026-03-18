/*
 * XREFs of PopThermalStandbyEndTracking @ 0x1404C7D4C
 * Callers:
 *     PopThermalCsEntry @ 0x1404277CC (PopThermalCsEntry.c)
 *     PopCheckAndHandleThermalConditions @ 0x14049EC88 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalSxEntry @ 0x1404D972C (PopThermalSxEntry.c)
 *     PopThermalCsExit @ 0x1405D3C64 (PopThermalCsExit.c)
 *     PopThermalStateTransitionWorker @ 0x140754760 (PopThermalStateTransitionWorker.c)
 * Callees:
 *     PopTraceThermalStandbyComplete @ 0x1405D6570 (PopTraceThermalStandbyComplete.c)
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_140F0AD1C;
  result = 0LL;
  byte_140F0AD1C = 0;
  if ( byte_140F0AD1D )
  {
    byte_140F0AD1D = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_140F0AD20) / 0x989680uLL, a3);
  }
  return result;
}
