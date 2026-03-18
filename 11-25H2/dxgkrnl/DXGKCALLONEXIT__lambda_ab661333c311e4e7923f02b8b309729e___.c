/*
 * XREFs of DXGKCALLONEXIT__lambda_ab661333c311e4e7923f02b8b309729e___ @ 0x1400559A0
 * Callers:
 *     ?GetSdrWhiteLevel@@YAJIPEAVADAPTER_DISPLAY@@AEAI@Z @ 0x140308B48 (-GetSdrWhiteLevel@@YAJIPEAVADAPTER_DISPLAY@@AEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGKCALLONEXIT__lambda_ab661333c311e4e7923f02b8b309729e_(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  result = a1;
  *(_OWORD *)a1 = *a2;
  *(_BYTE *)(a1 + 16) = 1;
  return result;
}
