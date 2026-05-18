/*
 * XREFs of sub_180041E6C @ 0x180041E6C
 * Callers:
 *     sub_1800757A0 @ 0x1800757A0 (sub_1800757A0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180040B38 @ 0x180040B38 (sub_180040B38.c)
 *     sub_180041794 @ 0x180041794 (sub_180041794.c)
 *     sub_18007BFE8 @ 0x18007BFE8 (sub_18007BFE8.c)
 */

bool __fastcall sub_180041E6C(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v4; // ax
  __int64 v5; // rcx
  bool v6; // di
  __int64 v8; // rax
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v4 = sub_180041794(a1, (__int64)&unk_1801C7DF8, a3);
  v5 = *(_QWORD *)(a1 + 120);
  LOWORD(v11) = v4;
  sub_18007BFE8(v5, &v9, v4);
  v6 = v9 != 0;
  if ( v10 )
    sub_18001060C(v10);
  if ( v6 )
    return 1;
  v8 = sub_180040B38(a1 + 200, (__int64)&v11);
  return v8 != *(_QWORD *)(a1 + 200) && (unsigned int)(*(_DWORD *)(v8 + 32) - 1) <= 1;
}
