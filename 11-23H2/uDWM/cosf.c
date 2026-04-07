/*
 * XREFs of cosf @ 0x18005D49C
 * Callers:
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180040710 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x18010E9CC (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 *     ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x18010EAD4 (-D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl cosf(float X)
{
  return _o_cosf(X);
}
