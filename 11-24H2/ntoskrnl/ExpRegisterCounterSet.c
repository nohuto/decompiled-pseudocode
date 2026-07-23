/*
 * XREFs of ExpRegisterCounterSet @ 0x1407C1A0C
 * Callers:
 *     ExpPcwHostCallback @ 0x1407C1730 (ExpPcwHostCallback.c)
 *     EtwRegisterCounters @ 0x14082FD58 (EtwRegisterCounters.c)
 * Callees:
 *     PcwRegister @ 0x140A43020 (PcwRegister.c)
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
