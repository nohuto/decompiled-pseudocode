/*
 * XREFs of ExpCrossVmWnfPull @ 0x1407C5A6C
 * Callers:
 *     ExpWnfPopulateStateData @ 0x140835B5C (ExpWnfPopulateStateData.c)
 * Callees:
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpCrossVmWnfPull(__int64 a1)
{
  struct _EX_RUNDOWN_REF *v1; // rdi
  unsigned int v3; // ebx

  v1 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest) )
  {
    v3 = guard_dispatch_icall_no_overrides(a1, ExpWnfPopulateStateDataRemoteCallback);
    ExReleaseExtensionTable(v1);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v3;
}
