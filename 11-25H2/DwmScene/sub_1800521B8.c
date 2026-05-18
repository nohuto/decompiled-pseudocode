/*
 * XREFs of sub_1800521B8 @ 0x1800521B8
 * Callers:
 *     sub_180068A3C @ 0x180068A3C (sub_180068A3C.c)
 *     sub_1800C1260 @ 0x1800C1260 (sub_1800C1260.c)
 *     sub_1800C1DB0 @ 0x1800C1DB0 (sub_1800C1DB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800521B8(__int64 a1)
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
      return *(unsigned int *)(v3 + 20);
  }
  return result;
}
