/*
 * XREFs of ?GetMirrorTransform@CVisual@@MEAAXPEAUD2DMatrix@@@Z @ 0x18007F0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?D2DMatrixIdentity@@YAPEAUD2DMatrix@@PEAU1@@Z @ 0x180019394 (-D2DMatrixIdentity@@YAPEAUD2DMatrix@@PEAU1@@Z.c)
 */

void __fastcall CVisual::GetMirrorTransform(CVisual *this, struct D2DMatrix *a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  D2DMatrixIdentity(a2);
  *(_DWORD *)v2 = -1082130432;
  *(float *)(v2 + 48) = (float)*(int *)(v3 + 72) / *(float *)(v3 + 112);
}
