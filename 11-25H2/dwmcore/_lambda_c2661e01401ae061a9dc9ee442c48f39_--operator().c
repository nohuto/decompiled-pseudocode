/*
 * XREFs of _lambda_c2661e01401ae061a9dc9ee442c48f39_::operator() @ 0x1802B9680
 * Callers:
 *     ?ChangeBasis@CVector3ForceEvaluator@@QEAAXAEBUD2DMatrix@@@Z @ 0x1802B9710 (-ChangeBasis@CVector3ForceEvaluator@@QEAAXAEBUD2DMatrix@@@Z.c)
 * Callees:
 *     ?D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18015F2F8 (-D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

struct D2DVector3 *__fastcall lambda_c2661e01401ae061a9dc9ee442c48f39_::operator()(
        __int64 *a1,
        int *a2,
        int *a3,
        int *a4)
{
  int v5; // xmm1_4
  __int64 v7; // r8
  __int64 v8; // r10
  struct D2DVector3 *result; // rax
  int v10; // xmm1_4
  int v11; // xmm0_4
  _DWORD *v12; // r9
  int v13; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+24h] [rbp-14h]
  int v15; // [rsp+28h] [rbp-10h]

  v5 = *a3;
  v7 = *a1;
  v13 = *a2;
  v15 = *a4;
  v14 = v5;
  D3DXVec3TransformNormal(
    (struct D2DVector3 *)&v13,
    (const struct D2DVector3 *)&v13,
    (const struct D2DMatrix *)(v7 + 204));
  result = D3DXVec3TransformNormal(
             (struct D2DVector3 *)&v13,
             (const struct D2DVector3 *)&v13,
             *(const struct D2DMatrix **)(v8 + 8));
  v10 = v14;
  *a2 = v13;
  v11 = v15;
  *a3 = v10;
  *v12 = v11;
  return result;
}
