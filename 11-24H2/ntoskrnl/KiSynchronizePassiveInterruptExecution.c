/*
 * XREFs of KiSynchronizePassiveInterruptExecution @ 0x1404C8588
 * Callers:
 *     KeSynchronizeExecution @ 0x1402539F0 (KeSynchronizeExecution.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiSynchronizePassiveInterruptExecution(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(*(PVOID *)(a1 + 128), Executive, 0, 0, 0LL);
  LOBYTE(a3) = guard_dispatch_icall_no_overrides(a3, v6, v7, v8);
  KeSetEvent(*(PRKEVENT *)(a1 + 128), 0, 0);
  KeLeaveCriticalRegion();
  return a3;
}
