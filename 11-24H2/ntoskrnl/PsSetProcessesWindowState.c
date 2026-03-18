/*
 * XREFs of PsSetProcessesWindowState @ 0x140A83270
 * Callers:
 *     <none>
 * Callees:
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PsSetProcessesWindowState(unsigned int a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebx

  v6 = 0;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost) )
  {
    guard_dispatch_icall_no_overrides(a1, a2, v4, v5);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v6;
}
