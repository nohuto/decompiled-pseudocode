/*
 * XREFs of ?Arrange@StretchAlign@@QEBA?AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z @ 0x1801DE9D0
 * Callers:
 *     ?GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1802B1D90 (-GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     <none>
 */

struct D2D_RECT_F *__fastcall StretchAlign::Arrange(
        StretchAlign *this,
        struct D2D_RECT_F *__return_ptr retstr,
        const struct D2D_SIZE_F *a3,
        const struct D2D_SIZE_F *a4,
        struct D2D_RECT_F *a5)
{
  int v5; // r10d
  float width; // xmm7_4
  float v7; // xmm0_4
  FLOAT v8; // xmm0_4
  FLOAT v9; // xmm1_4
  struct D2D_RECT_F *v10; // rax
  struct D2D_RECT_F v11; // xmm0
  FLOAT v13; // xmm2_4
  FLOAT v14; // xmm7_4
  float v15; // xmm1_4
  float height; // xmm2_4
  struct D2D_RECT_F v17; // [rsp+0h] [rbp-38h]

  v5 = *((_DWORD *)this + 2);
  width = 0.0;
  v7 = 0.0;
  if ( v5 != 1 )
  {
    if ( v5 )
    {
      if ( (unsigned int)(v5 - 2) > 1 )
      {
LABEL_11:
        v10 = a5;
        v17.top = (float)(a4->height - v7) * *((float *)this + 1);
        v17.left = (float)(a4->width - width) * *(float *)this;
        v17.bottom = v17.top + v7;
        v13 = fminf(v17.top + v7, a4->height);
        v17.right = width + v17.left;
        v14 = fminf(width + v17.left, a4->width);
        retstr->left = fmaxf(0.0, v17.left);
        retstr->top = fmaxf(0.0, v17.top);
        retstr->right = v14;
        retstr->bottom = v13;
        if ( !a5 )
          return retstr;
        v11 = v17;
        goto LABEL_4;
      }
      width = a4->width;
      if ( a3->width != a4->width || a3->height != a4->height )
      {
        v15 = a3->width / a3->height;
        height = a4->height;
        v7 = width / v15;
        if ( (float)(width / v15) >= height != (v5 == 3) )
        {
          v7 = a4->height;
          width = height * v15;
        }
        goto LABEL_11;
      }
    }
    LODWORD(width) = *(const struct D2D_SIZE_F *)&a3->width;
    LODWORD(v7) = _mm_shuffle_ps((__m128)*(_QWORD *)a3, (__m128)*(_QWORD *)a3, 85).m128_u32[0];
    goto LABEL_11;
  }
  v8 = a4->width;
  v9 = a4->height;
  *(_QWORD *)&retstr->left = 0LL;
  v10 = a5;
  retstr->right = v8;
  retstr->bottom = v9;
  if ( a5 )
  {
    v11 = *retstr;
LABEL_4:
    *v10 = v11;
  }
  return retstr;
}
