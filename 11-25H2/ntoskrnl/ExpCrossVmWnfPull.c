/*
 * XREFs of ExpCrossVmWnfPull @ 0x1407B5E3C
 * Callers:
 *     ExpWnfPopulateStateData @ 0x1408986EC (ExpWnfPopulateStateData.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpCrossVmWnfPull(__int64 a1)
{
  struct _EX_RUNDOWN_REF *v1; // rdi
  unsigned int v3; // ebx

  v1 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest) )
  {
    v3 = guard_dispatch_icall_no_overrides(a1);
    ExReleaseExtensionTable(v1);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v3;
}
