/*
 * XREFs of WithinEpsilon @ 0x18006AC30
 * Callers:
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1800F5250 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall WithinEpsilon(float a1, float a2)
{
  float v2; // xmm0_4

  v2 = a1 - a2;
  return v2 >= -0.00000011920929 && v2 <= 0.00000011920929;
}
