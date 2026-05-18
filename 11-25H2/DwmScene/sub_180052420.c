/*
 * XREFs of sub_180052420 @ 0x180052420
 * Callers:
 *     sub_180026EB0 @ 0x180026EB0 (sub_180026EB0.c)
 *     sub_180051970 @ 0x180051970 (sub_180051970.c)
 *     sub_180068A3C @ 0x180068A3C (sub_180068A3C.c)
 *     sub_1800C0350 @ 0x1800C0350 (sub_1800C0350.c)
 *     sub_1800C1330 @ 0x1800C1330 (sub_1800C1330.c)
 *     sub_1800C234C @ 0x1800C234C (sub_1800C234C.c)
 *     sub_1800C3B90 @ 0x1800C3B90 (sub_1800C3B90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180052420(__int64 a1)
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
