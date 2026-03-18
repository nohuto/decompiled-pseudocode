/*
 * XREFs of KiUpdatePriorityMatrixForRunningTransition @ 0x140330AC0
 * Callers:
 *     KeYieldExecution @ 0x14027B240 (KeYieldExecution.c)
 *     KiCheckForThreadDispatch @ 0x140285CEC (KiCheckForThreadDispatch.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiHandleDeferredPreemption @ 0x1402F2F88 (KiHandleDeferredPreemption.c)
 *     KiSwapThread @ 0x14031CEE0 (KiSwapThread.c)
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 *     KiIdleSchedule @ 0x140330B40 (KiIdleSchedule.c)
 *     KiExecuteSmtIsolationThread @ 0x1405BEAF0 (KiExecuteSmtIsolationThread.c)
 *     KiIdleLoop @ 0x1406A0960 (KiIdleLoop.c)
 * Callees:
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall KiUpdatePriorityMatrixForRunningTransition(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  a1[1] = a2;
  if ( *(_BYTE *)(a2 + 388) == 1 )
    *(_DWORD *)(a2 + 132) += MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a2 + 436);
  *(_BYTE *)(a2 + 388) = 2;
  result = Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(a1);
  if ( (_DWORD)result )
  {
    v4 = a1[24];
    v5 = a1[25];
    result = *(_QWORD *)(v4 + 400);
    if ( (result & v5) != 0 )
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 400), ~v5);
  }
  return result;
}
