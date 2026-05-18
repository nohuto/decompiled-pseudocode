/*
 * XREFs of memcmp @ 0x18000CD55
 * Callers:
 *     sub_18001B3DC @ 0x18001B3DC (sub_18001B3DC.c)
 *     sub_18001BB4C @ 0x18001BB4C (sub_18001BB4C.c)
 *     sub_18001DC94 @ 0x18001DC94 (sub_18001DC94.c)
 *     sub_18002A7CC @ 0x18002A7CC (sub_18002A7CC.c)
 *     sub_180032290 @ 0x180032290 (sub_180032290.c)
 *     sub_180053ED8 @ 0x180053ED8 (sub_180053ED8.c)
 *     sub_180061660 @ 0x180061660 (sub_180061660.c)
 *     sub_180066CF4 @ 0x180066CF4 (sub_180066CF4.c)
 *     sub_18007C274 @ 0x18007C274 (sub_18007C274.c)
 *     sub_18007C2F4 @ 0x18007C2F4 (sub_18007C2F4.c)
 *     sub_18007C858 @ 0x18007C858 (sub_18007C858.c)
 *     sub_180081CB8 @ 0x180081CB8 (sub_180081CB8.c)
 *     sub_180085B04 @ 0x180085B04 (sub_180085B04.c)
 *     sub_180086554 @ 0x180086554 (sub_180086554.c)
 *     sub_18008D574 @ 0x18008D574 (sub_18008D574.c)
 *     sub_180091DB0 @ 0x180091DB0 (sub_180091DB0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return __imp_memcmp(Buf1, Buf2, Size);
}
