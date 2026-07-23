/*
 * XREFs of KiUpdatePriorityMatrixForRunningTransition @ 0x1402A4BC0
 * Callers:
 *     KiDispatchInterrupt @ 0x1402A32B0 (KiDispatchInterrupt.c)
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 *     KiIdleSchedule @ 0x1402A5920 (KiIdleSchedule.c)
 *     KiCheckForThreadDispatch @ 0x1402C5DAC (KiCheckForThreadDispatch.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiHandleDeferredPreemption @ 0x1402E03DC (KiHandleDeferredPreemption.c)
 *     KeYieldExecution @ 0x14031B9F0 (KeYieldExecution.c)
 *     KiExecuteSmtIsolationThread @ 0x1405C01A0 (KiExecuteSmtIsolationThread.c)
 *     KiIdleLoop @ 0x1406ACBD0 (KiIdleLoop.c)
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
