/*
 * XREFs of _lambda_62ff84c7c0707752f96e4fa15018ccd2_::operator() @ 0x1802821A0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_62ff84c7c0707752f96e4fa15018ccd2__long_CVisual___CVisualTree___::_Do_call @ 0x180282C80 (std--_Func_impl_no_alloc__lambda_62ff84c7c0707752f96e4fa15018ccd2__long_CVisual___C_ea_180282C80.c)
 * Callees:
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x180037500 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ?AddDirtyRect@?$CTargetDirtyBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800970F0 (-AddDirtyRect@-$CTargetDirtyBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINT.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x18009823C (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?ComputeCursorToDeviceTransform@CCaptureRenderTarget@@IEAA_NPEAVCVisual@@0PEAVCVisualTree@@PEAVCMILMatrix@@@Z @ 0x1802822C4 (-ComputeCursorToDeviceTransform@CCaptureRenderTarget@@IEAA_NPEAVCVisual@@0PEAVCVisualTree@@PEAVC.c)
 */

__int64 __fastcall lambda_62ff84c7c0707752f96e4fa15018ccd2_::operator()(__int64 a1, struct CVisual *a2)
{
  __int64 *v2; // rbx
  struct CVisualTree **v5; // r14
  _BYTE *v6; // rsi
  struct CVisualTree *v7; // rcx
  const struct D2D_RECT_F *v8; // rdx
  _BYTE v10[64]; // [rsp+30h] [rbp-88h] BYREF
  int v11; // [rsp+70h] [rbp-48h]
  __int128 v12; // [rsp+80h] [rbp-38h] BYREF

  v2 = *(__int64 **)a1;
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 2632LL) && !CVisualTree::_IsInTree(v2[14], (__int64)a2, 0) )
  {
    v5 = *(struct CVisualTree ***)(a1 + 8);
    if ( CVisualTree::_IsInTree((__int64)*v5, (__int64)a2, 0) )
    {
      v6 = *(_BYTE **)(a1 + 16);
      v11 = 0;
      if ( !*v6 )
      {
        if ( !CCaptureRenderTarget::ComputeCursorToDeviceTransform(
                (CCaptureRenderTarget *)v2,
                a2,
                **(struct CVisual ***)(a1 + 24),
                *v5,
                (struct CMILMatrix *)v10) )
          CTargetDirtyBase<8>::SetFullDirty((__int64)(v2 + 40));
        *v6 = 1;
      }
      v7 = *v5;
      v12 = 0LL;
      v8 = (const struct D2D_RECT_F *)((char *)v7 + 80);
      if ( a2 != *((struct CVisual **)v7 + 9) )
        v8 = (const struct D2D_RECT_F *)((char *)a2 + 152);
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v10, v8, (float *)&v12);
      CTargetDirtyBase<8>::AddDirtyRect((__int64)(v2 + 40), (float *)&v12);
    }
  }
  return 0LL;
}
