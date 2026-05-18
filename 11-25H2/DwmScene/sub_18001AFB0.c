/*
 * XREFs of sub_18001AFB0 @ 0x18001AFB0
 * Callers:
 *     sub_1800164E8 @ 0x1800164E8 (sub_1800164E8.c)
 * Callees:
 *     sub_18000F0E4 @ 0x18000F0E4 (sub_18000F0E4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 *     sub_18001AB0C @ 0x18001AB0C (sub_18001AB0C.c)
 *     sub_18003EA7C @ 0x18003EA7C (sub_18003EA7C.c)
 */

__int64 __fastcall sub_18001AFB0(__int64 *a1, _QWORD *a2)
{
  __int64 *v2; // rsi
  __int64 v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rax
  _BYTE v13[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]
  _BYTE v15[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v2 = a1 + 2;
  sub_18001244C(a1 + 2, a2);
  v4 = *v2;
  v5 = sub_180012344((__int64)v15, (__int64)&unk_1801C3FA8);
  v6 = (_QWORD *)sub_18003EA7C(v4, v13, v5);
  v7 = sub_18001AB0C(a1 + 4, v6);
  if ( v14 )
    sub_18001050C(v14);
  if ( v7 < 0 )
  {
    v8 = 33LL;
LABEL_5:
    sub_18000F0E4(
      retaddr,
      v8,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectreworld.cpp",
      (unsigned int)v7);
    return (unsigned int)v7;
  }
  v10 = *v2;
  v11 = sub_180012344((__int64)v15, (__int64)&unk_1801C4028);
  v12 = (_QWORD *)sub_18003EA7C(v10, v13, v11);
  v7 = sub_18001AB0C(a1 + 5, v12);
  if ( v14 )
    sub_18001050C(v14);
  if ( v7 < 0 )
  {
    v8 = 37LL;
    goto LABEL_5;
  }
  return 0LL;
}
