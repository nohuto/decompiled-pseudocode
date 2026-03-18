/*
 * XREFs of DXGKCALLONEXIT__lambda_0e946522d05123f26763d9a2a20a36ba___ @ 0x14006CD34
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x140414B30 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGKCALLONEXIT__lambda_0e946522d05123f26763d9a2a20a36ba_(__int64 a1, __int64 a2)
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
