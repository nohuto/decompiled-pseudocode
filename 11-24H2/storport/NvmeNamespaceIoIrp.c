/*
 * XREFs of NvmeNamespaceIoIrp @ 0x140105140
 * Callers:
 *     RaDriverIoIrp @ 0x14000A140 (RaDriverIoIrp.c)
 *     NvmeNamespaceStartBypassIo @ 0x1401128A0 (NvmeNamespaceStartBypassIo.c)
 * Callees:
 *     NvmeProcessIoIrp @ 0x14011DC30 (NvmeProcessIoIrp.c)
 */

__int64 __fastcall NvmeNamespaceIoIrp(__int64 a1, IRP *a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax

  if ( (unsigned int)(*(_DWORD *)(a1 + 96) - 5) > 1 )
  {
    result = NvmeProcessIoIrp();
    v3 = result;
    if ( (_DWORD)result == 259 )
      return result;
  }
  else
  {
    v3 = -1073741810;
  }
  a2->IoStatus.Status = v3;
  a2->IoStatus.Information = 0LL;
  IofCompleteRequest(a2, 0);
  return v3;
}
