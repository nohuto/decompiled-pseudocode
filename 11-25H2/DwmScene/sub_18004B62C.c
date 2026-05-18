/*
 * XREFs of sub_18004B62C @ 0x18004B62C
 * Callers:
 *     sub_18004A230 @ 0x18004A230 (sub_18004A230.c)
 *     sub_18004A2F8 @ 0x18004A2F8 (sub_18004A2F8.c)
 *     sub_18005DB3C @ 0x18005DB3C (sub_18005DB3C.c)
 * Callees:
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 */

__int64 __fastcall sub_18004B62C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_180011A5C(v2 + 32);
  return sub_180024424(a1);
}
