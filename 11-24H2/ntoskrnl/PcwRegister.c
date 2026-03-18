/*
 * XREFs of PcwRegister @ 0x140A4C490
 * Callers:
 *     ExpRegisterCounterSet @ 0x1407C15BC (ExpRegisterCounterSet.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExpPcwDisabledStatus @ 0x140A4C4F0 (ExpPcwDisabledStatus.c)
 */

NTSTATUS __stdcall PcwRegister(PPCW_REGISTRATION *Registration, PPCW_REGISTRATION_INFORMATION Info)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  NTSTATUS v7; // ebx

  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
  {
    v7 = guard_dispatch_icall_no_overrides(Registration, Info, v5, v6);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  }
  else
  {
    *Registration = 0LL;
    return ExpPcwDisabledStatus(v4);
  }
  return v7;
}
