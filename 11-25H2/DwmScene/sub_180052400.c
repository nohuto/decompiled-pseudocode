/*
 * XREFs of sub_180052400 @ 0x180052400
 * Callers:
 *     sub_180051970 @ 0x180051970 (sub_180051970.c)
 *     sub_180068A3C @ 0x180068A3C (sub_180068A3C.c)
 *     sub_1800C5900 @ 0x1800C5900 (sub_1800C5900.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180052400(__int64 a1)
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
      return *(unsigned int *)(v3 + 24);
  }
  return result;
}
