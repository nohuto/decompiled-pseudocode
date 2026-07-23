/*
 * XREFs of ExpCrossVmWnfPush @ 0x140A67A84
 * Callers:
 *     ExpNtDeleteWnfStateData @ 0x1407BFBF8 (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpCrossVmWnfPush(__int64 a1, unsigned int a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  unsigned int v4; // ebx

  v2 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot;
  if ( a2 )
    v2 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest;
  if ( ExGetExtensionTable(v2) )
  {
    v4 = guard_dispatch_icall_no_overrides(0LL, a2);
    ExReleaseExtensionTable(v2);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v4;
}
