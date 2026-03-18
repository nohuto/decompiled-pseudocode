/*
 * XREFs of PsSetProcessesWindowState @ 0x140A84100
 * Callers:
 *     <none>
 * Callees:
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PsSetProcessesWindowState(unsigned int a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost) )
  {
    guard_dispatch_icall_no_overrides(a1);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v2;
}
