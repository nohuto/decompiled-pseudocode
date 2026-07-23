/*
 * XREFs of BCryptGenRandom @ 0x14060597C
 * Callers:
 *     SecureDump_SymmetricEncryptionSetup @ 0x14059F6B4 (SecureDump_SymmetricEncryptionSetup.c)
 *     SmCrGenRandom @ 0x14060DA54 (SmCrGenRandom.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall BCryptGenRandom(BCRYPT_ALG_HANDLE hAlgorithm, PUCHAR pbBuffer, ULONG cbBuffer, ULONG dwFlags)
{
  NTSTATUS v5; // ebx

  v5 = -1073741822;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost) )
  {
    v5 = guard_dispatch_icall_no_overrides(0LL, pbBuffer);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(SepBCryptExtensionHost + 88));
  }
  return v5;
}
