/*
 * XREFs of KiQueryQuantumReset @ 0x1402CCD5C
 * Callers:
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 *     KiWakePriQueueWaiter @ 0x1402CD480 (KiWakePriQueueWaiter.c)
 *     KeYieldExecution @ 0x14031B9F0 (KeYieldExecution.c)
 *     KeRemovePriQueue @ 0x14032F920 (KeRemovePriQueue.c)
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x140371FE0 (KeSetPriorityThread.c)
 *     KiDirectSwitchThread @ 0x14041E720 (KiDirectSwitchThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1404470CC (KeSetPriorityAndQuantumProcess.c)
 *     KeBoostPriorityThread @ 0x1404DD768 (KeBoostPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1404DDF20 (KeSetBasePriorityThread.c)
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
