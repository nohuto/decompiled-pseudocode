/*
 * XREFs of ExpQueryCrossVmEvent @ 0x140ABBDA0
 * Callers:
 *     NtQueryEvent @ 0x1408C0360 (NtQueryEvent.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpQueryCrossVmEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r9
  struct _EX_RUNDOWN_REF *v7; // rdi
  unsigned int v8; // ebx

  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot) )
  {
    v7 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot;
  }
  else
  {
    if ( !ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest) )
      return (unsigned int)-1073741822;
    v7 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest;
  }
  v8 = guard_dispatch_icall_no_overrides(a1, a2, a3, v6);
  ExReleaseExtensionTable(v7);
  return v8;
}
