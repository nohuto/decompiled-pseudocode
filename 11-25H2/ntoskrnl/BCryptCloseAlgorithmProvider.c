/*
 * XREFs of BCryptCloseAlgorithmProvider @ 0x1405FBF14
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x14059DFC4 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_Init @ 0x14059E4E4 (SecureDump_Init.c)
 *     SecureDump_ReInitialize @ 0x14059ECAC (SecureDump_ReInitialize.c)
 *     SmCrEncCleanup @ 0x140A77498 (SmCrEncCleanup.c)
 *     RtlGenerateClass5Guid @ 0x140AA72C0 (RtlGenerateClass5Guid.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall BCryptCloseAlgorithmProvider(BCRYPT_ALG_HANDLE hAlgorithm, ULONG dwFlags)
{
  NTSTATUS v3; // ebx

  v3 = -1073741822;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost) )
  {
    v3 = guard_dispatch_icall_no_overrides(hAlgorithm);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(SepBCryptExtensionHost + 88));
  }
  return v3;
}
