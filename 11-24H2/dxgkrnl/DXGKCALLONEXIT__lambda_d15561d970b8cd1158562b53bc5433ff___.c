/*
 * XREFs of DXGKCALLONEXIT__lambda_d15561d970b8cd1158562b53bc5433ff___ @ 0x14006CB98
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1404117C0 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGKCALLONEXIT__lambda_d15561d970b8cd1158562b53bc5433ff_(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // xmm1
  __int64 v4; // xmm0_8

  result = a1;
  v3 = *(_OWORD *)(a2 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_BYTE *)(a1 + 40) = 1;
  v4 = *(_QWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 16) = v3;
  *(_QWORD *)(a1 + 32) = v4;
  return result;
}
