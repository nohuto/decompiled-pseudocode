/*
 * XREFs of ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x1801604CC
 * Callers:
 *     EncodeTBNFrameToQuaternion @ 0x18015FF90 (EncodeTBNFrameToQuaternion.c)
 *     ?SetOrientation@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801603FC (-SetOrientation@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x180177E90 (_anonymous_namespace_--DecomposeMatrix.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802404F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x1802A7E14 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 */

struct D2DQuaternion *__fastcall D3DXQuaternionNormalize(struct D2DQuaternion *a1, const struct D2DQuaternion *a2)
{
  float v3; // xmm7_4
  float v4; // xmm8_4
  float v5; // xmm9_4
  float v6; // xmm10_4
  float v7; // xmm2_4
  float v9; // xmm6_4

  v3 = *(float *)a2;
  v4 = *((float *)a2 + 1);
  v5 = *((float *)a2 + 2);
  v6 = *((float *)a2 + 3);
  v7 = (float)((float)((float)(v3 * v3) + (float)(v4 * v4)) + (float)(v5 * v5)) + (float)(v6 * v6);
  if ( (float)(v7 - 1.0) < -0.00000011920929 || (float)(v7 - 1.0) > 0.00000011920929 )
  {
    if ( v7 <= 1.1754944e-38 )
    {
      *(_QWORD *)a1 = 0LL;
      *((_QWORD *)a1 + 1) = 0LL;
    }
    else
    {
      v9 = 1.0 / sqrtf_0(v7);
      *(float *)a1 = v3 * v9;
      *((float *)a1 + 1) = v4 * v9;
      *((float *)a1 + 2) = v5 * v9;
      *((float *)a1 + 3) = v6 * v9;
    }
  }
  else if ( a1 != a2 )
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
  }
  return a1;
}
