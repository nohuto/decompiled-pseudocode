/*
 * XREFs of ?SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x18016978C
 * Callers:
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800D2940 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 */

void __fastcall CDropShadow::SetOcclusionRect(CDropShadow *this, const struct D2D_RECT_F *a2)
{
  float left; // xmm5_4
  float v3; // xmm4_4
  float v4; // xmm2_4
  float v5; // xmm3_4
  struct D2D_RECT_F v6; // xmm1
  struct D2D_RECT_F *v7; // rdx
  _DWORD *v8; // r9
  struct D2D_RECT_F v9; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2->right - 0.5;
  v4 = a2->top - -0.5;
  v5 = a2->bottom - 0.5;
  v9.left = a2->left - -0.5;
  left = v9.left;
  v9.top = v4;
  v9.right = v3;
  v9.bottom = v5;
  if ( v3 < v9.left || v5 < v4 )
  {
    v6 = 0LL;
    LODWORD(v5) = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 255).m128_u32[0];
    LODWORD(v3) = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 170).m128_u32[0];
    v9 = 0LL;
    LODWORD(v4) = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 85).m128_u32[0];
    left = 0.0;
  }
  else
  {
    v6 = v9;
  }
  if ( (*((float *)this + 27) != left
     || *((float *)this + 28) != v4
     || *((float *)this + 29) != v3
     || *((float *)this + 30) != v5)
    && (!IsEmpty((const struct D2D_RECT_F *)((char *)this + 108)) || !IsEmpty(&v9)) )
  {
    *v7 = v6;
    CResource::NotifyOnChanged(v8, 5u, (__int64)v8);
  }
}
