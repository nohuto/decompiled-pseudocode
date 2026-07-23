/*
 * XREFs of BCryptEncrypt @ 0x1404F63C4
 * Callers:
 *     SmCrAuthEncrypt @ 0x1404BF58C (SmCrAuthEncrypt.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x14059E6E4 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_Encrypt_DmpData @ 0x14059E950 (SecureDump_Encrypt_DmpData.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
  NTSTATUS v12; // ebx

  v12 = -1073741822;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost) )
  {
    v12 = guard_dispatch_icall_no_overrides(hKey, pbInput);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(SepBCryptExtensionHost + 88));
  }
  return v12;
}
