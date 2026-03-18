/*
 * XREFs of KiQueryQuantumReset @ 0x1402E5930
 * Callers:
 *     KeSetActualBasePriorityThread @ 0x14020E620 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402691AC (KeSetPriorityAndQuantumProcess.c)
 *     KeYieldExecution @ 0x14027B240 (KeYieldExecution.c)
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 *     KiWakePriQueueWaiter @ 0x1402E6BE0 (KiWakePriQueueWaiter.c)
 *     KeRemovePriQueue @ 0x140305410 (KeRemovePriQueue.c)
 *     KiDirectSwitchThread @ 0x140315A20 (KiDirectSwitchThread.c)
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x14032F910 (KiQueueReadyThread.c)
 *     KeSetPriorityThread @ 0x1403778B0 (KeSetPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1404713B0 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x1404B71EC (KeBoostPriorityThread.c)
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
