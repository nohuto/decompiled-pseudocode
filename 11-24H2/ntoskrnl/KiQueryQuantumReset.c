/*
 * XREFs of KiQueryQuantumReset @ 0x1403241CC
 * Callers:
 *     KeRemovePriQueue @ 0x140208340 (KeRemovePriQueue.c)
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 *     KiQuantumEnd @ 0x140293C70 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x140295020 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x14031ED40 (KiDeferredReadySingleThread.c)
 *     KiWakePriQueueWaiter @ 0x1403248F0 (KiWakePriQueueWaiter.c)
 *     KeYieldExecution @ 0x14033C510 (KeYieldExecution.c)
 *     KeSetPriorityThread @ 0x1403F96D0 (KeSetPriorityThread.c)
 *     KiDirectSwitchThread @ 0x14042B970 (KiDirectSwitchThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14045201C (KeSetPriorityAndQuantumProcess.c)
 *     KeBoostPriorityThread @ 0x1404E7068 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1404E7260 (KeSetBasePriorityThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiQueryQuantumReset(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v8; // ecx

  v1 = *(unsigned __int8 *)(a1 + 651);
  if ( (KiVelocityFlags & 0x40000) != 0 && KiVariableQuantumEnabled )
  {
    v2 = *(unsigned __int8 *)(a1 + 516);
    if ( !v2 )
      return 36;
    v3 = v2 - 1;
    if ( !v3 )
      return 18;
    v4 = v3 - 1;
    if ( !v4 )
      return 2;
    v5 = v4 - 1;
    if ( !v5 )
      return 36;
    v6 = v5 - 1;
    if ( !v6 )
      return 36;
    v8 = v6 - 1;
    if ( !v8 || (unsigned int)(v8 - 1) <= 1 )
      return 2;
  }
  return v1;
}
