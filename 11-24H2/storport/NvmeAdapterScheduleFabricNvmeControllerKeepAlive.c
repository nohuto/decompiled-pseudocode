/*
 * XREFs of NvmeAdapterScheduleFabricNvmeControllerKeepAlive @ 0x1400E71CC
 * Callers:
 *     NvmeAdapterNvmeControllerKeepAliveWork @ 0x1400E4AA0 (NvmeAdapterNvmeControllerKeepAliveWork.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall NvmeAdapterScheduleFabricNvmeControllerKeepAlive(__int64 a1, __int64 a2)
{
  KeClearEvent((PRKEVENT)(a1 + 208));
  return KeSetCoalescableTimer((PKTIMER)(a1 + 408), (LARGE_INTEGER)(-10000 * a2), 0, 1u, (PKDPC)(a1 + 472));
}
