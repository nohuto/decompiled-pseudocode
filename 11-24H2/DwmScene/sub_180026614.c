/*
 * XREFs of sub_180026614 @ 0x180026614
 * Callers:
 *     sub_180026748 @ 0x180026748 (sub_180026748.c)
 *     sub_180040F24 @ 0x180040F24 (sub_180040F24.c)
 *     sub_18007B2A4 @ 0x18007B2A4 (sub_18007B2A4.c)
 *     sub_18007B2FC @ 0x18007B2FC (sub_18007B2FC.c)
 *     sub_1800959C4 @ 0x1800959C4 (sub_1800959C4.c)
 *     sub_1800B8860 @ 0x1800B8860 (sub_1800B8860.c)
 * Callees:
 *     sub_180026284 @ 0x180026284 (sub_180026284.c)
 */

__int64 __fastcall sub_180026614(void **a1)
{
  sub_180026284((__int64)a1, (__int64)a1, *((_QWORD *)*a1 + 1));
  return sub_180010234(*a1, 0x28uLL);
}
