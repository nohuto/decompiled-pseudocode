/*
 * XREFs of sub_180069E18 @ 0x180069E18
 * Callers:
 *     sub_180069914 @ 0x180069914 (sub_180069914.c)
 *     sub_180069C10 @ 0x180069C10 (sub_180069C10.c)
 * Callees:
 *     sub_1800695BC @ 0x1800695BC (sub_1800695BC.c)
 */

__int64 __fastcall sub_180069E18(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = a1[1];
  if ( *a1 != v1 )
  {
    sub_1800695BC(*a1, v1);
    result = *a1;
    a1[1] = *a1;
  }
  return result;
}
