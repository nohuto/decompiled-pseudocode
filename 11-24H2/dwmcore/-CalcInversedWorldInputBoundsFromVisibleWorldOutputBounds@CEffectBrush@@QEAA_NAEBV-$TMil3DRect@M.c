/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x180037110
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800369E0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV-$TM.c)
 * Callees:
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18001F160 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18003DB50 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800A68F4 (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?GetSourceInputBounds@CEffectBrush@@AEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEAV?$DynArray@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x1800A710C (-GetSourceInputBounds@CEffectBrush@@AEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAN.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CEffectBrush::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  int SourceInputBounds; // eax
  int v12; // eax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  int v17; // xmm2_4
  int v18; // xmm3_4
  __int128 v19; // xmm1
  const struct D2D_RECT_F *v20; // rcx
  const struct D2D_RECT_F *v21; // rcx
  int v23; // r9d
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm1_4
  unsigned int v30; // [rsp+20h] [rbp-E0h]
  __int128 v31; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h]
  int v33; // [rsp+58h] [rbp-A8h]
  _OWORD v34[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+A0h] [rbp-60h]
  __int128 v36; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v37; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v38; // [rsp+D0h] [rbp-30h] BYREF
  int v39; // [rsp+E0h] [rbp-20h]
  int v40; // [rsp+E4h] [rbp-1Ch]
  __int128 v41; // [rsp+E8h] [rbp-18h] BYREF
  int v42; // [rsp+F8h] [rbp-8h]
  int v43; // [rsp+FCh] [rbp-4h]
  __int128 v44; // [rsp+100h] [rbp+0h] BYREF
  int v45; // [rsp+110h] [rbp+10h]
  int v46; // [rsp+114h] [rbp+14h]
  __int128 v47; // [rsp+118h] [rbp+18h] BYREF
  int v48; // [rsp+128h] [rbp+28h]
  int v49; // [rsp+12Ch] [rbp+2Ch]
  __int128 v50; // [rsp+130h] [rbp+30h] BYREF

  if ( !*(_QWORD *)(a1 + 128) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x332u, 0LL);
    return 0;
  }
  v39 = 0;
  v40 = 0;
  v42 = 0;
  v43 = 0;
  v45 = 0;
  v46 = 0;
  v48 = 0;
  v49 = 0;
  v31 = 0LL;
  v32 = 0LL;
  v50 = 0LL;
  v33 = 0;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v41 = 0LL;
  v44 = 0LL;
  v47 = 0LL;
  SourceInputBounds = CEffectBrush::GetSourceInputBounds(a1, a2, a3, &v31);
  if ( SourceInputBounds < 0 )
  {
    v30 = 755;
    goto LABEL_14;
  }
  v12 = *(_DWORD *)(a4 + 64);
  v13 = *(_OWORD *)(a4 + 16);
  v34[0] = *(_OWORD *)a4;
  v14 = *(_OWORD *)(a4 + 32);
  v35 = v12;
  v34[1] = v13;
  v15 = *(_OWORD *)(a4 + 48);
  v34[2] = v14;
  v34[3] = v15;
  if ( !(unsigned __int8)CMILMatrix::Get2DBoundsUsing2DInverse(v34, a5, &v50) )
  {
    v23 = -2147024809;
    v30 = 773;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, v30, 0LL);
    DynArrayImpl<0>::~DynArrayImpl<0>(&v31);
    return 0;
  }
  SourceInputBounds = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64, _QWORD, int, __int128 *, __int128 *))(**(_QWORD **)(a1 + 128) + 96LL))(
                        *(_QWORD *)(a1 + 128),
                        &v50,
                        a2,
                        v31,
                        v33,
                        &v36,
                        &v37);
  if ( SourceInputBounds < 0 )
  {
    v30 = 769;
LABEL_14:
    v23 = SourceInputBounds;
    goto LABEL_11;
  }
  v16 = v36;
  if ( a6 )
  {
    v19 = v37;
  }
  else
  {
    v17 = *(_DWORD *)(a2 + 16);
    v18 = *(_DWORD *)(a2 + 20);
    v38 = v36;
    v39 = v17;
    v41 = v37;
    v40 = v18;
    v42 = v17;
    v43 = v18;
    CMILMatrix::Transform3DBoundsHelper<1>(a4, (float *)&v38, (float *)&v44);
    CMILMatrix::Transform3DBoundsHelper<1>(a4, (float *)&v41, (float *)&v47);
    v16 = v44;
    v19 = v47;
  }
  *(_OWORD *)a7 = v16;
  *(_OWORD *)a8 = v19;
  if ( (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(a7) )
  {
    if ( *(float *)a5 > *(float *)a7 )
      *(_DWORD *)a7 = *(_DWORD *)a5;
    v24 = *(float *)(a5 + 4);
    if ( v24 > *(float *)(a7 + 4) )
      *(float *)(a7 + 4) = v24;
    v25 = *(float *)(a5 + 8);
    if ( *(float *)(a7 + 8) > v25 )
      *(float *)(a7 + 8) = v25;
    v26 = *(float *)(a5 + 12);
    if ( *(float *)(a7 + 12) > v26 )
      *(float *)(a7 + 12) = v26;
    if ( IsEmpty(v20) )
    {
      *(_QWORD *)(a7 + 8) = 0LL;
      *(_QWORD *)a7 = 0LL;
    }
  }
  if ( (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(a8) )
  {
    if ( *(float *)a5 > *(float *)a8 )
      *(_DWORD *)a8 = *(_DWORD *)a5;
    v27 = *(float *)(a5 + 4);
    if ( v27 > *(float *)(a8 + 4) )
      *(float *)(a8 + 4) = v27;
    v28 = *(float *)(a5 + 8);
    if ( *(float *)(a8 + 8) > v28 )
      *(float *)(a8 + 8) = v28;
    v29 = *(float *)(a5 + 12);
    if ( *(float *)(a8 + 12) > v29 )
      *(float *)(a8 + 12) = v29;
    if ( IsEmpty(v21) )
    {
      *(_QWORD *)(a8 + 8) = 0LL;
      *(_QWORD *)a8 = 0LL;
    }
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(&v31);
  return 1;
}
