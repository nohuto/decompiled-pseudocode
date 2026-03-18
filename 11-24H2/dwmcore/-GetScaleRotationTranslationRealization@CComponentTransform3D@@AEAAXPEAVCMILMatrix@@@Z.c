/*
 * XREFs of ?GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z @ 0x18019ECE0
 * Callers:
 *     ?GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800ADB30 (-GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800AA280 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUquaternion@123@@Z @ 0x18019EF24 (-make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUquaternion@123.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x18019F17C (-SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18019F7F0 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 */

void __fastcall CComponentTransform3D::GetScaleRotationTranslationRealization(
        CComponentTransform3D *this,
        struct CMILMatrix *a2)
{
  char v4; // al
  float v5; // xmm1_4
  float v6; // xmm2_4
  int v7; // xmm1_4
  float v8; // xmm1_4
  int v9; // xmm0_4
  int v10; // xmm1_4
  _OWORD *float4x4_from_quaternion; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  float v15; // [rsp+28h] [rbp-59h] BYREF
  int v16; // [rsp+2Ch] [rbp-55h]
  int v17; // [rsp+30h] [rbp-51h]
  int v18; // [rsp+34h] [rbp-4Dh]
  _OWORD v19[4]; // [rsp+38h] [rbp-49h] BYREF
  int v20; // [rsp+78h] [rbp-9h]
  _BYTE v21[80]; // [rsp+88h] [rbp+7h] BYREF

  *(_QWORD *)((char *)a2 + 60) = 1065353216LL;
  *(_QWORD *)a2 = 1065353216LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_DWORD *)a2 + 4) = 0;
  *(_QWORD *)((char *)a2 + 20) = 1065353216LL;
  *(_QWORD *)((char *)a2 + 28) = 0LL;
  *((_DWORD *)a2 + 9) = 0;
  *((_QWORD *)a2 + 5) = 1065353216LL;
  *((_QWORD *)a2 + 6) = 0LL;
  *((_DWORD *)a2 + 14) = 0;
  v4 = *((_BYTE *)a2 + 65) & 0xE9;
  *((_BYTE *)a2 + 64) = -86;
  *((_BYTE *)a2 + 65) = v4 | 0x29;
  v5 = *((float *)this + 51);
  if ( v5 != 1.0 || *((float *)this + 52) != 1.0 || *((float *)this + 53) != 1.0 )
    CMILMatrix::Scale(a2, v5, *((float *)this + 52), *((float *)this + 53));
  v6 = *((float *)this + 58);
  if ( v6 != 0.0 )
  {
    v7 = *((_DWORD *)this + 49);
    v15 = *((float *)this + 48);
    v17 = *((_DWORD *)this + 50);
    v16 = v7;
    v20 = 0;
    CMILMatrix::SetRotation((CMILMatrix *)v19, (const struct Windows::Foundation::Numerics::float3 *)&v15, v6);
    CMILMatrix::Multiply(a2, (const struct CMILMatrix *)v19);
  }
  v8 = *((float *)this + 54);
  if ( v8 != 0.0 || *((float *)this + 55) != 0.0 || *((float *)this + 56) != 0.0 || *((float *)this + 57) != 1.0 )
  {
    v16 = *((_DWORD *)this + 55);
    v9 = *((_DWORD *)this + 57);
    v15 = v8;
    v10 = *((_DWORD *)this + 56);
    v18 = v9;
    v17 = v10;
    float4x4_from_quaternion = (_OWORD *)Windows::Foundation::Numerics::make_float4x4_from_quaternion(v21, &v15);
    v20 = 0;
    v12 = float4x4_from_quaternion[1];
    v19[0] = *float4x4_from_quaternion;
    v13 = float4x4_from_quaternion[2];
    v19[1] = v12;
    v14 = float4x4_from_quaternion[3];
    v19[2] = v13;
    v19[3] = v14;
    CMILMatrix::Multiply(a2, (const struct CMILMatrix *)v19);
  }
  if ( COERCE_FLOAT(*((_DWORD *)this + 45) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(*((_DWORD *)this + 46) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(*((_DWORD *)this + 47) & _xmm) >= 0.0000011920929 )
  {
    CMILMatrix::Translate(a2, *((float *)this + 45), *((float *)this + 46), *((float *)this + 47));
  }
}
