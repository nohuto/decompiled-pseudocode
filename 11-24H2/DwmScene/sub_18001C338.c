/*
 * XREFs of sub_18001C338 @ 0x18001C338
 * Callers:
 *     sub_180029CD4 @ 0x180029CD4 (sub_180029CD4.c)
 *     sub_18002A92C @ 0x18002A92C (sub_18002A92C.c)
 *     sub_180034A20 @ 0x180034A20 (sub_180034A20.c)
 *     sub_180034D98 @ 0x180034D98 (sub_180034D98.c)
 *     sub_18004B918 @ 0x18004B918 (sub_18004B918.c)
 *     sub_18005AEE4 @ 0x18005AEE4 (sub_18005AEE4.c)
 *     sub_1800D6B2B @ 0x1800D6B2B (sub_1800D6B2B.c)
 *     sub_1800E2D00 @ 0x1800E2D00 (sub_1800E2D00.c)
 * Callees:
 *     sub_18001B948 @ 0x18001B948 (sub_18001B948.c)
 */

__int64 __fastcall sub_18001C338(void **a1)
{
  sub_18001B948((__int64)a1, (__int64)a1, *((_QWORD *)*a1 + 1));
  return sub_180010234(*a1, 0x48uLL);
}
