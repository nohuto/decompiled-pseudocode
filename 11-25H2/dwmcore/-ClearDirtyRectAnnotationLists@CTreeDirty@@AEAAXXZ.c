/*
 * XREFs of ?ClearDirtyRectAnnotationLists@CTreeDirty@@AEAAXXZ @ 0x180248344
 * Callers:
 *     ?BeginPreCompute@CVisualTree@@QEAAXXZ @ 0x180097C40 (-BeginPreCompute@CVisualTree@@QEAAXXZ.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x180098020 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x180098EA0 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 * Callees:
 *     ?ReleaseDirtyRegionAnnotationBuffers@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ @ 0x180133D74 (-ReleaseDirtyRegionAnnotationBuffers@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ.c)
 */

void __fastcall CTreeDirty::ClearDirtyRectAnnotationLists(CTreeDirty *this)
{
  _QWORD *v1; // rax
  __int64 v2; // rdx
  char *v3; // rbx

  v1 = (_QWORD *)((char *)this + 456);
  v2 = 9LL;
  do
  {
    v1[1] = v1;
    *v1 = v1;
    v1 += 2;
    --v2;
  }
  while ( v2 );
  v3 = (char *)this + 600;
  CDirtyRegionAnnotationAllocationSet::ReleaseDirtyRegionAnnotationBuffers((CTreeDirty *)((char *)this + 600));
  *((_QWORD *)v3 + 2) = v3;
  *((_QWORD *)v3 + 3) = v3;
  *((_QWORD *)v3 + 1) = v3 + 16;
  *(_QWORD *)v3 = v3 + 16;
  *((_DWORD *)v3 + 392) = 0;
}
