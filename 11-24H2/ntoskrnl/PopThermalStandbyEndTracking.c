/*
 * XREFs of PopThermalStandbyEndTracking @ 0x1404C11AC
 * Callers:
 *     PopThermalCsEntry @ 0x14041B95C (PopThermalCsEntry.c)
 *     PopCheckAndHandleThermalConditions @ 0x140499AC0 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalSxEntry @ 0x1404D31A8 (PopThermalSxEntry.c)
 *     PopThermalCsExit @ 0x1405D13D8 (PopThermalCsExit.c)
 *     PopThermalStateTransitionWorker @ 0x140752A80 (PopThermalStateTransitionWorker.c)
 * Callees:
 *     PopTraceThermalStandbyComplete @ 0x1405D3B84 (PopTraceThermalStandbyComplete.c)
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_140F0AF9C;
  result = 0LL;
  byte_140F0AF9C = 0;
  if ( byte_140F0AF9D )
  {
    byte_140F0AF9D = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_140F0AFA0) / 0x989680uLL, a3);
  }
  return result;
}
