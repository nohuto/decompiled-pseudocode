/*
 * XREFs of sub_18003B990 @ 0x18003B990
 * Callers:
 *     sub_18003AF34 @ 0x18003AF34 (sub_18003AF34.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180012554 @ 0x180012554 (sub_180012554.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_18003B990(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h]

  sub_18003BCDC(a1);
  unknown_libname_81(&v8, a2);
  while ( v8 )
  {
    if ( v8 == a1 )
    {
      if ( v9 )
        sub_18001050C(v9);
      v5 = a2[1];
      if ( v5 )
        sub_18001050C(v5);
      return 1;
    }
    v4 = sub_180012554(v8, &v10);
    sub_180011010(&v8, v4);
    if ( v11 )
      sub_18001050C(v11);
  }
  if ( v9 )
    sub_18001050C(v9);
  v7 = a2[1];
  if ( v7 )
    sub_18001050C(v7);
  return 0;
}
