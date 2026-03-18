/*
 * XREFs of ?Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z @ 0x180123A4C
 * Callers:
 *     _anonymous_namespace_::DecomposeMatrix @ 0x1801245B0 (_anonymous_namespace_--DecomposeMatrix.c)
 * Callees:
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x1801237B0 (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ?make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@MAEBUfloat3@123@@Z @ 0x180123980 (-make_float4x4_rotation_z@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@MAEBUfloat3@123@@Z.c)
 *     ?make_float4x4_scale@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@0@Z @ 0x180177798 (-make_float4x4_scale@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUfloat3@123@0@Z.c)
 */

void __fastcall CMILMatrix::Set2DAffineMatrix(
        __m128 *this,
        const struct Windows::Foundation::Numerics::float2 *a2,
        float a3,
        const struct Windows::Foundation::Numerics::float2 *a4,
        const struct Windows::Foundation::Numerics::float2 *a5,
        const struct Windows::Foundation::Numerics::float2 *a6)
{
  __int64 v8; // xmm0_8
  __m128 *v9; // rax
  __m128 *v10; // rax
  __m128 v11; // xmm1
  __int64 v12; // [rsp+28h] [rbp-E0h] BYREF
  int v13; // [rsp+30h] [rbp-D8h]
  __int64 v14; // [rsp+34h] [rbp-D4h] BYREF
  int v15; // [rsp+3Ch] [rbp-CCh]
  int v16; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v17; // [rsp+4Ch] [rbp-BCh]
  int v18; // [rsp+5Ch] [rbp-ACh]
  __int128 v19; // [rsp+60h] [rbp-A8h]
  int v20; // [rsp+70h] [rbp-98h]
  int v21; // [rsp+74h] [rbp-94h]
  __int64 v22; // [rsp+78h] [rbp-90h]
  int v23; // [rsp+80h] [rbp-88h]
  int v24; // [rsp+84h] [rbp-84h]
  __m128 v25[4]; // [rsp+88h] [rbp-80h] BYREF
  __m128 v26[4]; // [rsp+C8h] [rbp-40h] BYREF
  __m128 v27[4]; // [rsp+108h] [rbp+0h] BYREF
  __m128 v28[5]; // [rsp+148h] [rbp+40h] BYREF

  v15 = 0;
  v13 = 1065353216;
  v14 = *(_QWORD *)a5;
  v12 = *(_QWORD *)a2;
  Windows::Foundation::Numerics::make_float4x4_scale(v26, &v12, &v14);
  v13 = 0;
  v12 = *(_QWORD *)a6;
  Windows::Foundation::Numerics::make_float4x4_rotation_z((__int64)v25, a3, (float *)&v12);
  v8 = *(_QWORD *)a4;
  v21 = 0;
  v23 = 0;
  v16 = 1065353216;
  v19 = 0LL;
  v18 = 1065353216;
  v17 = 0LL;
  v20 = 1065353216;
  v22 = v8;
  v24 = 1065353216;
  v9 = Windows::Foundation::Numerics::operator*(v27, v26, v25);
  v10 = Windows::Foundation::Numerics::operator*(v28, v9, (__m128 *)&v16);
  *this = *v10;
  this[1] = v10[1];
  this[2] = v10[2];
  v11 = v10[3];
  this[4].m128_i8[1] &= 0xE8u;
  this[4].m128_i8[1] |= 0x28u;
  this[3] = v11;
  this[4].m128_i8[0] = 8;
}
