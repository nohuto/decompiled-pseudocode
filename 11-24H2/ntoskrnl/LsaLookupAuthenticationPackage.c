/*
 * XREFs of LsaLookupAuthenticationPackage @ 0x14078F530
 * Callers:
 *     <none>
 * Callees:
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __cdecl LsaLookupAuthenticationPackage(
        HANDLE LsaHandle,
        PLSA_STRING PackageName,
        PULONG AuthenticationPackage)
{
  NTSTATUS v5; // ebx

  v5 = -1073741822;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost) )
  {
    v5 = guard_dispatch_icall_no_overrides(LsaHandle, PackageName);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  }
  return v5;
}
