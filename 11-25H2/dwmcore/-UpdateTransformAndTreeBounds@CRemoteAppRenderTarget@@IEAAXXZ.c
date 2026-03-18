/*
 * XREFs of ?UpdateTransformAndTreeBounds@CRemoteAppRenderTarget@@IEAAXXZ @ 0x18028CA88
 * Callers:
 *     ?CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJ_N@Z @ 0x18028BAF0 (-CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x1800C3F90 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?IsEquivalentTo@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1801E0D08 (-IsEquivalentTo@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@.c)
 */

void __fastcall CRemoteAppRenderTarget::UpdateTransformAndTreeBounds(CRemoteAppRenderTarget *this)
{
  struct D2D_RECT_F *v1; // rdx
  int v3; // eax
  __m128i v4; // xmm2
  __m128i v5; // xmm3
  float v6; // xmm1_4
  char v7; // al
  struct D2D_RECT_F v8; // [rsp+20h] [rbp-18h] BYREF

  v1 = (struct D2D_RECT_F *)((char *)this + 260);
  if ( *((_QWORD *)this + 14) )
  {
    v3 = *((_DWORD *)this + 30);
    v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 654));
    v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 655));
    v8 = *v1;
    v6 = (float)*((int *)this + 31);
    *(float *)v4.m128i_i32 = _mm_cvtepi32_ps(v4).m128_f32[0];
    *(float *)v5.m128i_i32 = _mm_cvtepi32_ps(v5).m128_f32[0];
    LODWORD(v1->left) = v4.m128i_i32[0];
    *((_DWORD *)this + 66) = v5.m128i_i32[0];
    *((float *)this + 67) = (float)v3 + *(float *)v4.m128i_i32;
    *((float *)this + 68) = v6 + *(float *)v5.m128i_i32;
    *((_QWORD *)this + 24) = 1065353216LL;
    *((_QWORD *)this + 25) = 0LL;
    *((_DWORD *)this + 52) = 0;
    *(_QWORD *)((char *)this + 212) = 1065353216LL;
    *(_QWORD *)((char *)this + 220) = 0LL;
    *((_DWORD *)this + 57) = 0;
    *((_QWORD *)this + 29) = 1065353216LL;
    *((_DWORD *)this + 60) = v4.m128i_i32[0] ^ _xmm;
    *(_QWORD *)((char *)this + 244) = v5.m128i_i32[0] ^ (unsigned int)_xmm;
    *((_DWORD *)this + 63) = 1065353216;
    LOBYTE(v3) = *((_BYTE *)this + 257) & 0xE9;
    *((_BYTE *)this + 256) = -88;
    *((_BYTE *)this + 257) = v3 | 0x29;
    if ( !TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsEquivalentTo(&v8.left, v1) )
    {
      *(_BYTE *)(*((_QWORD *)this + 14) + 2628LL) = 1;
      CTargetDirtyBase<8>::SetFullDirty((__int64)this + 280);
    }
    *((_BYTE *)this + 2628) = 0;
  }
  else
  {
    *((_QWORD *)this + 24) = 1065353216LL;
    *((_QWORD *)this + 25) = 0LL;
    *((_DWORD *)this + 52) = 0;
    *(_QWORD *)((char *)this + 212) = 1065353216LL;
    *(_QWORD *)((char *)this + 220) = 0LL;
    *((_DWORD *)this + 57) = 0;
    *((_QWORD *)this + 29) = 1065353216LL;
    *((_QWORD *)this + 30) = 0LL;
    *((_DWORD *)this + 62) = 0;
    *((_DWORD *)this + 63) = 1065353216;
    v7 = *((_BYTE *)this + 257);
    *((_BYTE *)this + 256) = -86;
    *((_BYTE *)this + 257) = v7 & 0xC0 | 0x29;
    *(_QWORD *)((char *)this + 268) = 0LL;
    *(_QWORD *)&v1->left = 0LL;
  }
}
