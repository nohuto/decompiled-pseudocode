/*
 * XREFs of ?SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@2@@std@@@Z @ 0x1802975FC
 * Callers:
 *     ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E7AF0 (-PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RemoveDirtyRegionVisualizationData@CVisual@@AEAAXXZ @ 0x18010A760 (-RemoveDirtyRegionVisualizationData@CVisual@@AEAAXXZ.c)
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x180296AA8 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UD2D_RECT_F@@$0A@@@@Z.c)
 * Callees:
 *     ?ReserveSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@SAAEAT?$_Align_type@N$07@std@@PEAPEAV12@I@Z @ 0x1801082B4 (-ReserveSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@SAAEAT-$_Align_type@N$07@std@@PEAP.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x180170E90 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 */

__int64 __fastcall CVisual::SetDirtyRegionVisualizationData(__int64 a1, __int64 a2)
{
  __int64 *v2; // rcx
  _DWORD *v4; // r11
  __int64 result; // rax
  __int64 v6; // rcx
  char v7; // r10
  __int64 v8; // r11
  _QWORD *v9; // r10
  __int64 v10; // r11
  __int64 v11; // r10

  v2 = (__int64 *)(a1 + 232);
  v4 = (_DWORD *)*v2;
  result = *(unsigned int *)*v2;
  if ( a2 )
  {
    if ( (result & 0x100000) != 0 )
    {
      result = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*v2, 12);
      if ( (unsigned int)result < *(_DWORD *)(v10 + 4) )
      {
        v11 = 8LL * (unsigned int)result;
        result = ((unsigned __int8)*(_DWORD *)(v10 + 4) + 15) & 7;
        v9 = (_QWORD *)(*(unsigned int *)(v10 + 4) + 15LL + v10 + v11 - result);
      }
      *v9 = a2;
    }
    else
    {
      result = (__int64)CSparseAlignedStorage<8,8>::AllocatedStorage::ReserveSlot((__int64 **)v2, 12);
      *(_QWORD *)result = a2;
    }
  }
  else if ( (result & 0x100000) != 0 )
  {
    v6 = *v2;
    *v4 = result & 0xFFEFFFFF;
    result = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v6, 12);
    if ( (unsigned int)result < *(_DWORD *)(v8 + 4) )
    {
      result = (unsigned int)result;
      *(_BYTE *)((unsigned int)result + v8 + 8) = v7;
    }
  }
  return result;
}
