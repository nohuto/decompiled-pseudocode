/*
 * XREFs of cosf @ 0x18009C45C
 * Callers:
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x180017D20 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x180018A50 (-D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl cosf(float X)
{
  return _o_cosf(X);
}
