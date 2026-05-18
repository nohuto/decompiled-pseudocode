/*
 * XREFs of sub_180040FA4 @ 0x180040FA4
 * Callers:
 *     sub_180040ECC @ 0x180040ECC (sub_180040ECC.c)
 *     sub_180056CE0 @ 0x180056CE0 (sub_180056CE0.c)
 *     sub_1800941D0 @ 0x1800941D0 (sub_1800941D0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180040FA4(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
