/*
 * XREFs of ?CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ @ 0x180096F3C
 * Callers:
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x180158D2C (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?UpdateTransformAndTreeBounds@COffScreenRenderTarget@@MEAAXXZ @ 0x1801592B0 (-UpdateTransformAndTreeBounds@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801EC484 (-AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801EC680 (-RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?UpdateTransformAndTreeBounds@CVirtualMonitorCaptureRenderTarget@@MEAAXXZ @ 0x1802831C0 (-UpdateTransformAndTreeBounds@CVirtualMonitorCaptureRenderTarget@@MEAAXXZ.c)
 *     ?OnContentSizeChanged@CCaptureController@@IEAAXXZ @ 0x1802936FC (-OnContentSizeChanged@CCaptureController@@IEAAXXZ.c)
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x1802A8880 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 *     ?UpdateTransformAndTreeBounds@CVisualCapture@@MEAAXXZ @ 0x1802A8D10 (-UpdateTransformAndTreeBounds@CVisualCapture@@MEAAXXZ.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18003DB50 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x18009823C (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x1800FB0F0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COffScreenRenderTarget::CalcTreeBounds(
        COffScreenRenderTarget *this,
        __int64 a2,
        struct Windows::Foundation::Numerics::float4x4 *a3)
{
  __m128i *v3; // rbx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __m128 v7; // xmm6
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  bool v10; // al
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm3_4
  _DWORD v14[4]; // [rsp+28h] [rbp-19h] BYREF
  _OWORD v15[4]; // [rsp+38h] [rbp-9h] BYREF
  int v16; // [rsp+78h] [rbp+37h]
  int v17; // [rsp+A8h] [rbp+67h] BYREF
  int v18; // [rsp+ACh] [rbp+6Bh]

  v3 = (__m128i *)((char *)this + 284);
  if ( *((_QWORD *)this + 14) )
  {
    v5 = *(_OWORD *)((char *)this + 216);
    v6 = *(_OWORD *)((char *)this + 232);
    v16 = *((_DWORD *)this + 70);
    v7 = (__m128)_mm_loadu_si128(v3);
    v15[0] = v5;
    v8 = *(_OWORD *)((char *)this + 248);
    v15[1] = v6;
    v9 = *(_OWORD *)((char *)this + 264);
    v15[2] = v8;
    v15[3] = v9;
    v10 = Windows::Foundation::Numerics::invert(
            (Windows::Foundation::Numerics *)v15,
            (const struct Windows::Foundation::Numerics::float4x4 *)v15,
            a3);
    LOWORD(v16) = v16 & 0xC003;
    if ( v10 )
    {
      (*(void (__fastcall **)(char *, int *))(*((_QWORD *)this + 12) + 40LL))((char *)this + 96, &v17);
      v14[0] = 0;
      v14[1] = 0;
      *(float *)&v14[2] = (float)v17;
      *(float *)&v14[3] = (float)v18;
      CMILMatrix::Transform2DBoundsHelper<0>(v15, v14, v3);
    }
    else
    {
      *v3 = (__m128i)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    LODWORD(v11) = _mm_shuffle_ps(v7, v7, 255).m128_u32[0];
    LODWORD(v12) = _mm_shuffle_ps(v7, v7, 170).m128_u32[0];
    LODWORD(v13) = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
    if ( (v7.m128_f32[0] != *(float *)v3->m128i_i32
       || v13 != *(float *)&v3->m128i_i32[1]
       || v12 != *(float *)&v3->m128i_i32[2]
       || v11 != *(float *)&v3->m128i_i32[3])
      && (v12 > v7.m128_f32[0] && v11 > v13 || !IsEmpty((const struct D2D_RECT_F *)v3))
      && ((v7.m128_f32[0] > -3.4028235e38 || v12 < 3.4028235e38) && (v13 > -3.4028235e38 || v11 < 3.4028235e38)
       || !TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite((float *)v3->m128i_i32)) )
    {
      *(_BYTE *)(*((_QWORD *)this + 14) + 2628LL) = 1;
      CTargetDirtyBase<8>::SetFullDirty((char *)this + 320);
    }
  }
  else
  {
    *((_DWORD *)this + 74) = 0;
    *((_DWORD *)this + 73) = 0;
    *((_DWORD *)this + 72) = 0;
    v3->m128i_i32[0] = 0;
  }
}
