/*
 * XREFs of sub_18006B15C @ 0x18006B15C
 * Callers:
 *     sub_1800785B8 @ 0x1800785B8 (sub_1800785B8.c)
 *     sub_18007965C @ 0x18007965C (sub_18007965C.c)
 *     sub_18008D1D0 @ 0x18008D1D0 (sub_18008D1D0.c)
 *     sub_1800DA7BF @ 0x1800DA7BF (sub_1800DA7BF.c)
 *     sub_1800DB32C @ 0x1800DB32C (sub_1800DB32C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

__int64 __fastcall sub_18006B15C(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    result = sub_18001050C(v2);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    return sub_18001050C(v4);
  return result;
}
