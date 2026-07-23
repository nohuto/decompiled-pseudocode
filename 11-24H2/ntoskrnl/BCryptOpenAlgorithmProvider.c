/*
 * XREFs of BCryptOpenAlgorithmProvider @ 0x140AA1E08
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x14059E6E4 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x14059F6B4 (SecureDump_SymmetricEncryptionSetup.c)
 *     SmCrEncStart @ 0x14079BB48 (SmCrEncStart.c)
 *     sub_1408011B4 @ 0x1408011B4 (sub_1408011B4.c)
 *     RtlGenerateClass5Guid @ 0x140AA7730 (RtlGenerateClass5Guid.c)
 * Callees:
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall BCryptOpenAlgorithmProvider(
        BCRYPT_ALG_HANDLE *phAlgorithm,
        LPCWSTR pszAlgId,
        LPCWSTR pszImplementation,
        ULONG dwFlags)
{
  NTSTATUS v6; // ebx

  v6 = -1073741822;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost) )
  {
    v6 = guard_dispatch_icall_no_overrides(phAlgorithm, pszAlgId);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v6;
}
