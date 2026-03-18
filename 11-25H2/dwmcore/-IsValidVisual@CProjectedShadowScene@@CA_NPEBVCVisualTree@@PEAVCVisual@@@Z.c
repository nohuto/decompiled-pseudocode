/*
 * XREFs of ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18011BB88
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18011B580 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x18011BC28 (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x18011C0BC (-UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z.c)
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800B6CE0 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x18010BD24 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x18010C004 (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 */

bool __fastcall CProjectedShadowScene::IsValidVisual(struct CVisual **a1, struct CVisual *a2)
{
  struct CVisual *v2; // r8
  struct CVisual *v3; // rax
  const struct Windows::Foundation::Numerics::float4x4 *v5; // rdx
  float v6; // xmm0_4
  _BYTE v7[64]; // [rsp+30h] [rbp-58h] BYREF
  int v8; // [rsp+70h] [rbp-18h]

  v2 = a2;
  v3 = a2;
  while ( 1 )
  {
    if ( !v2 || (*((_BYTE *)v2 + 106) & 0x40) == 0 || (*((_BYTE *)v2 + 106) & 1) != 0 )
      return 0;
    if ( v2 == a1[9] )
      break;
    if ( v3 )
    {
      v3 = (struct CVisual *)*((_QWORD *)v3 + 11);
      if ( v3 )
      {
        if ( v2 == v3 )
          return 0;
        v3 = (struct CVisual *)*((_QWORD *)v3 + 11);
        if ( v2 == v3 )
          return 0;
      }
    }
    v2 = (struct CVisual *)*((_QWORD *)v2 + 11);
  }
  v8 = 0;
  if ( (int)CVisual::GetWorldTransform(a2, (const struct CVisualTree *)a1, 3, (__int64)v7, 0LL, 0LL) < 0 )
    return 0;
  v6 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v7, v5);
  return CMILMatrix::IsInvertibleDeterminant(v6);
}
