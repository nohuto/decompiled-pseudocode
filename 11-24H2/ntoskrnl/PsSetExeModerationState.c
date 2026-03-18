/*
 * XREFs of PsSetExeModerationState @ 0x1405E5400
 * Callers:
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PsSetExeModerationState(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // r9
  unsigned int v7; // ebx

  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost) )
  {
    v7 = guard_dispatch_icall_no_overrides(a1, a2, a3, v6);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(PspBamExtensionHost + 88));
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v7;
}
