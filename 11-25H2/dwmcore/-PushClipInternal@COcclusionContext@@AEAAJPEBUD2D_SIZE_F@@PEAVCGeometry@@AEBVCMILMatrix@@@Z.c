/*
 * XREFs of ?PushClipInternal@COcclusionContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@AEBVCMILMatrix@@@Z @ 0x18023DE80
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BA220 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058F30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?Push@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateType@COcclusionContext@@@Z @ 0x1800B2C30 (-Push@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateTyp.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Push@CBaseClipStack@@IEAAJAEBUD2D_RECT_F@@@Z @ 0x1801B4CD0 (-Push@CBaseClipStack@@IEAAJAEBUD2D_RECT_F@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?Push@COccluderClipStack@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCShapePtr@@AEBVCMILMatrix@@@Z @ 0x180272704 (-Push@COccluderClipStack@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x180277ABC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COcclusionContext::PushClipInternal(
        const void **this,
        const struct D2D_SIZE_F *a2,
        struct CGeometry *a3,
        const struct CMILMatrix *a4)
{
  int ShapeData; // eax
  int v7; // ebx
  int v8; // edi
  int v9; // eax
  unsigned int v11; // [rsp+20h] [rbp-68h]
  int v12; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+38h] [rbp-50h] BYREF
  char v14; // [rsp+40h] [rbp-48h]
  struct D2D_RECT_F v15; // [rsp+48h] [rbp-40h] BYREF

  v13 = 0LL;
  v14 = 0;
  v15 = 0LL;
  ShapeData = CGeometry::GetShapeData(a3, a2, (struct CShapePtr *)&v13);
  v7 = ShapeData;
  if ( ShapeData < 0 )
  {
    v11 = 1605;
    goto LABEL_21;
  }
  v8 = -2003304309;
  if ( !v13
    || (v9 = (*(__int64 (__fastcall **)(__int64, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)v13 + 48LL))(v13, &v15, 0LL),
        v8 = v9,
        v7 = v9,
        v9 >= 0) )
  {
    v7 = v8;
    if ( v8 < 0 )
      goto LABEL_5;
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)a4, &v15, &v15.left);
    ShapeData = CBaseClipStack::Push(this + 16, (__m128 *)&v15);
    v7 = ShapeData;
    if ( ShapeData < 0 )
    {
      v11 = 1611;
      goto LABEL_21;
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
    {
      ShapeData = COccluderClipStack::Push((CBaseClipStack *)(this + 22));
      v7 = ShapeData;
      if ( ShapeData < 0 )
      {
        v11 = 1618;
        goto LABEL_21;
      }
LABEL_16:
      v12 = 0;
      ShapeData = CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Push((__int64)(this + 219), &v12);
      v7 = ShapeData;
      if ( ShapeData >= 0 )
        goto LABEL_22;
      v11 = 1630;
LABEL_21:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShapeData, v11, 0LL);
      goto LABEL_22;
    }
    if ( v13 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, struct D2D_RECT_F *))(*(_QWORD *)v13 + 88LL))(v13, &v15);
      if ( v7 >= 0 )
      {
        CMILMatrix::Transform2DBoundsHelper<0>((__int64)a4, &v15, &v15.left);
        ShapeData = CBaseClipStack::Push(this + 19, (__m128 *)&v15);
        v7 = ShapeData;
        if ( ShapeData < 0 )
        {
          v11 = 1627;
          goto LABEL_21;
        }
        goto LABEL_16;
      }
    }
    else
    {
      v7 = -2003304309;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x659u, 0LL);
    goto LABEL_22;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x140u, 0LL);
LABEL_5:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x649u, 0LL);
LABEL_22:
  if ( v14 && v13 )
    (**(void (__fastcall ***)(__int64, __int64))v13)(v13, 1LL);
  return (unsigned int)v7;
}
