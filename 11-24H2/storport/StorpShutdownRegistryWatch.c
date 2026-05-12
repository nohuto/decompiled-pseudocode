/*
 * XREFs of StorpShutdownRegistryWatch @ 0x140070418
 * Callers:
 *     RaidUnitFreeResources @ 0x14000ED44 (RaidUnitFreeResources.c)
 *     DllUnload @ 0x1400A5120 (DllUnload.c)
 *     NvmeAdapterReleaseResources @ 0x14019B0CC (NvmeAdapterReleaseResources.c)
 *     RaidAdapterReleaseResources @ 0x1401BD580 (RaidAdapterReleaseResources.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall StorpShutdownRegistryWatch(__int64 a1)
{
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 24), 1u);
  ZwClose(*(HANDLE *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0LL;
  ExReleaseResourceLite((PERESOURCE)(a1 + 24));
  KeLeaveCriticalRegion();
  KeWaitForSingleObject((PVOID)(a1 + 160), Executive, 0, 0, 0LL);
  return ExDeleteResourceLite((PERESOURCE)(a1 + 24));
}
