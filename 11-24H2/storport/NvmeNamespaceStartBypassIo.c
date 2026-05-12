/*
 * XREFs of NvmeNamespaceStartBypassIo @ 0x1401128A0
 * Callers:
 *     <none>
 * Callees:
 *     GetNvmeNamespace @ 0x14006B1C0 (GetNvmeNamespace.c)
 *     NvmeNamespaceIoIrp @ 0x140105140 (NvmeNamespaceIoIrp.c)
 */

__int64 __fastcall NvmeNamespaceStartBypassIo(__int64 a1)
{
  _DWORD *NvmeNamespace; // rax
  IRP *v2; // rdx

  NvmeNamespace = GetNvmeNamespace(a1);
  return NvmeNamespaceIoIrp((__int64)NvmeNamespace, v2);
}
