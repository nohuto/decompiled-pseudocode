/*
 * XREFs of ExpRegisterCounterSet @ 0x1407C15BC
 * Callers:
 *     ExpPcwHostCallback @ 0x1407C12E0 (ExpPcwHostCallback.c)
 *     EtwRegisterCounters @ 0x14082F560 (EtwRegisterCounters.c)
 * Callees:
 *     PcwRegister @ 0x140A4C490 (PcwRegister.c)
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
