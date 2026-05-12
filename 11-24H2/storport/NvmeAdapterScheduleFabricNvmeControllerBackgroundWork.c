/*
 * XREFs of NvmeAdapterScheduleFabricNvmeControllerBackgroundWork @ 0x1400E7168
 * Callers:
 *     NvmeAdapterCompleteFabricControllerAsyncEventCommand @ 0x1400DF310 (NvmeAdapterCompleteFabricControllerAsyncEventCommand.c)
 *     NvmeAdapterCompleteGetControllerLogPageRequestAsyncEvent @ 0x1400DF820 (NvmeAdapterCompleteGetControllerLogPageRequestAsyncEvent.c)
 *     NvmeAdapterFabricControllerStartUpdateNamespaces @ 0x1400E24C4 (NvmeAdapterFabricControllerStartUpdateNamespaces.c)
 *     NvmeAdapterNvmeControllerBackgroundWork @ 0x1400E4750 (NvmeAdapterNvmeControllerBackgroundWork.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall NvmeAdapterScheduleFabricNvmeControllerBackgroundWork(__int64 a1, __int64 a2)
{
  KeClearEvent((PRKEVENT)(a1 + 184));
  return KeSetCoalescableTimer((PKTIMER)(a1 + 280), (LARGE_INTEGER)(-10000 * a2), 0, 1u, (PKDPC)(a1 + 344));
}
