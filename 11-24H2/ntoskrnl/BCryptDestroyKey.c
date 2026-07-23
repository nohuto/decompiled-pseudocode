/*
 * XREFs of BCryptDestroyKey @ 0x140605924
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x14059E6E4 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_Init @ 0x14059EC04 (SecureDump_Init.c)
 *     SecureDump_ReInitialize @ 0x14059F3CC (SecureDump_ReInitialize.c)
 *     SmCrEncCleanup @ 0x140A729C4 (SmCrEncCleanup.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall BCryptDestroyKey(BCRYPT_KEY_HANDLE hKey)
{
  NTSTATUS v2; // ebx
  __int64 v3; // rdx

  v2 = -1073741822;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost) )
  {
    v2 = guard_dispatch_icall_no_overrides(hKey, v3);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(SepBCryptExtensionHost + 88));
  }
  return v2;
}
