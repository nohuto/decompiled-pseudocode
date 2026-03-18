/*
 * XREFs of MiDeleteVadBitmap @ 0x140A33648
 * Callers:
 *     MiDeleteFinalPageTables @ 0x14045CD60 (MiDeleteFinalPageTables.c)
 * Callees:
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     MiDeletePagablePteRange @ 0x140383DB4 (MiDeletePagablePteRange.c)
 *     MiHyperSpaceSize @ 0x1403E2A20 (MiHyperSpaceSize.c)
 *     MiReturnFullProcessCharges @ 0x140434620 (MiReturnFullProcessCharges.c)
 *     MiGetProcessPartition @ 0x1404402D0 (MiGetProcessPartition.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     xHalTimerWatchdogStop @ 0x140494A10 (xHalTimerWatchdogStop.c)
 *     MiUpdateChargedWsles @ 0x1404F37B0 (MiUpdateChargedWsles.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     MiReturnFullProcessCommitment @ 0x1409E454C (MiReturnFullProcessCommitment.c)
 */

struct _KTHREAD *__fastcall MiDeleteVadBitmap(_QWORD *BugCheckParameter2)
{
  ULONG_PTR v1; // r9
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rbp
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // r10
  __int64 v10; // r14
  __int64 ProcessPartition; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r15
  _QWORD *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r8
  int v21; // [rsp+20h] [rbp-78h]
  _OWORD v22[3]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v23; // [rsp+70h] [rbp-28h]

  v1 = BugCheckParameter2[80];
  memset(v22, 0, sizeof(v22));
  v23 = 0LL;
  if ( v1 )
    KeBugCheckEx(0x1Au, 0x3450uLL, (ULONG_PTR)BugCheckParameter2, v1, 0LL);
  result = KeGetCurrentThread();
  Process = result->ApcState.Process;
  if ( Process[2].ActiveProcessors )
  {
    xHalTimerWatchdogStop();
    v6 = *(_QWORD **)(v5 + 1040);
    v7 = v6[124];
    v8 = MiHyperSpaceSize();
    MiDeletePagablePteRange((__int64)&Process[2].ReadyListHead.Blink, 0x11u, v9, v8 + v9 - 1, v21, 0, (__int64)v22);
    v10 = *((_QWORD *)&v22[0] + 1);
    ProcessPartition = MiGetProcessPartition((__int64)BugCheckParameter2);
    v12 = v6[126] + v7;
    v13 = 0LL;
    v14 = ProcessPartition;
    v15 = v6 + 171;
    v16 = 2LL;
    do
    {
      v13 += *v15++;
      --v16;
    }
    while ( v16 );
    v17 = v13 + v12;
    if ( v17 )
      MiReturnFullProcessCharges((__int64)BugCheckParameter2, v17);
    v18 = v17 - v10;
    if ( v18 )
      MiReturnCommit(v14, v18, 0);
    result = (struct _KTHREAD *)BugCheckParameter2[159];
    if ( result )
    {
      PdcCreateWatchdogAroundClientCall();
      result = (struct _KTHREAD *)BugCheckParameter2[159];
    }
    v19 = BugCheckParameter2[158];
    if ( v19 )
    {
      MiUpdateChargedWsles((__int64)&Process[2].ReadyListHead.Blink, -v19);
      return (struct _KTHREAD *)MiReturnFullProcessCommitment((__int64)BugCheckParameter2, v20);
    }
  }
  return result;
}
