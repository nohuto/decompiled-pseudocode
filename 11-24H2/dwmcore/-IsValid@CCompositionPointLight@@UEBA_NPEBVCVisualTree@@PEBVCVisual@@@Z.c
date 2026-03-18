/*
 * XREFs of ?IsValid@CCompositionPointLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1801D9940
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18009E420 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z @ 0x1800C3810 (-GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800C39A0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x18016A964 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x18016AAAC (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CCompositionPointLight::IsValid(
        CCompositionPointLight *this,
        const struct CVisualTree *a2,
        const struct CVisual *a3)
{
  CVisual *v4; // rax
  CVisual *v5; // rdi
  CVisual *v6; // rdx
  CVisual *v7; // rcx
  char v8; // bl
  __int64 **TreeData; // rax
  CTreeData *v11; // rsi
  const struct Windows::Foundation::Numerics::float4x4 *v12; // rdx
  float v13; // xmm0_4
  _BYTE v14[64]; // [rsp+30h] [rbp-58h] BYREF
  int v15; // [rsp+70h] [rbp-18h]
  bool v16; // [rsp+90h] [rbp+8h] BYREF

  v4 = (CVisual *)(*(__int64 (__fastcall **)(CCompositionPointLight *, const struct CVisualTree *, const struct CVisual *))(*(_QWORD *)this + 200LL))(
                    this,
                    a2,
                    a3);
  v5 = v4;
  if ( v4 )
  {
    v6 = v4;
    v7 = v4;
    v8 = 1;
    while ( v6 && (*((_BYTE *)v6 + 106) & 0x40) != 0 && (*((_BYTE *)v6 + 106) & 1) == 0 )
    {
      if ( v6 == *((CVisual **)a2 + 9) )
      {
        v15 = 0;
        TreeData = CVisual::FindTreeData(v4, a2);
        v11 = (CTreeData *)TreeData;
        if ( !TreeData )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x6AAu, 0LL);
          return 0;
        }
        v16 = 0;
        CVisual::EnsureWorldTransform(v5, a2, (RTL_SRWLOCK *)TreeData);
        CTreeData::GetWorldTransform(v11, (struct CMILMatrix *)v14, &v16, 0LL);
        v13 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v14, v12);
        if ( CMILMatrix::IsInvertibleDeterminant(v13) )
          return v8;
        return 0;
      }
      if ( v7 )
      {
        v7 = (CVisual *)*((_QWORD *)v7 + 11);
        if ( v7 )
        {
          if ( v6 == v7 )
            return 0;
          v7 = (CVisual *)*((_QWORD *)v7 + 11);
          if ( v6 == v7 )
            return 0;
        }
      }
      v6 = (CVisual *)*((_QWORD *)v6 + 11);
    }
  }
  return 0;
}
