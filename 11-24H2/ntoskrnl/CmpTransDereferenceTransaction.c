/*
 * XREFs of CmpTransDereferenceTransaction @ 0x14087D58C
 * Callers:
 *     CmpRollbackTransactionArray @ 0x140870518 (CmpRollbackTransactionArray.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x14087D418 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14087D698 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpTransSearchAddTrans @ 0x14087E39C (CmpTransSearchAddTrans.c)
 *     CmpPerformUnloadKey @ 0x140963D3C (CmpPerformUnloadKey.c)
 *     CmpCleanupRollbackPacket @ 0x140964460 (CmpCleanupRollbackPacket.c)
 *     NtOpenKeyTransactedEx @ 0x1409DE6B0 (NtOpenKeyTransactedEx.c)
 *     CmpTransInitializeTransaction @ 0x140A00648 (CmpTransInitializeTransaction.c)
 *     CmpCleanupTransactionState @ 0x140A01734 (CmpCleanupTransactionState.c)
 *     CmpCleanupLightWeightTransaction @ 0x140A028D0 (CmpCleanupLightWeightTransaction.c)
 *     CmpAbortRollbackPacket @ 0x140AA17AC (CmpAbortRollbackPacket.c)
 *     CmRmFinalizeRecovery @ 0x140AA3958 (CmRmFinalizeRecovery.c)
 *     NtCreateKeyTransacted @ 0x140AE53E0 (NtCreateKeyTransacted.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall CmpTransDereferenceTransaction(__int64 a1)
{
  return ObfDereferenceObject((PVOID)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
}
