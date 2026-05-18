/*
 * XREFs of sub_18001BB4C @ 0x18001BB4C
 * Callers:
 *     sub_18001B85C @ 0x18001B85C (sub_18001B85C.c)
 *     sub_18001B920 @ 0x18001B920 (sub_18001B920.c)
 *     sub_180028D00 @ 0x180028D00 (sub_180028D00.c)
 *     sub_18002CE78 @ 0x18002CE78 (sub_18002CE78.c)
 *     sub_18002D150 @ 0x18002D150 (sub_18002D150.c)
 *     sub_1800540EC @ 0x1800540EC (sub_1800540EC.c)
 *     sub_180096D10 @ 0x180096D10 (sub_180096D10.c)
 *     sub_180096E48 @ 0x180096E48 (sub_180096E48.c)
 * Callees:
 *     memcmp @ 0x18000CD55 (memcmp.c)
 */

char __fastcall sub_18001BB4C(const void *a1, size_t a2, const void *a3, size_t a4)
{
  size_t v5; // r8
  int v8; // ecx

  v5 = a4;
  if ( a4 >= a2 )
    v5 = a2;
  v8 = memcmp(a1, a3, v5);
  if ( v8 )
    return v8;
  if ( a2 >= a4 )
    return a2 > a4;
  return -1;
}
