/*
 * XREFs of sub_18001B110 @ 0x18001B110
 * Callers:
 *     sub_1800165E8 @ 0x1800165E8 (sub_1800165E8.c)
 * Callees:
 *     sub_18000F1E4 @ 0x18000F1E4 (sub_18000F1E4.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_18001ABCC @ 0x18001ABCC (sub_18001ABCC.c)
 *     sub_18003EBDC @ 0x18003EBDC (sub_18003EBDC.c)
 */

__int64 __fastcall sub_18001B110(__int64 *a1, _QWORD *a2)
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
  sub_18001254C(a1 + 2, a2);
  v4 = *v2;
  v5 = sub_180012444((__int64)v15, (__int64)&unk_1801C4FB8);
  v6 = (_QWORD *)sub_18003EBDC(v4, v13, v5);
  v7 = sub_18001ABCC(a1 + 4, v6);
  if ( v14 )
    sub_18001060C(v14);
  if ( v7 < 0 )
  {
    v8 = 33LL;
LABEL_5:
    sub_18000F1E4(
      retaddr,
      v8,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectreworld.cpp",
      (unsigned int)v7);
    return (unsigned int)v7;
  }
  v10 = *v2;
  v11 = sub_180012444((__int64)v15, (__int64)&unk_1801C5038);
  v12 = (_QWORD *)sub_18003EBDC(v10, v13, v11);
  v7 = sub_18001ABCC(a1 + 5, v12);
  if ( v14 )
    sub_18001060C(v14);
  if ( v7 < 0 )
  {
    v8 = 37LL;
    goto LABEL_5;
  }
  return 0LL;
}
