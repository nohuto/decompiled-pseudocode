/*
 * XREFs of memcmp @ 0x18000CE3D
 * Callers:
 *     sub_18001B53C @ 0x18001B53C (sub_18001B53C.c)
 *     sub_18001BCAC @ 0x18001BCAC (sub_18001BCAC.c)
 *     sub_18001DDF4 @ 0x18001DDF4 (sub_18001DDF4.c)
 *     sub_18002A92C @ 0x18002A92C (sub_18002A92C.c)
 *     sub_1800323F0 @ 0x1800323F0 (sub_1800323F0.c)
 *     sub_180054038 @ 0x180054038 (sub_180054038.c)
 *     sub_1800617C0 @ 0x1800617C0 (sub_1800617C0.c)
 *     sub_180066E54 @ 0x180066E54 (sub_180066E54.c)
 *     sub_18007C3D4 @ 0x18007C3D4 (sub_18007C3D4.c)
 *     sub_18007C454 @ 0x18007C454 (sub_18007C454.c)
 *     sub_18007C9B8 @ 0x18007C9B8 (sub_18007C9B8.c)
 *     sub_180081E18 @ 0x180081E18 (sub_180081E18.c)
 *     sub_180085C64 @ 0x180085C64 (sub_180085C64.c)
 *     sub_1800866B4 @ 0x1800866B4 (sub_1800866B4.c)
 *     sub_18008D6D4 @ 0x18008D6D4 (sub_18008D6D4.c)
 *     sub_180091F10 @ 0x180091F10 (sub_180091F10.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return __imp_memcmp(Buf1, Buf2, Size);
}
