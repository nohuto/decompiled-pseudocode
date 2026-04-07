/*
 * XREFs of WithinEpsilon @ 0x180003AC4
 * Callers:
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x180003A34 (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18010EC18 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall WithinEpsilon(float a1, float a2)
{
  float v2; // xmm0_4

  v2 = a1 - a2;
  return v2 >= -0.00000011920929 && v2 <= 0.00000011920929;
}
