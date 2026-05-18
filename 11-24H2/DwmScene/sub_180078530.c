/*
 * XREFs of sub_180078530 @ 0x180078530
 * Callers:
 *     sub_1800407D0 @ 0x1800407D0 (sub_1800407D0.c)
 *     sub_1800472B0 @ 0x1800472B0 (sub_1800472B0.c)
 *     sub_180056E40 @ 0x180056E40 (sub_180056E40.c)
 *     sub_18008BE60 @ 0x18008BE60 (sub_18008BE60.c)
 * Callees:
 *     sub_18001B53C @ 0x18001B53C (sub_18001B53C.c)
 */

bool __fastcall sub_180078530(__int64 a1, __int64 a2)
{
  return !sub_18001B53C(a2 + 24, a1 + 24)
      && *(_BYTE *)(a2 + 72) == *(_BYTE *)(a1 + 72)
      && *(_DWORD *)(a2 + 76) == *(_DWORD *)(a1 + 76);
}
