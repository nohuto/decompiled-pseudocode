/*
 * XREFs of sub_180011600 @ 0x180011600
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C8C @ 0x180011C8C (sub_180011C8C.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     sub_1800373E4 @ 0x1800373E4 (sub_1800373E4.c)
 *     sub_1800BD964 @ 0x1800BD964 (sub_1800BD964.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180011600(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  sub_180011C8C(&v6);
  sub_1800BD964(a1, &v7);
  v2 = v7;
  if ( v7 )
  {
    sub_18002894C(v7 + 24);
    sub_1800373E4(*(_QWORD *)(v2 + 272));
  }
  if ( v8 )
    sub_18001060C(v8);
  sub_180011C8C(&v9);
  v3 = v9;
  result = v6;
  v5 = v9 - v6;
  a1[34] = v6;
  a1[35] = v3;
  a1[36] = v5;
  return result;
}
