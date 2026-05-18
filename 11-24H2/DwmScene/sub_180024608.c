/*
 * XREFs of sub_180024608 @ 0x180024608
 * Callers:
 *     sub_180023C3C @ 0x180023C3C (sub_180023C3C.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180012140 @ 0x180012140 (sub_180012140.c)
 */

__int64 __fastcall sub_180024608(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rcx

  v1 = *(__int64 **)(a1 + 8);
  if ( v1 )
  {
    v3 = v1[5];
    if ( v3 )
    {
      sub_180012140(v3, v1[6]);
      sub_180010234((void *)v1[5], (v1[7] - v1[5]) & 0xFFFFFFFFFFFFFFF0uLL);
      v1[5] = 0LL;
      v1[6] = 0LL;
      v1[7] = 0LL;
    }
  }
  return sub_180024584(a1);
}
