/*
 * XREFs of sub_180041794 @ 0x180041794
 * Callers:
 *     sub_180041E6C @ 0x180041E6C (sub_180041E6C.c)
 *     sub_18008FF00 @ 0x18008FF00 (sub_18008FF00.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_1800417F0 @ 0x1800417F0 (sub_1800417F0.c)
 *     sub_180079FD4 @ 0x180079FD4 (sub_180079FD4.c)
 *     sub_18007BFC4 @ 0x18007BFC4 (sub_18007BFC4.c)
 */

__int64 __fastcall sub_180041794(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // r9
  unsigned __int16 v6; // bx
  _BYTE v8[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  _BYTE v10[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h]

  v3 = (_QWORD *)sub_1800417F0(a1, v10, a3, a2);
  v4 = (_QWORD *)sub_18007BFC4(*v3, v8);
  v6 = sub_180079FD4(*v4, v5);
  if ( v9 )
    sub_18001060C(v9);
  if ( v11 )
    sub_18001060C(v11);
  return v6;
}
