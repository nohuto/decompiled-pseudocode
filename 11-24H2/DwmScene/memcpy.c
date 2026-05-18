/*
 * XREFs of memcpy @ 0x18000CE31
 * Callers:
 *     sub_1800100E4 @ 0x1800100E4 (sub_1800100E4.c)
 *     sub_180010A84 @ 0x180010A84 (sub_180010A84.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_1800132FC @ 0x1800132FC (sub_1800132FC.c)
 *     sub_180013918 @ 0x180013918 (sub_180013918.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18001BACC @ 0x18001BACC (sub_18001BACC.c)
 *     sub_18001BBC4 @ 0x18001BBC4 (sub_18001BBC4.c)
 *     sub_18001BF70 @ 0x18001BF70 (sub_18001BF70.c)
 *     sub_18001CE60 @ 0x18001CE60 (sub_18001CE60.c)
 *     sub_18001CF74 @ 0x18001CF74 (sub_18001CF74.c)
 *     sub_18001D23C @ 0x18001D23C (sub_18001D23C.c)
 *     sub_18001D960 @ 0x18001D960 (sub_18001D960.c)
 *     sub_18001DA08 @ 0x18001DA08 (sub_18001DA08.c)
 *     sub_18001DB0C @ 0x18001DB0C (sub_18001DB0C.c)
 *     sub_18001DCC8 @ 0x18001DCC8 (sub_18001DCC8.c)
 *     unknown_libname_85 @ 0x18001E18C (unknown_libname_85.c)
 *     sub_18001E7A0 @ 0x18001E7A0 (sub_18001E7A0.c)
 *     sub_18001F780 @ 0x18001F780 (sub_18001F780.c)
 *     sub_180022E20 @ 0x180022E20 (sub_180022E20.c)
 *     sub_18002EFD8 @ 0x18002EFD8 (sub_18002EFD8.c)
 *     sub_180036B60 @ 0x180036B60 (sub_180036B60.c)
 *     sub_18004D714 @ 0x18004D714 (sub_18004D714.c)
 *     sub_18004E738 @ 0x18004E738 (sub_18004E738.c)
 *     sub_18007C454 @ 0x18007C454 (sub_18007C454.c)
 *     sub_18007C9B8 @ 0x18007C9B8 (sub_18007C9B8.c)
 *     sub_1800B90C0 @ 0x1800B90C0 (sub_1800B90C0.c)
 *     sub_1800B9420 @ 0x1800B9420 (sub_1800B9420.c)
 *     sub_1800C1490 @ 0x1800C1490 (sub_1800C1490.c)
 *     sub_1800CABE8 @ 0x1800CABE8 (sub_1800CABE8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  return __imp_memcpy(a1, Src, Size);
}
