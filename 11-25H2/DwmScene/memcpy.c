/*
 * XREFs of memcpy @ 0x18000CD49
 * Callers:
 *     sub_18000FFE4 @ 0x18000FFE4 (sub_18000FFE4.c)
 *     sub_180010984 @ 0x180010984 (sub_180010984.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_1800131FC @ 0x1800131FC (sub_1800131FC.c)
 *     sub_180013818 @ 0x180013818 (sub_180013818.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18001B96C @ 0x18001B96C (sub_18001B96C.c)
 *     sub_18001BA64 @ 0x18001BA64 (sub_18001BA64.c)
 *     sub_18001BE10 @ 0x18001BE10 (sub_18001BE10.c)
 *     sub_18001CD00 @ 0x18001CD00 (sub_18001CD00.c)
 *     sub_18001CE14 @ 0x18001CE14 (sub_18001CE14.c)
 *     sub_18001D0DC @ 0x18001D0DC (sub_18001D0DC.c)
 *     sub_18001D800 @ 0x18001D800 (sub_18001D800.c)
 *     sub_18001D8A8 @ 0x18001D8A8 (sub_18001D8A8.c)
 *     sub_18001D9AC @ 0x18001D9AC (sub_18001D9AC.c)
 *     sub_18001DB68 @ 0x18001DB68 (sub_18001DB68.c)
 *     unknown_libname_85 @ 0x18001E02C (unknown_libname_85.c)
 *     sub_18001E640 @ 0x18001E640 (sub_18001E640.c)
 *     sub_18001F620 @ 0x18001F620 (sub_18001F620.c)
 *     sub_180022CC0 @ 0x180022CC0 (sub_180022CC0.c)
 *     sub_18002EE78 @ 0x18002EE78 (sub_18002EE78.c)
 *     sub_180036A00 @ 0x180036A00 (sub_180036A00.c)
 *     sub_18004D5B4 @ 0x18004D5B4 (sub_18004D5B4.c)
 *     sub_18004E5D8 @ 0x18004E5D8 (sub_18004E5D8.c)
 *     sub_18007C2F4 @ 0x18007C2F4 (sub_18007C2F4.c)
 *     sub_18007C858 @ 0x18007C858 (sub_18007C858.c)
 *     sub_1800B8F60 @ 0x1800B8F60 (sub_1800B8F60.c)
 *     sub_1800B92C0 @ 0x1800B92C0 (sub_1800B92C0.c)
 *     sub_1800C1330 @ 0x1800C1330 (sub_1800C1330.c)
 *     sub_1800CAA88 @ 0x1800CAA88 (sub_1800CAA88.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  return __imp_memcpy(a1, Src, Size);
}
