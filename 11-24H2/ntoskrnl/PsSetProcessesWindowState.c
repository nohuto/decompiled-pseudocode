/*
 * XREFs of PsSetProcessesWindowState @ 0x140A7DD90
 * Callers:
 *     <none>
 * Callees:
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PsSetProcessesWindowState(unsigned int a1, __int64 a2)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost) )
  {
    guard_dispatch_icall_no_overrides(a1, a2);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v4;
}
