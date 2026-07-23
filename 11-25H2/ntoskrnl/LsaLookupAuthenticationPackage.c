/*
 * XREFs of LsaLookupAuthenticationPackage @ 0x1407802A0
 * Callers:
 *     <none>
 * Callees:
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __cdecl LsaLookupAuthenticationPackage(
        HANDLE LsaHandle,
        PLSA_STRING PackageName,
        PULONG AuthenticationPackage)
{
  NTSTATUS v4; // ebx

  v4 = -1073741822;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost) )
  {
    v4 = guard_dispatch_icall_no_overrides(LsaHandle);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  }
  return v4;
}
