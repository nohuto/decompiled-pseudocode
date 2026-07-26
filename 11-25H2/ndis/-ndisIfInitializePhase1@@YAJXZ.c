/*
 * XREFs of ?ndisIfInitializePhase1@@YAJXZ @ 0x1401998DC
 * Callers:
 *     DriverEntry @ 0x140196234 (DriverEntry.c)
 * Callees:
 *     ?ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ @ 0x1400D6144 (-ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ.c)
 *     ?ndisIfStackTableSubsystemInitialize@@YAXXZ @ 0x1401522C8 (-ndisIfStackTableSubsystemInitialize@@YAXXZ.c)
 *     ?ndisIfExternalProvidedInterfaceSubsystemInitialize@@YAXXZ @ 0x140152664 (-ndisIfExternalProvidedInterfaceSubsystemInitialize@@YAXXZ.c)
 *     ?ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ @ 0x1401534F4 (-ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfThreadObjectSubsystemInitialize@@YAJXZ @ 0x140199138 (-ndisIfThreadObjectSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x140199470 (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1401996D8 (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase1@@YAXXZ @ 0x1401999B8 (-ndisIfCompartmentSubsystemInitializePhase1@@YAXXZ.c)
 *     ?ndisIfCompartmentStateSubsystemInitialize@@YAJXZ @ 0x140199C40 (-ndisIfCompartmentStateSubsystemInitialize@@YAJXZ.c)
 */

__int64 ndisIfInitializePhase1(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned __int8 (*v2)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8

  RtlRunOnceInitialize(&stru_140126AD8);
  ndisIfInterfaceSubsystemInitialize();
  ndisIfCompartmentSubsystemInitializePhase1();
  qword_140126B58 = (__int64)&qword_140126B50;
  qword_140126B50 = (__int64)&qword_140126B50;
  ndisIfExternalProvidedInterfaceSubsystemInitialize();
  ndisIfStackTableSubsystemInitialize();
  KeInitializeSpinLock(&qword_1401269E0);
  KeInitializeTimer(&Timer);
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)ndisCmCleanupDpcRoutine, 0LL);
  stru_140126A38.Parameter = 0LL;
  stru_140126A38.List.Flink = 0LL;
  stru_140126A38.WorkerRoutine = (void (__fastcall *)(void *))ndisCmCleanupWorkRoutine;
  KeInitializeSpinLock(&SpinLock);
  ndisIfThreadObjectSubsystemInitialize();
  ndisIfCompartmentStateSubsystemInitialize();
  ndisIfIndexAllocatorSubsystemInitialize(v1, v0, v2);
  ndisIfLuidAllocatorSubsystemInitialize();
  ndisIfNdisProvidedInterfaceSubsystemInitialize();
  return 0LL;
}
