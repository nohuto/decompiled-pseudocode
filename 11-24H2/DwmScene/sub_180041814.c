/*
 * XREFs of sub_180041814 @ 0x180041814
 * Callers:
 *     sub_18008FF00 @ 0x18008FF00 (sub_18008FF00.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_1800417F0 @ 0x1800417F0 (sub_1800417F0.c)
 *     sub_18007A280 @ 0x18007A280 (sub_18007A280.c)
 *     sub_18007BFC4 @ 0x18007BFC4 (sub_18007BFC4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180041814(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rax
  unsigned __int16 v3; // r9
  __int64 v4; // rbx
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]

  v1 = (_QWORD *)sub_1800417F0(a1, &v8);
  v2 = (_QWORD *)sub_18007BFC4(*v1, v6);
  v4 = sub_18007A280(*v2, v3);
  if ( v7 )
    sub_18001060C(v7);
  if ( v9 )
    sub_18001060C(v9);
  return v4;
}
