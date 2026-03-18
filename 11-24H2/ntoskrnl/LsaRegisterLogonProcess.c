/*
 * XREFs of LsaRegisterLogonProcess @ 0x14078F5E0
 * Callers:
 *     <none>
 * Callees:
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall LsaRegisterLogonProcess(
        PLSA_STRING LogonProcessName,
        PHANDLE LsaHandle,
        PLSA_OPERATIONAL_MODE SecurityMode)
{
  NTSTATUS v6; // ebx
  __int64 v7; // r9

  v6 = -1073741822;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost) )
  {
    v6 = guard_dispatch_icall_no_overrides(LogonProcessName, LsaHandle, SecurityMode, v7);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  }
  return v6;
}
