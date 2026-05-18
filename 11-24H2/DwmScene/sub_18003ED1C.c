/*
 * XREFs of sub_18003ED1C @ 0x18003ED1C
 * Callers:
 *     sub_18003E184 @ 0x18003E184 (sub_18003E184.c)
 *     sub_18003E218 @ 0x18003E218 (sub_18003E218.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_18003E2AC @ 0x18003E2AC (sub_18003E2AC.c)
 */

_QWORD *__fastcall sub_18003ED1C(__int64 a1)
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

  v2 = sub_180012444((__int64)v11, (__int64)&unk_1801C4FD8);
  sub_18003E2AC(a1, &v9, v2);
  if ( v10 )
    sub_18001060C(v10);
  v3 = sub_180012444((__int64)v11, (__int64)&unk_1801C4FB8);
  sub_18003E2AC(a1, &v9, v3);
  if ( v10 )
    sub_18001060C(v10);
  v4 = sub_180012444((__int64)v11, (__int64)&unk_1801C5058);
  sub_18003E2AC(a1, &v9, v4);
  if ( v10 )
    sub_18001060C(v10);
  v5 = sub_180012444((__int64)v11, (__int64)&unk_1801C5038);
  sub_18003E2AC(a1, &v9, v5);
  if ( v10 )
    sub_18001060C(v10);
  v6 = sub_180012444((__int64)v11, (__int64)&unk_1801C4FF8);
  sub_18003E2AC(a1, &v9, v6);
  if ( v10 )
    sub_18001060C(v10);
  v7 = sub_180012444((__int64)v11, (__int64)&unk_1801C5018);
  result = sub_18003E2AC(a1, &v9, v7);
  if ( v10 )
    return (_QWORD *)sub_18001060C(v10);
  return result;
}
