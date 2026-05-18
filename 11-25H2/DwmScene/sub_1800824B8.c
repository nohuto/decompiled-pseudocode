/*
 * XREFs of sub_1800824B8 @ 0x1800824B8
 * Callers:
 *     sub_180081B4C @ 0x180081B4C (sub_180081B4C.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180073C8C @ 0x180073C8C (sub_180073C8C.c)
 */

__int64 __fastcall sub_1800824B8(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8

  v2 = 0x555555555555555LL;
  if ( a2 > 0x555555555555555LL )
    std::_Xlength_error("vector too long");
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 4);
  v5 = v4 >> 1;
  if ( v4 <= 0x555555555555555LL - (v4 >> 1) )
  {
    v2 = v5 + v4;
    if ( v5 + v4 < a2 )
      v2 = a2;
  }
  if ( *a1 )
  {
    sub_180073C8C(*a1, a1[1]);
    sub_180010134((void *)*a1, 16 * ((a1[2] - *a1) >> 4));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return sub_18007EA6C(a1, v2);
}
