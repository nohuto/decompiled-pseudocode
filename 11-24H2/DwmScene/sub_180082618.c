/*
 * XREFs of sub_180082618 @ 0x180082618
 * Callers:
 *     sub_180081CAC @ 0x180081CAC (sub_180081CAC.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180073DEC @ 0x180073DEC (sub_180073DEC.c)
 */

__int64 __fastcall sub_180082618(__int64 *a1, unsigned __int64 a2)
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
    sub_180073DEC(*a1, a1[1]);
    sub_180010234((void *)*a1, 16 * ((a1[2] - *a1) >> 4));
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return sub_18007EBCC(a1, v2);
}
