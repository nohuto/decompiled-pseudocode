/*
 * XREFs of sub_18003EBBC @ 0x18003EBBC
 * Callers:
 *     sub_18003E024 @ 0x18003E024 (sub_18003E024.c)
 *     sub_18003E0B8 @ 0x18003E0B8 (sub_18003E0B8.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_18003E14C @ 0x18003E14C (sub_18003E14C.c)
 */

_QWORD *__fastcall sub_18003EBBC(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *result; // rax
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h]
  _BYTE v11[32]; // [rsp+30h] [rbp-20h] BYREF

  v2 = sub_180012344((__int64)v11, (__int64)&unk_1801C3FC8);
  sub_18003E14C(a1, &v9, v2);
  if ( v10 )
    sub_18001050C(v10);
  v3 = sub_180012344((__int64)v11, (__int64)&unk_1801C3FA8);
  sub_18003E14C(a1, &v9, v3);
  if ( v10 )
    sub_18001050C(v10);
  v4 = sub_180012344((__int64)v11, (__int64)&unk_1801C4048);
  sub_18003E14C(a1, &v9, v4);
  if ( v10 )
    sub_18001050C(v10);
  v5 = sub_180012344((__int64)v11, (__int64)&unk_1801C4028);
  sub_18003E14C(a1, &v9, v5);
  if ( v10 )
    sub_18001050C(v10);
  v6 = sub_180012344((__int64)v11, (__int64)&unk_1801C3FE8);
  sub_18003E14C(a1, &v9, v6);
  if ( v10 )
    sub_18001050C(v10);
  v7 = sub_180012344((__int64)v11, (__int64)&unk_1801C4008);
  result = sub_18003E14C(a1, &v9, v7);
  if ( v10 )
    return (_QWORD *)sub_18001050C(v10);
  return result;
}
