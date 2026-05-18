/*
 * XREFs of sub_180052318 @ 0x180052318
 * Callers:
 *     sub_180068B9C @ 0x180068B9C (sub_180068B9C.c)
 *     sub_1800C13C0 @ 0x1800C13C0 (sub_1800C13C0.c)
 *     sub_1800C1F10 @ 0x1800C1F10 (sub_1800C1F10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180052318(__int64 a1)
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
