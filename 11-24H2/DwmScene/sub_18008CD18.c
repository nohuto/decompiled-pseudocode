/*
 * XREFs of sub_18008CD18 @ 0x18008CD18
 * Callers:
 *     sub_180069830 @ 0x180069830 (sub_180069830.c)
 *     sub_18008C984 @ 0x18008C984 (sub_18008C984.c)
 *     sub_18008CA14 @ 0x18008CA14 (sub_18008CA14.c)
 *     sub_18008CC38 @ 0x18008CC38 (sub_18008CC38.c)
 *     sub_180091188 @ 0x180091188 (sub_180091188.c)
 *     sub_180092740 @ 0x180092740 (sub_180092740.c)
 * Callees:
 *     sub_180012140 @ 0x180012140 (sub_180012140.c)
 */

__int64 __fastcall sub_18008CD18(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = a1[1];
  if ( *a1 != v1 )
  {
    sub_180012140(*a1, v1);
    result = *a1;
    a1[1] = *a1;
  }
  return result;
}
