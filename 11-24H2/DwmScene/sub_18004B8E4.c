/*
 * XREFs of sub_18004B8E4 @ 0x18004B8E4
 * Callers:
 *     sub_18004B83C @ 0x18004B83C (sub_18004B83C.c)
 *     sub_18004C1A0 @ 0x18004C1A0 (sub_18004C1A0.c)
 *     sub_1800D8C4B @ 0x1800D8C4B (sub_1800D8C4B.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

__int64 __fastcall sub_18004B8E4(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
    result = sub_18001060C(v2);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    return sub_18001060C(v4);
  return result;
}
