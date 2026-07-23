/*
 * XREFs of BCryptSetProperty @ 0x14078F280
 * Callers:
 *     SecureDump_SymmetricEncryptionSetup @ 0x14059F6B4 (SecureDump_SymmetricEncryptionSetup.c)
 *     SmCrEncStart @ 0x14079BB48 (SmCrEncStart.c)
 * Callees:
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall BCryptSetProperty(
        BCRYPT_HANDLE hObject,
        LPCWSTR pszProperty,
        PUCHAR pbInput,
        ULONG cbInput,
        ULONG dwFlags)
{
  NTSTATUS v7; // ebx

  v7 = -1073741822;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost) )
  {
    v7 = guard_dispatch_icall_no_overrides(hObject, pszProperty);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v7;
}
