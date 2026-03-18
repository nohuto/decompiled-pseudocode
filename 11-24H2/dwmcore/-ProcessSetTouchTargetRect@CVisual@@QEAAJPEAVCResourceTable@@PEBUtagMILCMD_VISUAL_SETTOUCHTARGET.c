/*
 * XREFs of ?ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTOUCHTARGETRECT@@@Z @ 0x18000C9E4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18000CBEC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18003DB50 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetTouchTargetRect(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETTOUCHTARGETRECT *a3)
{
  __m128 v4; // xmm0
  float v5; // xmm3_4
  float v6; // xmm4_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  struct CSparseStorage::AllocatedStorage **v9; // r10
  __int64 v10; // r9
  int v11; // edx
  float v12; // xmm7_4
  float v13; // xmm6_4
  float v14; // xmm5_4
  __int64 v15; // rax
  __int64 i; // rcx
  __m128i v18; // [rsp+20h] [rbp-30h] BYREF

  v4.m128_i32[0] = 0;
  v5 = (float)*((int *)a3 + 2);
  v6 = (float)*((int *)a3 + 4);
  v7 = (float)*((int *)a3 + 3);
  v8 = (float)*((int *)a3 + 5);
  *(float *)v18.m128i_i32 = v5;
  *(__int64 *)((char *)v18.m128i_i64 + 4) = __PAIR64__(LODWORD(v6), LODWORD(v7));
  *(float *)&v18.m128i_i32[3] = v8;
  if ( v6 < v5 || v8 < v7 )
  {
    v8 = 0.0;
    v6 = 0.0;
    v7 = 0.0;
    v5 = 0.0;
    v18 = 0uLL;
  }
  v9 = (struct CSparseStorage::AllocatedStorage **)((char *)this + 224);
  v10 = *((_QWORD *)this + 28);
  v11 = *(_DWORD *)(v10 + 4);
  if ( (v11 & 0x100000) != 0 )
  {
    for ( i = v10 + 12; (*(_DWORD *)i & 0x7F000000) != 0xC000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    v4 = *(__m128 *)(i + 4);
    LODWORD(v12) = _mm_shuffle_ps(v4, v4, 85).m128_u32[0];
    LODWORD(v13) = _mm_shuffle_ps(v4, v4, 170).m128_u32[0];
    LODWORD(v14) = _mm_shuffle_ps(v4, v4, 255).m128_u32[0];
  }
  else
  {
    v12 = 0.0;
    v13 = 0.0;
    v14 = 0.0;
  }
  if ( (v4.m128_f32[0] != v5 || v12 != v7 || v13 != v6 || v14 != v8)
    && (v13 > v4.m128_f32[0] && v14 > v12 || v6 > v5 && v8 > v7)
    && ((v4.m128_f32[0] > -3.4028235e38 || v13 < 3.4028235e38) && (v12 > -3.4028235e38 || v14 < 3.4028235e38)
     || !(unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(&v18)) )
  {
    v15 = v18.m128i_i64[0] - *(_QWORD *)&`CVisual::SetBlurredWallpaperSurfaceRect'::`2'::sc_defaultValue.r;
    if ( v18.m128i_i64[0] == *(_QWORD *)&`CVisual::SetBlurredWallpaperSurfaceRect'::`2'::sc_defaultValue.r )
      v15 = _mm_srli_si128(v18, 8).m128i_u64[0]
          - *(_QWORD *)&`CVisual::SetBlurredWallpaperSurfaceRect'::`2'::sc_defaultValue.b;
    if ( v15 )
      CSparseStorage::SetData(v9, 0xCu, 0x10u, &v18);
    else
      *(_DWORD *)(v10 + 4) = v11 & 0xFFEFFFFF;
    CVisual::PropagateFlags(this, 1LL);
  }
  return 0LL;
}
