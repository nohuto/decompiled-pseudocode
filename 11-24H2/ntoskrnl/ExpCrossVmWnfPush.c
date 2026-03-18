/*
 * XREFs of ExpCrossVmWnfPush @ 0x140A6E584
 * Callers:
 *     ExpNtDeleteWnfStateData @ 0x1407BF7A8 (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpCrossVmWnfPush(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  struct _EX_RUNDOWN_REF *v4; // rdi
  unsigned int v8; // ebx

  v4 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot;
  if ( a2 )
    v4 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest;
  if ( ExGetExtensionTable(v4) )
  {
    v8 = guard_dispatch_icall_no_overrides(0LL, a2, a3, a4);
    ExReleaseExtensionTable(v4);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v8;
}
