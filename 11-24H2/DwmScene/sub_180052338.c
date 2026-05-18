/*
 * XREFs of sub_180052338 @ 0x180052338
 * Callers:
 *     sub_180051AD0 @ 0x180051AD0 (sub_180051AD0.c)
 *     sub_1800C3CF0 @ 0x1800C3CF0 (sub_1800C3CF0.c)
 *     sub_1800C5A60 @ 0x1800C5A60 (sub_1800C5A60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180052338(__int64 a1)
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
