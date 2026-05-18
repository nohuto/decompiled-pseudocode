/*
 * XREFs of sub_18004B784 @ 0x18004B784
 * Callers:
 *     sub_18004B6DC @ 0x18004B6DC (sub_18004B6DC.c)
 *     sub_18004C040 @ 0x18004C040 (sub_18004C040.c)
 *     sub_1800D8AEB @ 0x1800D8AEB (sub_1800D8AEB.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

__int64 __fastcall sub_18004B784(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
    result = sub_18001050C(v2);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    return sub_18001050C(v4);
  return result;
}
