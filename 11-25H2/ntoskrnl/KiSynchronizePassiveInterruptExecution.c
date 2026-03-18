/*
 * XREFs of KiSynchronizePassiveInterruptExecution @ 0x14041A5E8
 * Callers:
 *     KeSynchronizeExecution @ 0x14041A4F0 (KeSynchronizeExecution.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiSynchronizePassiveInterruptExecution(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(*(PVOID *)(a1 + 128), Executive, 0, 0, 0LL);
  LOBYTE(a3) = guard_dispatch_icall_no_overrides(a3, v6);
  KeSetEvent(*(PRKEVENT *)(a1 + 128), 0, 0);
  KeLeaveCriticalRegion();
  return a3;
}
