/*
 * XREFs of ?DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180082100
 * Callers:
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180081FD8 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x1800876E0 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z @ 0x1800822D4 (-CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z.c)
 *     ?IsPure2DRect@@YA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008244C (-IsPure2DRect@@YA_NAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 *     ??0CCpuClip@@QEAA@XZ @ 0x180082478 (--0CCpuClip@@QEAA@XZ.c)
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x1800824E0 (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008AA80 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18009EB10 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18010C210 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

char __fastcall CDrawingContext::DoesCpuClipFullyContainRect(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  const struct CMILMatrix *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rbx
  char v14; // bl
  _QWORD v15[2]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v16[16]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v17; // [rsp+40h] [rbp-C0h]
  __int128 v18; // [rsp+50h] [rbp-B0h]
  __int128 v19; // [rsp+60h] [rbp-A0h]
  __int128 v20; // [rsp+70h] [rbp-90h]
  char v21; // [rsp+80h] [rbp-80h]
  char v22; // [rsp+81h] [rbp-7Fh]
  __int64 v23; // [rsp+84h] [rbp-7Ch]
  char v24; // [rsp+8Ch] [rbp-74h]
  _BYTE v25[64]; // [rsp+90h] [rbp-70h] BYREF
  int v26; // [rsp+D0h] [rbp-30h]
  __int128 v27; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v28; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v29; // [rsp+100h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 752);
  if ( v3 == *(_QWORD *)(a1 + 744) || !*(_QWORD *)(v3 - 176) )
    return 0;
  v26 = 0;
  if ( !(unsigned __int8)IsPure2DRect(a2, a2, a3, a3)
    && !(unsigned __int8)CMILMatrix::ProducesUniformZ<1>(*(_QWORD *)(a1 + 752) - 84LL) )
  {
    return 0;
  }
  if ( !CCpuClippingData::CalcScopeTransformFromWorld(
          (const struct CMILMatrix *)(*(_QWORD *)(a1 + 752) - 84LL),
          v8,
          (struct CMILMatrix *)v25) )
    return 0;
  v27 = 0LL;
  if ( (unsigned __int8)IsPure2DRect(a2, v9, v10, v11) )
  {
    CMILMatrix::Transform2DBoundsHelper<0>(v25, a2, &v27);
  }
  else
  {
    v29 = 0LL;
    v28 = 0LL;
    CMILMatrix::Transform3DBoundsHelper<0>(v25, a2, &v28);
    v27 = v28;
  }
  CCpuClip::CCpuClip((CCpuClip *)v15);
  if ( CScopedClipStack::HasCpuClipsInScope((CScopedClipStack *)(a1 + 744)) )
    v13 = *(_QWORD *)(*(_QWORD *)(v12 + 1952) - 40LL);
  else
    v13 = 0LL;
  CShapePtr::~CShapePtr((CShapePtr *)v16);
  v17 = _xmm;
  v18 = _xmm;
  v22 = v22 & 0xC0 | 0x29;
  v24 = 0;
  v15[0] = v13;
  v23 = 1LL;
  v15[1] = 0LL;
  v19 = _xmm;
  v20 = *(__int128 *)&_xmm.r;
  v21 = -86;
  v14 = CCpuClip::FullyContains(v15, &v27, 0LL);
  CShapePtr::~CShapePtr((CShapePtr *)v16);
  return v14;
}
