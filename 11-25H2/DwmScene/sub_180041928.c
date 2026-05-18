/*
 * XREFs of sub_180041928 @ 0x180041928
 * Callers:
 *     sub_18001613C @ 0x18001613C (sub_18001613C.c)
 *     sub_180049970 @ 0x180049970 (sub_180049970.c)
 *     sub_180060F00 @ 0x180060F00 (sub_180060F00.c)
 *     sub_180062584 @ 0x180062584 (sub_180062584.c)
 *     sub_18006B954 @ 0x18006B954 (sub_18006B954.c)
 *     sub_18008B290 @ 0x18008B290 (sub_18008B290.c)
 *     sub_180090770 @ 0x180090770 (sub_180090770.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_1800254DC @ 0x1800254DC (sub_1800254DC.c)
 *     sub_1800419A4 @ 0x1800419A4 (sub_1800419A4.c)
 *     sub_18004C4C4 @ 0x18004C4C4 (sub_18004C4C4.c)
 *     sub_18005BC94 @ 0x18005BC94 (sub_18005BC94.c)
 */

__int64 __fastcall sub_180041928(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  _QWORD *v6; // rax
  __int64 v7; // r9
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  _BYTE v12[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h]

  result = sub_1800254DC(a1, &v10);
  if ( v10 )
  {
    v6 = (_QWORD *)sub_18005BC94(v10, v12);
    v8 = sub_18004C4C4(*v6, v7);
    LOBYTE(v9) = a3;
    result = sub_1800419A4(a1, v8, v9);
    if ( v13 )
      result = sub_18001050C(v13);
  }
  if ( v11 )
    return sub_18001050C(v11);
  return result;
}
