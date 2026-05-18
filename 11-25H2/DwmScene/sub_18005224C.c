/*
 * XREFs of sub_18005224C @ 0x18005224C
 * Callers:
 *     sub_180026E10 @ 0x180026E10 (sub_180026E10.c)
 *     sub_180051970 @ 0x180051970 (sub_180051970.c)
 *     sub_180068A3C @ 0x180068A3C (sub_180068A3C.c)
 *     sub_1800C1330 @ 0x1800C1330 (sub_1800C1330.c)
 *     sub_1800C1DB0 @ 0x1800C1DB0 (sub_1800C1DB0.c)
 *     sub_1800C234C @ 0x1800C234C (sub_1800C234C.c)
 *     sub_1800C3B90 @ 0x1800C3B90 (sub_1800C3B90.c)
 *     sub_1800C53F0 @ 0x1800C53F0 (sub_1800C53F0.c)
 *     sub_1800C5900 @ 0x1800C5900 (sub_1800C5900.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005224C(__int64 a1)
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
      return *(unsigned int *)(v3 + 16);
  }
  return result;
}
