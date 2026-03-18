/*
 * XREFs of LsaLogonUser @ 0x14078F450
 * Callers:
 *     <none>
 * Callees:
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall LsaLogonUser(
        HANDLE LsaHandle,
        PLSA_STRING OriginName,
        SECURITY_LOGON_TYPE LogonType,
        ULONG AuthenticationPackage,
        PVOID AuthenticationInformation,
        ULONG AuthenticationInformationLength,
        PTOKEN_GROUPS LocalGroups,
        PTOKEN_SOURCE SourceContext,
        PVOID *ProfileBuffer,
        PULONG ProfileBufferLength,
        PLUID LogonId,
        PHANDLE Token,
        PQUOTA_LIMITS Quotas,
        PNTSTATUS SubStatus)
{
  NTSTATUS v18; // ebx

  v18 = -1073741822;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost) )
  {
    v18 = guard_dispatch_icall_no_overrides(LsaHandle, OriginName, (unsigned int)LogonType, AuthenticationPackage);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  }
  return v18;
}
