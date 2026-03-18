/*
 * XREFs of BCryptEncrypt @ 0x1404F8AE4
 * Callers:
 *     SmCrAuthEncrypt @ 0x1404C6130 (SmCrAuthEncrypt.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1405A17A4 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_Encrypt_DmpData @ 0x1405A1A10 (SecureDump_Encrypt_DmpData.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __stdcall BCryptEncrypt(
        BCRYPT_KEY_HANDLE hKey,
        PUCHAR pbInput,
        ULONG cbInput,
        void *pPaddingInfo,
        PUCHAR pbIV,
        ULONG cbIV,
        PUCHAR pbOutput,
        ULONG cbOutput,
        ULONG *pcbResult,
        ULONG dwFlags)
{
  NTSTATUS v14; // ebx

  v14 = -1073741822;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost) )
  {
    v14 = guard_dispatch_icall_no_overrides(hKey, pbInput, cbInput, pPaddingInfo);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(SepBCryptExtensionHost + 88));
  }
  return v14;
}
