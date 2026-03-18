/*
 * XREFs of BCryptGenRandom @ 0x140608278
 * Callers:
 *     SecureDump_SymmetricEncryptionSetup @ 0x1405A2774 (SecureDump_SymmetricEncryptionSetup.c)
 *     SmCrGenRandom @ 0x14060F494 (SmCrGenRandom.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall BCryptGenRandom(BCRYPT_ALG_HANDLE hAlgorithm, PUCHAR pbBuffer, ULONG cbBuffer, ULONG dwFlags)
{
  NTSTATUS v6; // ebx

  v6 = -1073741822;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost) )
  {
    v6 = guard_dispatch_icall_no_overrides(0LL, pbBuffer, cbBuffer, 2LL);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(SepBCryptExtensionHost + 88));
  }
  return v6;
}
