/*
 * XREFs of PcwRegister @ 0x140A498E0
 * Callers:
 *     ExpRegisterCounterSet @ 0x1407B1DEC (ExpRegisterCounterSet.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExpPcwDisabledStatus @ 0x140A49940 (ExpPcwDisabledStatus.c)
 */

NTSTATUS __stdcall PcwRegister(PPCW_REGISTRATION *Registration, PPCW_REGISTRATION_INFORMATION Info)
{
  __int64 v3; // rcx
  NTSTATUS v4; // ebx

  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
  {
    v4 = guard_dispatch_icall_no_overrides(Registration);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  }
  else
  {
    *Registration = 0LL;
    return ExpPcwDisabledStatus(v3);
  }
  return v4;
}
