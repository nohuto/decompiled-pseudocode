/*
 * XREFs of CmpTransDereferenceTransaction @ 0x140870EB0
 * Callers:
 *     CmpPerformUnloadKey @ 0x140864C24 (CmpPerformUnloadKey.c)
 *     CmpCleanupRollbackPacket @ 0x140865348 (CmpCleanupRollbackPacket.c)
 *     CmpCleanupTransactionState @ 0x1408666A8 (CmpCleanupTransactionState.c)
 *     CmpCleanupLightWeightTransaction @ 0x1408671C0 (CmpCleanupLightWeightTransaction.c)
 *     CmpRollbackTransactionArray @ 0x14086AFEC (CmpRollbackTransactionArray.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140870454 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1408705D4 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTrans @ 0x140885A48 (CmpTransSearchAddTrans.c)
 *     NtOpenKeyTransactedEx @ 0x140A315F0 (NtOpenKeyTransactedEx.c)
 *     CmpTransInitializeTransaction @ 0x140A8174C (CmpTransInitializeTransaction.c)
 *     CmpAbortRollbackPacket @ 0x140AA1760 (CmpAbortRollbackPacket.c)
 *     CmRmFinalizeRecovery @ 0x140AA384C (CmRmFinalizeRecovery.c)
 *     NtCreateKeyTransacted @ 0x140AD2B50 (NtCreateKeyTransacted.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall CmpTransDereferenceTransaction(__int64 a1)
{
  return ObfDereferenceObject((PVOID)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
}
