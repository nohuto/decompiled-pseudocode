/*
 * XREFs of sub_180011500 @ 0x180011500
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B8C @ 0x180011B8C (sub_180011B8C.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_180037284 @ 0x180037284 (sub_180037284.c)
 *     sub_1800BD804 @ 0x1800BD804 (sub_1800BD804.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180011500(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  sub_180011B8C(&v6);
  sub_1800BD804(a1, &v7);
  v2 = v7;
  if ( v7 )
  {
    sub_1800287EC(v7 + 24);
    sub_180037284(*(_QWORD *)(v2 + 272));
  }
  if ( v8 )
    sub_18001050C(v8);
  sub_180011B8C(&v9);
  v3 = v9;
  result = v6;
  v5 = v9 - v6;
  a1[34] = v6;
  a1[35] = v3;
  a1[36] = v5;
  return result;
}
