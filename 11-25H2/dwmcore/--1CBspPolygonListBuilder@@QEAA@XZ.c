/*
 * XREFs of ??1CBspPolygonListBuilder@@QEAA@XZ @ 0x1801EC4BC
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18012B970 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
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
