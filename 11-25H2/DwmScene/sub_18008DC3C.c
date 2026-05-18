/*
 * XREFs of sub_18008DC3C @ 0x18008DC3C
 * Callers:
 *     sub_18008D5BC @ 0x18008D5BC (sub_18008D5BC.c)
 *     sub_1800DB350 @ 0x1800DB350 (sub_1800DB350.c)
 * Callees:
 *     sub_18005C3AC @ 0x18005C3AC (sub_18005C3AC.c)
 */

__int64 __fastcall sub_18008DC3C(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18005C3AC(v1);
  return result;
}
