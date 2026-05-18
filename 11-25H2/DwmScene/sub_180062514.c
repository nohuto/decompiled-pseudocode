/*
 * XREFs of sub_180062514 @ 0x180062514
 * Callers:
 *     sub_180063F0C @ 0x180063F0C (sub_180063F0C.c)
 *     sub_18008FEF0 @ 0x18008FEF0 (sub_18008FEF0.c)
 * Callees:
 *     _o_powf @ 0x18000C028 (_o_powf.c)
 */

_DWORD *__fastcall sub_180062514(int *a1, _DWORD *a2)
{
  int v3; // xmm0_4
  int v5; // xmm0_4
  int v6; // xmm0_4
  _DWORD *result; // rax

  v3 = *a1;
  o_powf();
  *a2 = v3;
  v5 = a1[1];
  o_powf();
  a2[1] = v5;
  v6 = a1[2];
  o_powf();
  a2[3] = a1[3];
  result = a2;
  a2[2] = v6;
  return result;
}
