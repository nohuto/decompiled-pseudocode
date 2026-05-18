/*
 * XREFs of sub_180052580 @ 0x180052580
 * Callers:
 *     sub_180027010 @ 0x180027010 (sub_180027010.c)
 *     sub_180051AD0 @ 0x180051AD0 (sub_180051AD0.c)
 *     sub_180068B9C @ 0x180068B9C (sub_180068B9C.c)
 *     sub_1800C04B0 @ 0x1800C04B0 (sub_1800C04B0.c)
 *     sub_1800C1490 @ 0x1800C1490 (sub_1800C1490.c)
 *     sub_1800C24AC @ 0x1800C24AC (sub_1800C24AC.c)
 *     sub_1800C3CF0 @ 0x1800C3CF0 (sub_1800C3CF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180052580(__int64 a1)
{
  unsigned int **v1; // rcx
  __int64 result; // rax
  unsigned int *v3; // rcx

  v1 = *(unsigned int ***)(a1 + 112);
  result = 0LL;
  if ( v1 )
  {
    v3 = *v1;
    if ( v3 )
      return *v3;
  }
  return result;
}
