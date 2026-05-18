/*
 * XREFs of sub_1800CFAC4 @ 0x1800CFAC4
 * Callers:
 *     sub_1800CDE50 @ 0x1800CDE50 (sub_1800CDE50.c)
 * Callees:
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     sub_180040254 @ 0x180040254 (sub_180040254.c)
 *     sub_18005DD38 @ 0x18005DD38 (sub_18005DD38.c)
 *     sub_180068010 @ 0x180068010 (sub_180068010.c)
 *     sub_1800CF9E4 @ 0x1800CF9E4 (sub_1800CF9E4.c)
 *     sub_1800CFE24 @ 0x1800CFE24 (sub_1800CFE24.c)
 *     sub_1800D0DD4 @ 0x1800D0DD4 (sub_1800D0DD4.c)
 *     sub_1800D10A0 @ 0x1800D10A0 (sub_1800D10A0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800CFAC4(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rbp
  _QWORD *v10; // r14
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v13; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v14; // [rsp+38h] [rbp-20h]

  v6 = sub_1800131AC(a3);
  v9 = sub_18001E5E0(v8, v6, 2 * v7);
  sub_18005DD38(a1, &v12, a3, v9);
  if ( *((_QWORD *)&v12 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v12 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_1800D0DD4(a1);
    v13 = a1 + 1;
    v10 = (_QWORD *)sub_18001B1F8(176LL);
    v14 = v10;
    sub_1800CF9E4((__int64)(a1 + 1), (__int64)(v10 + 2), a3);
    if ( sub_180068010((__int64)a1) )
    {
      sub_1800D10A0(a1);
      v12 = *(_OWORD *)sub_18005DD38(a1, &v12, (__int64)(v10 + 2), v9);
    }
    v14 = 0LL;
    *(_QWORD *)a2 = sub_180040254(a1, v9, v12, v10);
    *(_BYTE *)(a2 + 8) = 1;
    sub_1800CFE24(&v13);
  }
  return a2;
}
