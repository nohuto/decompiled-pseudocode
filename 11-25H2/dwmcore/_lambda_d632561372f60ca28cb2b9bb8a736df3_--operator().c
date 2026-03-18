/*
 * XREFs of _lambda_d632561372f60ca28cb2b9bb8a736df3_::operator() @ 0x18028D144
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_d632561372f60ca28cb2b9bb8a736df3__long_CVisual___CVisualTree___::_Do_call @ 0x18028E250 (std--_Func_impl_no_alloc__lambda_d632561372f60ca28cb2b9bb8a736df3__long_CVisual___C_ea_18028E250.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x1800B74B0 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ?AddDirtyRect@?$CTargetDirtyBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C3E90 (-AddDirtyRect@-$CTargetDirtyBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINT.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x1800C3F90 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?ComputeCursorToDeviceTransform@CCaptureRenderTarget@@IEAA_NPEAVCVisual@@0PEAVCVisualTree@@PEAVCMILMatrix@@@Z @ 0x18028D47C (-ComputeCursorToDeviceTransform@CCaptureRenderTarget@@IEAA_NPEAVCVisual@@0PEAVCVisualTree@@PEAVC.c)
 */

__int64 __fastcall lambda_d632561372f60ca28cb2b9bb8a736df3_::operator()(__int64 a1, struct CVisual *a2)
{
  _BYTE *v2; // r14
  CCaptureRenderTarget **v3; // rdi
  struct CVisualTree ***v4; // rsi
  CCaptureRenderTarget *v6; // rbp
  CCaptureRenderTarget *v7; // rdi
  struct CVisualTree **v8; // rsi
  const struct D2D_RECT_F *v9; // rdx
  _BYTE v11[64]; // [rsp+30h] [rbp-88h] BYREF
  int v12; // [rsp+70h] [rbp-48h]
  __int128 v13; // [rsp+80h] [rbp-38h] BYREF

  v2 = *(_BYTE **)a1;
  v3 = (CCaptureRenderTarget **)(a1 + 8);
  v12 = 0;
  v4 = (struct CVisualTree ***)(a1 + 24);
  if ( !*v2 )
  {
    v6 = *v3;
    if ( !CCaptureRenderTarget::ComputeCursorToDeviceTransform(
            *v3,
            a2,
            **(struct CVisual ***)(a1 + 16),
            **v4,
            (struct CMILMatrix *)v11) )
      CTargetDirtyBase<8>::SetFullDirty((__int64)v6 + 320);
    *v2 = 1;
  }
  v7 = *v3;
  if ( !*((_BYTE *)v7 + 2632) && !CVisualTree::_IsInTree(*((_QWORD *)v7 + 14), (__int64)a2, 0) )
  {
    v8 = *v4;
    if ( CVisualTree::_IsInTree((__int64)*v8, (__int64)a2, 0) )
    {
      v9 = (const struct D2D_RECT_F *)((char *)*v8 + 80);
      if ( a2 != *((struct CVisual **)*v8 + 9) )
        v9 = (const struct D2D_RECT_F *)((char *)a2 + 152);
      v13 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v11, v9, (float *)&v13);
      CTargetDirtyBase<8>::AddDirtyRect((__int64)v7 + 320, (float *)&v13);
    }
  }
  return 0LL;
}
