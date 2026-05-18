/*
 * XREFs of sub_180041634 @ 0x180041634
 * Callers:
 *     sub_180041D0C @ 0x180041D0C (sub_180041D0C.c)
 *     sub_18008FDA0 @ 0x18008FDA0 (sub_18008FDA0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180041690 @ 0x180041690 (sub_180041690.c)
 *     sub_180079E74 @ 0x180079E74 (sub_180079E74.c)
 *     sub_18007BE64 @ 0x18007BE64 (sub_18007BE64.c)
 */

__int64 __fastcall sub_180041634(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // r9
  unsigned __int16 v6; // bx
  _BYTE v8[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  _BYTE v10[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h]

  v3 = (_QWORD *)sub_180041690(a1, v10, a3, a2);
  v4 = (_QWORD *)sub_18007BE64(*v3, v8);
  v6 = sub_180079E74(*v4, v5);
  if ( v9 )
    sub_18001050C(v9);
  if ( v11 )
    sub_18001050C(v11);
  return v6;
}
