/*
 * XREFs of ??9?$basic_iterator@PEAVIVisualTreeClient@@@detail@@QEBA_NAEBV01@@Z @ 0x180099640
 * Callers:
 *     ?BeginPreCompute@CVisualTree@@QEAAXXZ @ 0x180097C40 (-BeginPreCompute@CVisualTree@@QEAAXXZ.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x180098020 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x180098EA0 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall detail::basic_iterator<IVisualTreeClient *>::operator!=(_QWORD *a1, _QWORD *a2)
{
  return *a1 != *a2;
}
