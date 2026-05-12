/*
 * XREFs of NvmeNamespaceCloseIrp @ 0x1400FC7EC
 * Callers:
 *     RaDriverCloseIrp @ 0x1401B50B0 (RaDriverCloseIrp.c)
 * Callees:
 *     RaidHandleCreateCloseIrp @ 0x14002A9C0 (RaidHandleCreateCloseIrp.c)
 */

__int64 __fastcall NvmeNamespaceCloseIrp(__int64 a1, __int64 a2)
{
  return RaidHandleCreateCloseIrp(*(_DWORD *)(a1 + 96), a2);
}
