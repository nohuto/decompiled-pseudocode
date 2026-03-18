/*
 * XREFs of ?IsValid@CCompositionPointLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1801E7C50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800B6CE0 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x18010BD24 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x18010C004 (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CCompositionPointLight::IsValid(
        CCompositionPointLight *this,
        const struct CVisualTree *a2,
        const struct CVisual *a3)
{
  CVisual *v4; // rax
  CVisual *v5; // rdx
  CVisual *v6; // rcx
  char v7; // bl
  const struct Windows::Foundation::Numerics::float4x4 *v9; // rdx
  float v10; // xmm0_4
  _BYTE v11[64]; // [rsp+30h] [rbp-58h] BYREF
  int v12; // [rsp+70h] [rbp-18h]

  v4 = (CVisual *)(*(__int64 (__fastcall **)(CCompositionPointLight *, const struct CVisualTree *, const struct CVisual *))(*(_QWORD *)this + 200LL))(
                    this,
                    a2,
                    a3);
  if ( v4 )
  {
    v5 = v4;
    v6 = v4;
    v7 = 1;
    while ( v5 && (*((_BYTE *)v5 + 106) & 0x40) != 0 && (*((_BYTE *)v5 + 106) & 1) == 0 )
    {
      if ( v5 == *((CVisual **)a2 + 9) )
      {
        v12 = 0;
        if ( (int)CVisual::GetWorldTransform(v4, a2, 3, (__int64)v11, 0LL, 0LL) >= 0 )
        {
          v10 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v11, v9);
          if ( CMILMatrix::IsInvertibleDeterminant(v10) )
            return v7;
        }
        return 0;
      }
      if ( v6 )
      {
        v6 = (CVisual *)*((_QWORD *)v6 + 11);
        if ( v6 )
        {
          if ( v5 == v6 )
            return 0;
          v6 = (CVisual *)*((_QWORD *)v6 + 11);
          if ( v5 == v6 )
            return 0;
        }
      }
      v5 = (CVisual *)*((_QWORD *)v5 + 11);
    }
  }
  return 0;
}
