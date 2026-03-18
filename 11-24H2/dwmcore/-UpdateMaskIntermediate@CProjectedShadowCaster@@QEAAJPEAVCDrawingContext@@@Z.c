/*
 * XREFs of ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x18028F2E8
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801D3160 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCShadowMaskProducer@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@VCShadowMaskProducer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800C4750 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1801449F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ @ 0x180168620 (-GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ.c)
 *     ??$_Try_emplace@PEBVCVisualTree@@$$V@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@_N@1@$$QEAPEBVCVisualTree@@@Z @ 0x1801E54FC (--$_Try_emplace@PEBVCVisualTree@@$$V@-$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadow.c)
 *     ?Create@CShadowMaskProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@$$QEAVCShapePtr@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1802DB5A4 (-Create@CShadowMaskProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrus.c)
 */

__int64 __fastcall CProjectedShadowCaster::UpdateMaskIntermediate(
        CProjectedShadowCaster *this,
        struct CDrawingContext *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  CEffectIntermediateProducer **v6; // r15
  __int64 v7; // rax
  CGeometry *v8; // rcx
  __int64 v9; // rsi
  int ShapeData; // eax
  int v11; // eax
  struct CBrush *EffectiveMaskBrush; // rax
  char v13; // dl
  unsigned int v15; // [rsp+20h] [rbp-50h]
  CShape *v16; // [rsp+40h] [rbp-30h] BYREF
  char v17; // [rsp+48h] [rbp-28h]
  const char *v18; // [rsp+50h] [rbp-20h] BYREF
  int v19; // [rsp+58h] [rbp-18h]
  _BYTE v20[16]; // [rsp+60h] [rbp-10h] BYREF
  struct CShape *v21; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+38h] BYREF

  v22 = *((_QWORD *)a2 + 993);
  v4 = 0;
  v5 = *(_QWORD *)std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::_Try_emplace<CVisualTree const *,>(
                    (__int64 *)this + 11,
                    (__int64)v20,
                    (__int64)&v22);
  v6 = (CEffectIntermediateProducer **)(v5 + 80);
  if ( !*(_QWORD *)(v5 + 80) )
  {
    v7 = *((_QWORD *)this + 9);
    v16 = 0LL;
    v17 = 0;
    v8 = *(CGeometry **)(v7 + 248);
    v9 = v7 + 144;
    if ( v8 )
    {
      ShapeData = CGeometry::GetShapeData(v8, (const struct D2D_SIZE_F *)(v7 + 144), &v16);
      v4 = ShapeData;
      if ( ShapeData < 0 )
      {
        v15 = 381;
        goto LABEL_9;
      }
      if ( !v17 )
      {
        v21 = 0LL;
        v11 = CShape::CopyShape(v16, 0LL, &v21);
        v4 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x16Bu, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x17Eu, 0LL);
          goto LABEL_10;
        }
        CShapePtr::~CShapePtr(&v16);
        v16 = v21;
        v17 = 1;
      }
    }
    Microsoft::WRL::ComPtr<CShadowMaskProducer>::InternalRelease(v6);
    EffectiveMaskBrush = CProjectedShadowCaster::GetEffectiveMaskBrush(this);
    v18 = "DWM ProjectedShadow Caster Mask";
    v19 = 31;
    ShapeData = ((__int64 (__fastcall *)(const char **, struct CDrawingContext *, __int64, struct CBrush *, CShape **, char, __int64, CEffectIntermediateProducer **))CShadowMaskProducer::Create)(
                  &v18,
                  a2,
                  v9,
                  EffectiveMaskBrush,
                  &v16,
                  v13,
                  v5 + 60,
                  v6);
    v4 = ShapeData;
    if ( ShapeData >= 0 )
    {
LABEL_10:
      CShapePtr::~CShapePtr(&v16);
      return v4;
    }
    v15 = 394;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShapeData, v15, 0LL);
    goto LABEL_10;
  }
  return v4;
}
