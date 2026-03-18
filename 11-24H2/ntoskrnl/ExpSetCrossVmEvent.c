/*
 * XREFs of ExpSetCrossVmEvent @ 0x14098A940
 * Callers:
 *     NtSetEventEx @ 0x14098A780 (NtSetEventEx.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpSetCrossVmEvent(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  struct _EX_RUNDOWN_REF *v6; // rdi
  unsigned int v7; // ebx

  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot) )
  {
    v6 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot;
  }
  else
  {
    if ( !ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest) )
      return (unsigned int)-1073741822;
    v6 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest;
  }
  v7 = guard_dispatch_icall_no_overrides(a1, a2, v4, v5);
  ExReleaseExtensionTable(v6);
  return v7;
}
