/*
 * XREFs of ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1801D9010
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18009E420 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z @ 0x1800C3810 (-GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800C39A0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x18016A964 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x18016AAAC (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ?GetCoordinateSpaceVisualNoRef@CCompositionSpotLight@@UEBAPEAVCVisual@@XZ @ 0x1801D9140 (-GetCoordinateSpaceVisualNoRef@CCompositionSpotLight@@UEBAPEAVCVisual@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CCompositionSpotLight::IsValid(
        CCompositionSpotLight *this,
        const struct CVisualTree *a2,
        const struct CVisual *a3)
{
  struct CVisual *(__fastcall *v4)(CCompositionSpotLight *__hidden); // rax
  struct CVisual *CoordinateSpaceVisualNoRef; // rax
  CVisual *v6; // rbx
  struct CVisual *v7; // rcx
  char v8; // di
  __int64 **TreeData; // rax
  CTreeData *v11; // rbp
  const struct Windows::Foundation::Numerics::float4x4 *v12; // rdx
  float v13; // xmm0_4
  _BYTE v14[64]; // [rsp+30h] [rbp-58h] BYREF
  int v15; // [rsp+70h] [rbp-18h]
  bool v16; // [rsp+90h] [rbp+8h] BYREF

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
        v15 = 0;
        TreeData = CVisual::FindTreeData(v6, a2);
        v11 = (CTreeData *)TreeData;
        if ( !TreeData )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x6AAu, 0LL);
          return 0;
        }
        v16 = 0;
        CVisual::EnsureWorldTransform(v6, a2, (RTL_SRWLOCK *)TreeData);
        CTreeData::GetWorldTransform(v11, (struct CMILMatrix *)v14, &v16, 0LL);
        v13 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)v14, v12);
        if ( CMILMatrix::IsInvertibleDeterminant(v13) )
          return v8;
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
