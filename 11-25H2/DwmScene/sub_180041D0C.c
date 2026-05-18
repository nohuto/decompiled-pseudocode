/*
 * XREFs of sub_180041D0C @ 0x180041D0C
 * Callers:
 *     sub_180075640 @ 0x180075640 (sub_180075640.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_1800409D8 @ 0x1800409D8 (sub_1800409D8.c)
 *     sub_180041634 @ 0x180041634 (sub_180041634.c)
 *     sub_18007BE88 @ 0x18007BE88 (sub_18007BE88.c)
 */

bool __fastcall sub_180041D0C(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v4; // ax
  __int64 v5; // rcx
  bool v6; // di
  __int64 v8; // rax
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v4 = sub_180041634(a1, (__int64)&unk_1801C6DE8, a3);
  v5 = *(_QWORD *)(a1 + 120);
  LOWORD(v11) = v4;
  sub_18007BE88(v5, &v9, v4);
  v6 = v9 != 0;
  if ( v10 )
    sub_18001050C(v10);
  if ( v6 )
    return 1;
  v8 = sub_1800409D8(a1 + 200, (__int64)&v11);
  return v8 != *(_QWORD *)(a1 + 200) && (unsigned int)(*(_DWORD *)(v8 + 32) - 1) <= 1;
}
