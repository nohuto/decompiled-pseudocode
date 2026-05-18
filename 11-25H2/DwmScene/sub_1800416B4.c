/*
 * XREFs of sub_1800416B4 @ 0x1800416B4
 * Callers:
 *     sub_18008FDA0 @ 0x18008FDA0 (sub_18008FDA0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180041690 @ 0x180041690 (sub_180041690.c)
 *     sub_18007A120 @ 0x18007A120 (sub_18007A120.c)
 *     sub_18007BE64 @ 0x18007BE64 (sub_18007BE64.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800416B4(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rax
  unsigned __int16 v3; // r9
  __int64 v4; // rbx
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]

  v1 = (_QWORD *)sub_180041690(a1, &v8);
  v2 = (_QWORD *)sub_18007BE64(*v1, v6);
  v4 = sub_18007A120(*v2, v3);
  if ( v7 )
    sub_18001050C(v7);
  if ( v9 )
    sub_18001050C(v9);
  return v4;
}
