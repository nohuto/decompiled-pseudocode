/*
 * XREFs of sub_18002A3D0 @ 0x18002A3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_18002A3D0(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax
  __int128 v3; // xmm1

  result = a2;
  v3 = *(_OWORD *)(a1 + 112);
  *a2 = *(_OWORD *)(a1 + 96);
  a2[1] = v3;
  return result;
}
