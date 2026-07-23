/*
 * XREFs of KiEpfInitialize @ 0x140C2BF10
 * Callers:
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     HvlSetupPhysicalFaultNotificationQueue @ 0x140580D20 (HvlSetupPhysicalFaultNotificationQueue.c)
 *     KiEpfDrainCompletionQueue @ 0x1405C0A9C (KiEpfDrainCompletionQueue.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 KiEpfInitialize()
{
  __int64 result; // rax
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rcx
  unsigned __int8 CurrentIrql; // bl
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  result = HvlpFlags >> 20;
  v6 = 0LL;
  v5 = 0;
  if ( (HvlpFlags & 0x100000) != 0 )
  {
    result = ExAllocatePool2(0x40uLL, 0x4A0uLL, 0x4850654BuLL);
    KiEpfHashTable = result;
    if ( result )
    {
      v3 = 37LL;
      do
      {
        *(_QWORD *)(result + 8) = result;
        *(_QWORD *)result = result;
        *(_QWORD *)(result + 16) = 0LL;
        *(_DWORD *)(result + 24) = 0;
        result += 32LL;
        --v3;
      }
      while ( v3 );
      KiEpfCompletionDpc.TargetInfoAsUlong = 275;
      KiEpfCompletionDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)KiEpfCompletionDpcRoutine;
      KiEpfCompletionDpc.DeferredContext = 0LL;
      KiEpfCompletionDpc.DpcData = 0LL;
      KiEpfCompletionDpc.ProcessorHistory = 0LL;
      result = HvlSetupPhysicalFaultNotificationQueue(&v6, &v5, v1, v2);
      if ( (int)result >= 0 )
      {
        KiEpfCompletionQueueSize = (unsigned int)(v5 - 16) >> 3;
        KiEpfCompletionQueue = v6;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
        KiEpfDrainCompletionQueue();
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        result = CurrentIrql;
        __writecr8(CurrentIrql);
      }
    }
  }
  return result;
}
