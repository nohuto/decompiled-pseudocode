/*
 * XREFs of ExpCrossVmWnfPush @ 0x140A6BCE8
 * Callers:
 *     ExpNtDeleteWnfStateData @ 0x1407AFFD8 (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpCrossVmWnfPush(__int64 a1, int a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  unsigned int v3; // ebx

  v2 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot;
  if ( a2 )
    v2 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest;
  if ( ExGetExtensionTable(v2) )
  {
    v3 = guard_dispatch_icall_no_overrides(0LL);
    ExReleaseExtensionTable(v2);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v3;
}
