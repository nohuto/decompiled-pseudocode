/*
 * XREFs of sub_18001C1D8 @ 0x18001C1D8
 * Callers:
 *     sub_180029B74 @ 0x180029B74 (sub_180029B74.c)
 *     sub_18002A7CC @ 0x18002A7CC (sub_18002A7CC.c)
 *     sub_1800348C0 @ 0x1800348C0 (sub_1800348C0.c)
 *     sub_180034C38 @ 0x180034C38 (sub_180034C38.c)
 *     sub_18004B7B8 @ 0x18004B7B8 (sub_18004B7B8.c)
 *     sub_18005AD84 @ 0x18005AD84 (sub_18005AD84.c)
 *     sub_1800D69CB @ 0x1800D69CB (sub_1800D69CB.c)
 *     sub_1800E2BA0 @ 0x1800E2BA0 (sub_1800E2BA0.c)
 * Callees:
 *     sub_18001B7E8 @ 0x18001B7E8 (sub_18001B7E8.c)
 */

__int64 __fastcall sub_18001C1D8(void **a1)
{
  sub_18001B7E8((__int64)a1, (__int64)a1, *((_QWORD *)*a1 + 1));
  return sub_180010134(*a1, 0x48uLL);
}
