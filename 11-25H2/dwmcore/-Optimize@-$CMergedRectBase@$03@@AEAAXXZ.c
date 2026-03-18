/*
 * XREFs of ?Optimize@?$CMergedRectBase@$03@@AEAAXXZ @ 0x1802899A8
 * Callers:
 *     ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180109860 (-CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV.c)
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1801FE35C (-GetRects@-$CMergedRectBase@$03@@QEAA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?AddComputeScribbleDirtyRects@CLegacyRenderTarget@@AEAAXXZ @ 0x1802074B8 (-AddComputeScribbleDirtyRects@CLegacyRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     ?Merge@?$CRectangleCollection@$03@@QEAA_NII@Z @ 0x1802488FC (-Merge@-$CRectangleCollection@$03@@QEAA_NII@Z.c)
 *     ?EnsureWeights@?$CRectangleCollection@$03@@AEAAXXZ @ 0x18024899C (-EnsureWeights@-$CRectangleCollection@$03@@AEAAXXZ.c)
 */

__int64 __fastcall CMergedRectBase<4>::Optimize(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // r8d
  unsigned int i; // edx

  while ( 1 )
  {
    result = CRectangleCollection<4>::EnsureWeights(a1);
    v3 = 1;
LABEL_2:
    if ( v3 >= *(_DWORD *)a1 )
      break;
    for ( i = 0; ; ++i )
    {
      if ( i >= v3 )
      {
        ++v3;
        goto LABEL_2;
      }
      result = i + ((v3 * (v3 - 1)) >> 1);
      if ( *(float *)(a1 + 8 * result + 88) < 0.5 )
        break;
    }
    CRectangleCollection<4>::Merge((_DWORD *)a1, i, v3);
  }
  *(_BYTE *)(a1 + 168) = 1;
  return result;
}
