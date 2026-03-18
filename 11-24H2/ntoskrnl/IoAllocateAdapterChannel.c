/*
 * XREFs of IoAllocateAdapterChannel @ 0x140596830
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall IoAllocateAdapterChannel(
        PDMA_ADAPTER DmaAdapter,
        PDEVICE_OBJECT DeviceObject,
        ULONG NumberOfMapRegisters,
        PDRIVER_CONTROL ExecutionRoutine,
        PVOID Context)
{
  return guard_dispatch_icall_no_overrides(DmaAdapter, DeviceObject, *(_QWORD *)&NumberOfMapRegisters, ExecutionRoutine);
}
