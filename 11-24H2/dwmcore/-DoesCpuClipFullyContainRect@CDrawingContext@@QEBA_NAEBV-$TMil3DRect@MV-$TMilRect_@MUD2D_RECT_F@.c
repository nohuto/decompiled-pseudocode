/*
 * XREFs of ?DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800F7180
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x1800CEC00 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800F7058 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 * Callees:
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800214B0 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C6560 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z @ 0x1800F7354 (-CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z.c)
 *     ?IsPure2DRect@@YA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F74CC (-IsPure2DRect@@YA_NAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 *     ??0CCpuClip@@QEAA@XZ @ 0x1800F74F8 (--0CCpuClip@@QEAA@XZ.c)
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x1800F7560 (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18016AB10 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

char __fastcall CDrawingContext::DoesCpuClipFullyContainRect(__int64 a1, struct D2D_RECT_F *a2)
{
  __int64 v2; // rax
  const struct CMILMatrix *v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rbx
  char v10; // bl
  _QWORD v11[2]; // [rsp+20h] [rbp-E0h] BYREF
  CRectanglesShape *v12[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v13; // [rsp+40h] [rbp-C0h]
  __int128 v14; // [rsp+50h] [rbp-B0h]
  __int128 v15; // [rsp+60h] [rbp-A0h]
  __int128 v16; // [rsp+70h] [rbp-90h]
  char v17; // [rsp+80h] [rbp-80h]
  char v18; // [rsp+81h] [rbp-7Fh]
  __int64 v19; // [rsp+84h] [rbp-7Ch]
  char v20; // [rsp+8Ch] [rbp-74h]
  _BYTE v21[64]; // [rsp+90h] [rbp-70h] BYREF
  int v22; // [rsp+D0h] [rbp-30h]
  __m128 v23; // [rsp+E0h] [rbp-20h] BYREF
  __m128 v24; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v25; // [rsp+100h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 752);
  if ( v2 == *(_QWORD *)(a1 + 744) || !*(_QWORD *)(v2 - 176) )
    return 0;
  v22 = 0;
  if ( !(unsigned __int8)IsPure2DRect(a2)
    && !(unsigned __int8)CMILMatrix::ProducesUniformZ<1>(*(_QWORD *)(a1 + 752) - 84LL) )
  {
    return 0;
  }
  if ( !CCpuClippingData::CalcScopeTransformFromWorld(
          (const struct CMILMatrix *)(*(_QWORD *)(a1 + 752) - 84LL),
          v7,
          (struct CMILMatrix *)v21) )
    return 0;
  v23 = 0LL;
  if ( (unsigned __int8)IsPure2DRect(a2) )
  {
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v21, a2, v23.m128_f32);
  }
  else
  {
    v25 = 0LL;
    v24 = 0LL;
    CMILMatrix::Transform3DBoundsHelper<0>((__int64)v21, &a2->left, v24.m128_f32);
    v23 = v24;
  }
  CCpuClip::CCpuClip((CCpuClip *)v11);
  if ( CScopedClipStack::HasCpuClipsInScope((CScopedClipStack *)(a1 + 744)) )
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 1952) - 40LL);
  else
    v9 = 0LL;
  CShapePtr::~CShapePtr(v12);
  v13 = _xmm;
  v14 = _xmm;
  v18 = v18 & 0xC0 | 0x29;
  v20 = 0;
  v11[0] = v9;
  v19 = 1LL;
  v11[1] = 0LL;
  v15 = _xmm;
  v16 = *(__int128 *)&_xmm.r;
  v17 = -86;
  v10 = CCpuClip::FullyContains(v11, &v23, 0LL);
  CShapePtr::~CShapePtr(v12);
  return v10;
}
