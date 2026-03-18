/*
 * XREFs of ?Transform2DBounds@MILMatrix3x2@@QEBAXAEBUD2D_RECT_F@@AEAU2@@Z @ 0x18014FB88
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18014E034 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall MILMatrix3x2::Transform2DBounds(MILMatrix3x2 *this, const struct D2D_RECT_F *a2, struct D2D_RECT_F *a3)
{
  FLOAT *v3; // rax
  FLOAT left; // xmm2_4
  FLOAT right; // xmm1_4
  FLOAT bottom; // xmm0_4
  int v7; // edx
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  unsigned int v12; // ecx
  float v13; // xmm1_4
  float *v14; // rax
  float v15; // xmm2_4
  float v16; // xmm2_4
  FLOAT v17; // [rsp+0h] [rbp-30h] BYREF
  FLOAT top; // [rsp+4h] [rbp-2Ch]
  FLOAT v19; // [rsp+8h] [rbp-28h]
  _DWORD v20[5]; // [rsp+Ch] [rbp-24h] BYREF

  v3 = &v17;
  left = a2->left;
  right = a2->right;
  top = a2->top;
  *(FLOAT *)v20 = top;
  bottom = a2->bottom;
  v7 = 4;
  *(FLOAT *)&v20[2] = bottom;
  *(FLOAT *)&v20[4] = bottom;
  v17 = left;
  v19 = right;
  *(FLOAT *)&v20[1] = left;
  *(FLOAT *)&v20[3] = right;
  do
  {
    v8 = *v3;
    v9 = *((float *)this + 1);
    v10 = *((float *)this + 3);
    *v3 = (float)((float)(*(float *)this * *v3) + (float)(*((float *)this + 2) * v3[1])) + *((float *)this + 4);
    v3[1] = (float)((float)(v9 * v8) + (float)(v10 * v3[1])) + *((float *)this + 5);
    v3 += 2;
    --v7;
  }
  while ( v7 );
  v11 = v17;
  v12 = 1;
  v13 = top;
  v14 = (float *)v20;
  a3->left = v17;
  a3->top = v13;
  a3->right = v11;
  a3->bottom = v13;
  do
  {
    v15 = *(v14 - 1);
    if ( v11 > v15 )
    {
      a3->left = v15;
      v11 = v15;
    }
    else if ( v15 > a3->right )
    {
      a3->right = v15;
    }
    v16 = *v14;
    if ( v13 > *v14 )
    {
      a3->top = v16;
      v13 = v16;
    }
    else if ( v16 > a3->bottom )
    {
      a3->bottom = v16;
    }
    ++v12;
    v14 += 2;
  }
  while ( v12 < 4 );
}
