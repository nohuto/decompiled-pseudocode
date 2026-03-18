/*
 * XREFs of ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x1801BB430
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801BAEE0 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x1802A00E4 (-InitializeForces@CNaturalAnimation@@AEAAXXZ.c)
 * Callees:
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x1801274EC (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 *     ?D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z @ 0x18015B0EC (-D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x18015B40C (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec3Cross@@YAPEAUD2DVector3@@PEAU1@PEBU1@1@Z @ 0x18022C1C8 (-D3DXVec3Cross@@YAPEAUD2DVector3@@PEAU1@PEBU1@1@Z.c)
 *     ?D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z @ 0x18024B2AC (-D3DXQuaternionRotationAxis@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DVector3@@M@Z.c)
 *     atan2f_0 @ 0x1802DF5B4 (atan2f_0.c)
 */

char __fastcall CNaturalAnimation::GenerateVector3Basis(CNaturalAnimation *this)
{
  char v1; // r9
  char v3; // al
  __m128 v5; // xmm6
  __m128 v6; // xmm7
  __m128i v7; // xmm8
  int v8; // edi
  unsigned __int64 v9; // xmm9_8
  float *v10; // rax
  float *v11; // r8
  float v12; // xmm0_4
  unsigned int v13; // xmm2_4
  float v14; // xmm0_4
  const struct D2DMatrix *v15; // r8
  unsigned __int64 v16; // [rsp+28h] [rbp-29h] BYREF
  int v17; // [rsp+30h] [rbp-21h]
  _BYTE v18[112]; // [rsp+38h] [rbp-19h] BYREF

  v1 = 0;
  v3 = *((_BYTE *)this + 572);
  if ( (v3 & 4) != 0 )
  {
    v5 = (__m128)*((unsigned int *)this + 83);
    v6 = (__m128)*((unsigned int *)this + 84);
    v5.m128_f32[0] = v5.m128_f32[0] - *((float *)this + 86);
    v6.m128_f32[0] = v6.m128_f32[0] - *((float *)this + 87);
    v7 = (__m128i)*((unsigned int *)this + 85);
    *(float *)v7.m128i_i32 = *(float *)v7.m128i_i32 - *((float *)this + 88);
    v17 = v7.m128i_i32[0];
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)(v6.m128_f32[0] * v6.m128_f32[0]) + (float)(v5.m128_f32[0] * v5.m128_f32[0]))
                      + (float)(*(float *)v7.m128i_i32 * *(float *)v7.m128i_i32)) & _xmm) >= 0.0000011920929 )
    {
      v8 = _mm_cvtsi128_si32(v7);
      v9 = _mm_unpacklo_ps(v5, v6).m128_u64[0];
      v16 = v9;
    }
    else
    {
      v8 = *((_DWORD *)this + 91);
      v9 = *(_QWORD *)((char *)this + 356);
      v16 = v9;
      v6.m128_i32[0] = HIDWORD(v9);
      v5.m128_i32[0] = v9;
      v7.m128i_i32[0] = v8;
      v17 = v8;
    }
    if ( (v3 & 1) == 0
      || (v10 = (float *)D3DXVec3Cross(
                           (CNaturalAnimation *)((char *)this + 368),
                           (const struct D2DVector3 *)&v16,
                           (CNaturalAnimation *)((char *)this + 368)),
          COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(*v10 * *v10) + (float)(v10[1] * v10[1])) + (float)(v10[2] * v10[2])) & _xmm) >= 0.0000011920929)
      || COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(*v11 * *v11) + (float)(v11[1] * v11[1])) + (float)(v11[2] * v11[2])) & _xmm) < 0.0000011920929 )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)(v6.m128_f32[0] * v6.m128_f32[0]) + (float)(v5.m128_f32[0] * v5.m128_f32[0]))
                        + (float)(*(float *)v7.m128i_i32 * *(float *)v7.m128i_i32)) & _xmm) >= 0.0000011920929 )
      {
        LODWORD(v12) = (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
        if ( v5.m128_f32[0] == 0.0 )
          v13 = 0;
        else
          v13 = (unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
        if ( v5.m128_f32[0] != 0.0 )
          v12 = COERCE_FLOAT(v6.m128_i32[0] ^ _xmm) / v5.m128_f32[0];
        v17 = 0;
        v16 = __PAIR64__(v13, LODWORD(v12));
        D3DXVec3Normalize((struct D2DVector3 *)&v16, (const struct D2DVector3 *)&v16);
        v14 = atan2f_0(
                COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*((float *)&v16 + 1) * v5.m128_f32[0]) - (float)(*(float *)&v16 * v6.m128_f32[0])) ^ _xmm),
                *(float *)v7.m128i_i32);
        D3DXQuaternionRotationAxis((struct D2DQuaternion *)v18, (const struct D2DVector3 *)&v16, v14);
        D2DMatrixRotationQuaternion((CNaturalAnimation *)((char *)this + 444), (const struct D2DQuaternion *)v18);
        D2DMatrixInverse((CNaturalAnimation *)((char *)this + 508), 0LL, v15);
        v1 = 1;
      }
    }
    *((_BYTE *)this + 572) &= ~4u;
    *((_QWORD *)this + 46) = v9;
    *((_DWORD *)this + 94) = v8;
  }
  return v1;
}
