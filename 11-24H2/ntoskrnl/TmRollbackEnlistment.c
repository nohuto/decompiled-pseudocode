/*
 * XREFs of TmRollbackEnlistment @ 0x1404F9F70
 * Callers:
 *     CmpRollbackTransactionArray @ 0x140870518 (CmpRollbackTransactionArray.c)
 *     CmpPerformUnloadKey @ 0x140963D3C (CmpPerformUnloadKey.c)
 *     CmpAbortRollbackPacket @ 0x140AA17AC (CmpAbortRollbackPacket.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmRollbackEnlistment(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmRollbackEnlistment(Enlistment, TmVirtualClock);
}
