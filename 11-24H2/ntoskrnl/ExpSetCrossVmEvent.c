/*
 * XREFs of ExpSetCrossVmEvent @ 0x140974030
 * Callers:
 *     NtSetEventEx @ 0x140973E70 (NtSetEventEx.c)
 * Callees:
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpSetCrossVmEvent(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v4; // rdi
  unsigned int v5; // ebx

  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot) )
  {
    v4 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot;
  }
  else
  {
    if ( !ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest) )
      return (unsigned int)-1073741822;
    v4 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest;
  }
  v5 = guard_dispatch_icall_no_overrides(a1, a2);
  ExReleaseExtensionTable(v4);
  return v5;
}
