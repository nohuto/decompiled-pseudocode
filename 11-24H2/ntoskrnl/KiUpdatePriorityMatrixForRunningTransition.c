/*
 * XREFs of KiUpdatePriorityMatrixForRunningTransition @ 0x140294FC0
 * Callers:
 *     KiDispatchInterrupt @ 0x1402936B0 (KiDispatchInterrupt.c)
 *     KiQuantumEnd @ 0x140293C70 (KiQuantumEnd.c)
 *     KiHandleDeferredPreemption @ 0x14029602C (KiHandleDeferredPreemption.c)
 *     KiIdleSchedule @ 0x140296C40 (KiIdleSchedule.c)
 *     KiCheckForThreadDispatch @ 0x14031D21C (KiCheckForThreadDispatch.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KeYieldExecution @ 0x14033C510 (KeYieldExecution.c)
 *     KiExecuteSmtIsolationThread @ 0x1405C2BD0 (KiExecuteSmtIsolationThread.c)
 *     KiIdleLoop @ 0x1406ABC30 (KiIdleLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUpdatePriorityMatrixForRunningTransition(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax

  a1[1] = a2;
  if ( *(_BYTE *)(a2 + 388) == 1 )
    *(_DWORD *)(a2 + 132) += MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a2 + 436);
  *(_BYTE *)(a2 + 388) = 2;
  v2 = a1[24];
  v3 = a1[25];
  result = *(_QWORD *)(v2 + 400);
  if ( (result & v3) != 0 )
    _InterlockedAnd64((volatile signed __int64 *)(v2 + 400), ~v3);
  return result;
}
