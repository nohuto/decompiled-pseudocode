/*
 * XREFs of ??1CBspPolygonListBuilder@@QEAA@XZ @ 0x1801E2AAC
 * Callers:
 *     ?PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x180169400 (-PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBspPolygonListBuilder::~CBspPolygonListBuilder(CBspPolygonListBuilder *this)
{
  void *v1; // rbx
  HANDLE ProcessHeap; // rax

  v1 = (void *)*((_QWORD *)this + 4);
  if ( v1 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v1);
  }
}
