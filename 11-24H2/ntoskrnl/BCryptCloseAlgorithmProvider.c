/*
 * XREFs of BCryptCloseAlgorithmProvider @ 0x1406081C8
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1405A17A4 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_Init @ 0x1405A1CC4 (SecureDump_Init.c)
 *     SecureDump_ReInitialize @ 0x1405A248C (SecureDump_ReInitialize.c)
 *     SmCrEncCleanup @ 0x140A786C4 (SmCrEncCleanup.c)
 *     RtlGenerateClass5Guid @ 0x140AAC700 (RtlGenerateClass5Guid.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall BCryptCloseAlgorithmProvider(BCRYPT_ALG_HANDLE hAlgorithm, ULONG dwFlags)
{
  NTSTATUS v3; // ebx
  __int64 v4; // r8
  __int64 v5; // r9

  v3 = -1073741822;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost) )
  {
    v3 = guard_dispatch_icall_no_overrides(hAlgorithm, 0LL, v4, v5);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(SepBCryptExtensionHost + 88));
  }
  return v3;
}
