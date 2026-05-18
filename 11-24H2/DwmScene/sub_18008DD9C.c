/*
 * XREFs of sub_18008DD9C @ 0x18008DD9C
 * Callers:
 *     sub_18008D71C @ 0x18008D71C (sub_18008D71C.c)
 *     sub_1800DB4B0 @ 0x1800DB4B0 (sub_1800DB4B0.c)
 * Callees:
 *     sub_18005C50C @ 0x18005C50C (sub_18005C50C.c)
 */

__int64 __fastcall sub_18008DD9C(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18005C50C(v1);
  return result;
}
