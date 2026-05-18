/*
 * XREFs of sub_18001BCAC @ 0x18001BCAC
 * Callers:
 *     sub_18001B9BC @ 0x18001B9BC (sub_18001B9BC.c)
 *     sub_18001BA80 @ 0x18001BA80 (sub_18001BA80.c)
 *     sub_180028E60 @ 0x180028E60 (sub_180028E60.c)
 *     sub_18002CFD8 @ 0x18002CFD8 (sub_18002CFD8.c)
 *     sub_18002D2B0 @ 0x18002D2B0 (sub_18002D2B0.c)
 *     sub_18005424C @ 0x18005424C (sub_18005424C.c)
 *     sub_180096E70 @ 0x180096E70 (sub_180096E70.c)
 *     sub_180096FA8 @ 0x180096FA8 (sub_180096FA8.c)
 * Callees:
 *     memcmp @ 0x18000CE3D (memcmp.c)
 */

char __fastcall sub_18001BCAC(const void *a1, size_t a2, const void *a3, size_t a4)
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
