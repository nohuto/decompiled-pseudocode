/*
 * XREFs of ExpRegisterCounterSet @ 0x1407B1DEC
 * Callers:
 *     ExpPcwHostCallback @ 0x1407B1B10 (ExpPcwHostCallback.c)
 *     EtwRegisterCounters @ 0x14081F820 (EtwRegisterCounters.c)
 * Callees:
 *     PcwRegister @ 0x140A498E0 (PcwRegister.c)
 */

NTSTATUS __fastcall ExpRegisterCounterSet(PPCW_REGISTRATION *Registration, PPCW_REGISTRATION_INFORMATION Info)
{
  NTSTATUS result; // eax

  result = PcwRegister(Registration, Info);
  if ( result == -1073741584 )
  {
    Info->Version = 256;
    return PcwRegister(Registration, Info);
  }
  return result;
}
