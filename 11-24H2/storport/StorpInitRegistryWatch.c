/*
 * XREFs of StorpInitRegistryWatch @ 0x1400703B0
 * Callers:
 *     RaidAdapterStartRegistryWatch @ 0x1400621DC (RaidAdapterStartRegistryWatch.c)
 *     DllInitialize @ 0x1400A3C90 (DllInitialize.c)
 *     NvmeAdapterStartRegistryWatch @ 0x1400D8E94 (NvmeAdapterStartRegistryWatch.c)
 *     RaidUnitGetDeviceParameters @ 0x1401BCAD4 (RaidUnitGetDeviceParameters.c)
 * Callees:
 *     <none>
 */

void __fastcall StorpInitRegistryWatch(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 16) = a1;
  ExInitializeResourceLite((PERESOURCE)(a2 + 24));
  *(_QWORD *)(a2 + 128) = 0LL;
  *(_QWORD *)(a2 + 144) = StorpWatchForRegistryChanges;
  *(_QWORD *)(a2 + 152) = a2;
  KeInitializeEvent((PRKEVENT)(a2 + 160), NotificationEvent, 0);
  *(_WORD *)(a2 + 184) = 1;
}
