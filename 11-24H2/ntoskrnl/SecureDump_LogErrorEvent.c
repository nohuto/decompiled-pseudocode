/*
 * XREFs of SecureDump_LogErrorEvent @ 0x1405A214C
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1405A17A4 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x1405A1E04 (SecureDump_LoadCertAndProvisionKey.c)
 *     SecureDump_PrepareForInit @ 0x1405A217C (SecureDump_PrepareForInit.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1405A2774 (SecureDump_SymmetricEncryptionSetup.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140595C08 (McTemplateK0q_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall SecureDump_LogErrorEvent(int a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Kernel_IOEnableBits & 4) != 0 )
    return McTemplateK0q_EtwWriteTransfer(
             IoMgrProvider_Context,
             (const EVENT_DESCRIPTOR *)IoMgr_DumpEncryptionFailure,
             a3,
             a1);
  return result;
}
