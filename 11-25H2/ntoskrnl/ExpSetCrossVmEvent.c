/*
 * XREFs of ExpSetCrossVmEvent @ 0x140995510
 * Callers:
 *     NtSetEventEx @ 0x140995350 (NtSetEventEx.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpSetCrossVmEvent(__int64 a1)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  unsigned int v3; // ebx

  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot) )
  {
    v2 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot;
  }
  else
  {
    if ( !ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest) )
      return (unsigned int)-1073741822;
    v2 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest;
  }
  v3 = guard_dispatch_icall_no_overrides(a1);
  ExReleaseExtensionTable(v2);
  return v3;
}
