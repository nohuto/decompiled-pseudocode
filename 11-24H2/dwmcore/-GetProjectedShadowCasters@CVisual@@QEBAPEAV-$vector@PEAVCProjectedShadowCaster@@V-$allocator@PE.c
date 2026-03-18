/*
 * XREFs of ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x18003BA50
 * Callers:
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x1800324F0 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 *     ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x1800325B4 (-ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18003941C (--1CVisual@@MEAA@XZ.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18003C140 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800BF1FC (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18010FDE0 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ?AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x180222AAC (-AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?RemoveProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x18024FD70 (-RemoveProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 * Callees:
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x180048940 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

__int64 __fastcall CVisual::GetProjectedShadowCasters(__int64 a1)
{
  unsigned int Slot; // eax
  __int64 v2; // r10
  __int64 v3; // rdx

  if ( (**(_DWORD **)(a1 + 232) & 0x80000) == 0 )
    return 0LL;
  Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*(_QWORD *)(a1 + 232), 13LL);
  if ( Slot >= *(_DWORD *)(v2 + 4) )
    v3 = 0LL;
  else
    v3 = *(unsigned int *)(v2 + 4) + 15LL + v2 + 8LL * Slot - (((unsigned __int8)*(_DWORD *)(v2 + 4) + 15) & 7);
  return *(_QWORD *)v3;
}
