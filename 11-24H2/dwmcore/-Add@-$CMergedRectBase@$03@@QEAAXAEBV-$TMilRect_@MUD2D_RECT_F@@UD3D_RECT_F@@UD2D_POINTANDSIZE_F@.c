/*
 * XREFs of ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C6828
 * Callers:
 *     ?GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCMergedRect@@@Z @ 0x1801C52D0 (-GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRec.c)
 *     _lambda_0e17c6475725e05fea3019b9a50aca17_::operator() @ 0x180281FA0 (_lambda_0e17c6475725e05fea3019b9a50aca17_--operator().c)
 *     ?UpdateDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x1802D359C (-UpdateDirtyRegion@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Merge@?$CRectangleCollection@$03@@QEAA_NII@Z @ 0x180241388 (-Merge@-$CRectangleCollection@$03@@QEAA_NII@Z.c)
 *     ?EnsureWeights@?$CRectangleCollection@$03@@AEAAXXZ @ 0x180241428 (-EnsureWeights@-$CRectangleCollection@$03@@AEAAXXZ.c)
 *     ?UpdateOverhead@?$CRectangleCollection@$03@@AEAAXII@Z @ 0x18024148C (-UpdateOverhead@-$CRectangleCollection@$03@@AEAAXII@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

char __fastcall CMergedRectBase<4>::Add(unsigned int *a1, const struct D2D_RECT_F *a2)
{
  unsigned int v3; // eax
  _OWORD *v4; // rdx
  const char *v5; // r9
  float v6; // xmm0_4
  float *v7; // r10
  unsigned int v8; // edi
  __int64 v9; // r9
  int v10; // edx
  __int64 v11; // r8
  unsigned int i; // ecx
  unsigned int v13; // eax
  unsigned int v14; // r11d
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  LOBYTE(v3) = IsEmpty(a2);
  if ( !(_BYTE)v3 )
  {
    if ( *((_BYTE *)a1 + 168) == 1 )
      *((_BYTE *)a1 + 168) = 0;
    *(_OWORD *)&a1[4 * *a1 + 1] = *v4;
    v3 = *a1 + 1;
    *a1 = v3;
    if ( v3 > 4 )
    {
      if ( v3 > 5 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x3E,
          (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\MergedRect.h",
          v5);
      if ( *((_BYTE *)a1 + 164) )
        CRectangleCollection<4>::EnsureWeights(a1);
      else
        CRectangleCollection<4>::UpdateOverhead(a1, 4LL, 0xFFFFFFFFLL);
      CRectangleCollection<4>::EnsureWeights(a1);
      v6 = *((float *)a1 + 21);
      v7 = (float *)(a1 + 23);
      v8 = 0;
      v9 = 0LL;
      v10 = 1;
      v11 = 1LL;
      for ( i = 1; i < 0xA; ++i )
      {
        if ( v6 == 0.0 )
          break;
        v13 = v8 + 1;
        v14 = v10 + 1;
        if ( v8 + 1 != v10 )
          v14 = v10;
        v8 = 0;
        if ( v13 != v10 )
          v8 = v13;
        if ( v6 > *v7 )
        {
          v6 = *v7;
          v9 = v8;
          v11 = v14;
        }
        v7 += 2;
        v10 = v14;
      }
      LOBYTE(v3) = CRectangleCollection<4>::Merge(a1, (unsigned int)v9, v11, v9);
    }
    else
    {
      *((_BYTE *)a1 + 164) = 1;
    }
  }
  return v3;
}
