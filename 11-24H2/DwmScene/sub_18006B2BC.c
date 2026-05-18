/*
 * XREFs of sub_18006B2BC @ 0x18006B2BC
 * Callers:
 *     sub_180078718 @ 0x180078718 (sub_180078718.c)
 *     sub_1800797BC @ 0x1800797BC (sub_1800797BC.c)
 *     sub_18008D330 @ 0x18008D330 (sub_18008D330.c)
 *     sub_1800DA91F @ 0x1800DA91F (sub_1800DA91F.c)
 *     sub_1800DB48C @ 0x1800DB48C (sub_1800DB48C.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

__int64 __fastcall sub_18006B2BC(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    result = sub_18001060C(v2);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    return sub_18001060C(v4);
  return result;
}
