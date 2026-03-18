/*
 * XREFs of ExpCrossVmWnfPull @ 0x1407C560C
 * Callers:
 *     ExpWnfPopulateStateData @ 0x140837C4C (ExpWnfPopulateStateData.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpCrossVmWnfPull(__int64 a1, __int64 a2, __int64 a3)
{
  struct _EX_RUNDOWN_REF *v3; // rdi
  __int64 v6; // r9
  unsigned int v7; // ebx

  v3 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest) )
  {
    v7 = guard_dispatch_icall_no_overrides(a1, ExpWnfPopulateStateDataRemoteCallback, a3, v6);
    ExReleaseExtensionTable(v3);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v7;
}
