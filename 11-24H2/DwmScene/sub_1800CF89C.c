/*
 * XREFs of sub_1800CF89C @ 0x1800CF89C
 * Callers:
 *     sub_1800D010C @ 0x1800D010C (sub_1800D010C.c)
 * Callees:
 *     sub_18001CB64 @ 0x18001CB64 (sub_18001CB64.c)
 *     sub_18003CF9C @ 0x18003CF9C (sub_18003CF9C.c)
 *     sub_18003D0F4 @ 0x18003D0F4 (sub_18003D0F4.c)
 *     sub_1800CFA60 @ 0x1800CFA60 (sub_1800CFA60.c)
 *     sub_1800CFBE4 @ 0x1800CFBE4 (sub_1800CFBE4.c)
 *     sub_1800CFEF8 @ 0x1800CFEF8 (sub_1800CFEF8.c)
 *     sub_1800D0DAC @ 0x1800D0DAC (sub_1800D0DAC.c)
 */

__int64 __fastcall sub_1800CF89C(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  _BYTE v13[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+98h] [rbp+38h] BYREF

  sub_18003CF9C((__int64)a1, (__int64 **)&v15, a3);
  v6 = v16;
  if ( sub_18003D0F4(v7, v16) )
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_1800D0DAC(a1);
    v17 = a3;
    v8 = *a1;
    sub_1800CFBE4(v13, a1);
    sub_1800CFA60(v9, v14 + 32, v10, &v17);
    *(_QWORD *)v14 = v8;
    *(_QWORD *)(v14 + 8) = v8;
    *(_QWORD *)(v14 + 16) = v8;
    *(_BYTE *)(v14 + 24) = 0;
    *(_BYTE *)(v14 + 25) = 0;
    v11 = v14;
    v14 = 0LL;
    sub_1800CFEF8(v13);
    *(_QWORD *)a2 = sub_18001CB64((__int64)a1, (__int64)&v15, v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
