/*
 * XREFs of BCryptGenerateSymmetricKey @ 0x14077FEC8
 * Callers:
 *     SecureDump_SymmetricEncryptionSetup @ 0x14059EF94 (SecureDump_SymmetricEncryptionSetup.c)
 *     SmCrEncStart @ 0x14078C678 (SmCrEncStart.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall BCryptGenerateSymmetricKey(
        BCRYPT_ALG_HANDLE hAlgorithm,
        BCRYPT_KEY_HANDLE *phKey,
        PUCHAR pbKeyObject,
        ULONG cbKeyObject,
        PUCHAR pbSecret,
        ULONG cbSecret,
        ULONG dwFlags)
{
  NTSTATUS v8; // ebx

  v8 = -1073741822;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost) )
  {
    v8 = guard_dispatch_icall_no_overrides(hAlgorithm);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v8;
}
