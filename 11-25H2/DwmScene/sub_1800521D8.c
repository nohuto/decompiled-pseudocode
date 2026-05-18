/*
 * XREFs of sub_1800521D8 @ 0x1800521D8
 * Callers:
 *     sub_180051970 @ 0x180051970 (sub_180051970.c)
 *     sub_1800C3B90 @ 0x1800C3B90 (sub_1800C3B90.c)
 *     sub_1800C5900 @ 0x1800C5900 (sub_1800C5900.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800521D8(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(__int64 **)(a1 + 112);
  result = 0LL;
  if ( v1 )
  {
    v3 = *v1;
    if ( v3 )
      return *(unsigned int *)(v3 + 8);
  }
  return result;
}
