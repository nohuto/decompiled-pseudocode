/*
 * XREFs of ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1801E6C30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800B6CE0 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x18010BD24 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x18010C004 (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ?GetCoordinateSpaceVisualNoRef@CCompositionSpotLight@@UEBAPEAVCVisual@@XZ @ 0x1801E6D10 (-GetCoordinateSpaceVisualNoRef@CCompositionSpotLight@@UEBAPEAVCVisual@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CCompositionSpotLight::IsValid(
        CCompositionSpotLight *this,
        const struct CVisualTree *a2,
        const struct CVisual *a3)
{
  struct CVisual *(__fastcall *v4)(CCompositionSpotLight *__hidden); // rax
  struct CVisual *CoordinateSpaceVisualNoRef; // rax
  CVisual *v6; // r10
  struct CVisual *v7; // rcx
  char v8; // bl
  const struct Windows::Foundation::Numerics::float4x4 *v10; // rdx
  float v11; // xmm0_4
  _BYTE v12[64]; // [rsp+30h] [rbp-58h] BYREF
  int v13; // [rsp+70h] [rbp-18h]

  v4 = *(struct CVisual *(__fastcall **)(CCompositionSpotLight *__hidden))(*(_QWORD *)this + 200LL);
  if ( v4 == CCompositionSpotLight::GetCoordinateSpaceVisualNoRef )
    CoordinateSpaceVisualNoRef = CCompositionSpotLight::GetCoordinateSpaceVisualNoRef(this);
  else
    CoordinateSpaceVisualNoRef = (struct CVisual *)((__int64 (__fastcall *)(CCompositionSpotLight *, struct CVisual *(__fastcall *)(CCompositionSpotLight *__hidden), const struct CVisual *))v4)(
                                                     this,
                                                     CCompositionSpotLight::GetCoordinateSpaceVisualNoRef,
                                                     a3);
  v6 = CoordinateSpaceVisualNoRef;
  if ( CoordinateSpaceVisualNoRef )
  {
    v7 = CoordinateSpaceVisualNoRef;
    v8 = 1;
    while ( v7 && (*((_BYTE *)v7 + 106) & 0x40) != 0 && (*((_BYTE *)v7 + 106) & 1) == 0 )
    {
      if ( v7 == *((struct CVisual **)a2 + 9) )
      {
        v13 = 0;
        if ( (int)CVisual::GetWorldTransform(v6, a2, 3, (__int64)v12, 0LL, 0LL) >= 0 )
        {
          v11 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v12, v10);
          if ( CMILMatrix::IsInvertibleDeterminant(v11) )
            return v8;
        }
        return 0;
      }
      if ( CoordinateSpaceVisualNoRef )
      {
        CoordinateSpaceVisualNoRef = (struct CVisual *)*((_QWORD *)CoordinateSpaceVisualNoRef + 11);
        if ( CoordinateSpaceVisualNoRef )
        {
          if ( v7 == CoordinateSpaceVisualNoRef )
            return 0;
          CoordinateSpaceVisualNoRef = (struct CVisual *)*((_QWORD *)CoordinateSpaceVisualNoRef + 11);
          if ( v7 == CoordinateSpaceVisualNoRef )
            return 0;
        }
      }
      v7 = (struct CVisual *)*((_QWORD *)v7 + 11);
    }
  }
  return 0;
}
