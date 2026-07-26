/*
 * XREFs of ?ndisIfInitializePhase1@@YAJXZ @ 0x14018E8A4
 * Callers:
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 * Callees:
 *     Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline @ 0x140092EB0 (Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ @ 0x1400CEB04 (-ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1401394B4 (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 *     ?ndisIfStackTableSubsystemInitialize@@YAXXZ @ 0x140147608 (-ndisIfStackTableSubsystemInitialize@@YAXXZ.c)
 *     ?ndisIfExternalProvidedInterfaceSubsystemInitialize@@YAXXZ @ 0x1401479A4 (-ndisIfExternalProvidedInterfaceSubsystemInitialize@@YAXXZ.c)
 *     ?ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ @ 0x140148824 (-ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfThreadObjectSubsystemInitialize@@YAJXZ @ 0x14018E100 (-ndisIfThreadObjectSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x14018E438 (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x14018E6A0 (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfCompartmentStateSubsystemInitialize@@YAJXZ @ 0x14018EBE0 (-ndisIfCompartmentStateSubsystemInitialize@@YAJXZ.c)
 */

__int64 ndisIfInitializePhase1(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned __int8 (*v2)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  unsigned __int8 (*v3)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8

  RtlRunOnceInitialize(&stru_14011CA98);
  ndisIfInterfaceSubsystemInitialize();
  qword_14011CAA8 = (__int64)&qword_14011CAA0;
  qword_14011CAA0 = (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011CAA0;
  qword_14011CAB8 = (__int64)&qword_14011CAB0;
  qword_14011CAB0 = (__int64)&qword_14011CAB0;
  ndisIfExternalProvidedInterfaceSubsystemInitialize();
  ndisIfStackTableSubsystemInitialize();
  KeInitializeSpinLock(&qword_14011C9A0);
  KeInitializeTimer(&Timer);
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)ndisCmCleanupDpcRoutine, 0LL);
  stru_14011C9F8.Parameter = 0LL;
  stru_14011C9F8.List.Flink = 0LL;
  stru_14011C9F8.WorkerRoutine = (void (__fastcall *)(void *))ndisCmCleanupWorkRoutine;
  KeInitializeSpinLock(&SpinLock);
  ndisIfThreadObjectSubsystemInitialize();
  ndisIfCompartmentStateSubsystemInitialize();
  ndisIfIndexAllocatorSubsystemInitialize(v1, v0, v2);
  ndisIfLuidAllocatorSubsystemInitialize();
  ndisIfNdisProvidedInterfaceSubsystemInitialize();
  if ( (unsigned int)Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline() )
    ndisRegisterKnobs(&stru_14011A820, 1LL, v3, 0LL);
  return 0LL;
}
