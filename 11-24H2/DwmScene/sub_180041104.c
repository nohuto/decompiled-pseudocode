/*
 * XREFs of sub_180041104 @ 0x180041104
 * Callers:
 *     sub_18004102C @ 0x18004102C (sub_18004102C.c)
 *     sub_180056E40 @ 0x180056E40 (sub_180056E40.c)
 *     sub_180094330 @ 0x180094330 (sub_180094330.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180041104(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3];
}
