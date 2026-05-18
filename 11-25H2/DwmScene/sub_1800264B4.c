/*
 * XREFs of sub_1800264B4 @ 0x1800264B4
 * Callers:
 *     sub_1800265E8 @ 0x1800265E8 (sub_1800265E8.c)
 *     sub_180040DC4 @ 0x180040DC4 (sub_180040DC4.c)
 *     sub_18007B144 @ 0x18007B144 (sub_18007B144.c)
 *     sub_18007B19C @ 0x18007B19C (sub_18007B19C.c)
 *     sub_180095864 @ 0x180095864 (sub_180095864.c)
 *     sub_1800B8700 @ 0x1800B8700 (sub_1800B8700.c)
 * Callees:
 *     sub_180026124 @ 0x180026124 (sub_180026124.c)
 */

__int64 __fastcall sub_1800264B4(void **a1)
{
  sub_180026124((__int64)a1, (__int64)a1, *((_QWORD *)*a1 + 1));
  return sub_180010134(*a1, 0x28uLL);
}
