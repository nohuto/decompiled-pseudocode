/*
 * XREFs of CmpTransDereferenceTransaction @ 0x14087925C
 * Callers:
 *     CmpRollbackTransactionArray @ 0x14086C1E8 (CmpRollbackTransactionArray.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1408790E8 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140879368 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpTransSearchAddTrans @ 0x14087A4F0 (CmpTransSearchAddTrans.c)
 *     CmpPerformUnloadKey @ 0x14097B52C (CmpPerformUnloadKey.c)
 *     CmpCleanupRollbackPacket @ 0x14097BC50 (CmpCleanupRollbackPacket.c)
 *     NtOpenKeyTransactedEx @ 0x1409E3C50 (NtOpenKeyTransactedEx.c)
 *     CmpTransInitializeTransaction @ 0x140A04118 (CmpTransInitializeTransaction.c)
 *     CmpCleanupTransactionState @ 0x140A05204 (CmpCleanupTransactionState.c)
 *     CmpCleanupLightWeightTransaction @ 0x140A063A0 (CmpCleanupLightWeightTransaction.c)
 *     CmpAbortRollbackPacket @ 0x140AA66B0 (CmpAbortRollbackPacket.c)
 *     CmRmFinalizeRecovery @ 0x140AA88D4 (CmRmFinalizeRecovery.c)
 *     NtCreateKeyTransacted @ 0x140AE3B00 (NtCreateKeyTransacted.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall CmpTransDereferenceTransaction(__int64 a1)
{
  return ObfDereferenceObject((PVOID)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
}
