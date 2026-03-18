/*
 * XREFs of BCryptGetProperty @ 0x140A41A50
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x14059DFC4 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x14059EF94 (SecureDump_SymmetricEncryptionSetup.c)
 *     SmCrEncStart @ 0x14078C678 (SmCrEncStart.c)
 *     RtlGenerateClass5Guid @ 0x140AA72C0 (RtlGenerateClass5Guid.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall BCryptGetProperty(
        BCRYPT_HANDLE hObject,
        LPCWSTR pszProperty,
        PUCHAR pbOutput,
        ULONG cbOutput,
        ULONG *pcbResult,
        ULONG dwFlags)
{
  NTSTATUS v7; // ebx

  v7 = -1073741822;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost) )
  {
    v7 = guard_dispatch_icall_no_overrides(hObject);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v7;
}
