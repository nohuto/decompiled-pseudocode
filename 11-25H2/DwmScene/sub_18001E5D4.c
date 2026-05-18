/*
 * XREFs of sub_18001E5D4 @ 0x18001E5D4
 * Callers:
 *     sub_18001DC50 @ 0x18001DC50 (sub_18001DC50.c)
 *     sub_18003F9D8 @ 0x18003F9D8 (sub_18003F9D8.c)
 *     sub_180054070 @ 0x180054070 (sub_180054070.c)
 *     sub_180054A28 @ 0x180054A28 (sub_180054A28.c)
 *     sub_18005C53C @ 0x18005C53C (sub_18005C53C.c)
 *     sub_18005EBFC @ 0x18005EBFC (sub_18005EBFC.c)
 *     sub_18005ED8C @ 0x18005ED8C (sub_18005ED8C.c)
 *     sub_18005EEF0 @ 0x18005EEF0 (sub_18005EEF0.c)
 *     sub_18005F730 @ 0x18005F730 (sub_18005F730.c)
 *     sub_1800CDD8C @ 0x1800CDD8C (sub_1800CDD8C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001E5D4(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r10
  unsigned __int16 v5; // cx

  result = 0LL;
  v4 = a1 - (_QWORD)a2;
  while ( a3 )
  {
    v5 = *(unsigned __int16 *)((char *)a2 + v4);
    if ( v5 != *a2 )
      return v5 < *a2 ? -1 : 1;
    --a3;
    ++a2;
  }
  return result;
}
