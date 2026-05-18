/*
 * XREFs of sub_180023ADC @ 0x180023ADC
 * Callers:
 *     sub_180025170 @ 0x180025170 (sub_180025170.c)
 *     sub_1800259A0 @ 0x1800259A0 (sub_1800259A0.c)
 * Callees:
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_180023A5C @ 0x180023A5C (sub_180023A5C.c)
 *     sub_180023C24 @ 0x180023C24 (sub_180023C24.c)
 *     sub_180023E2C @ 0x180023E2C (sub_180023E2C.c)
 *     sub_1800244A8 @ 0x1800244A8 (sub_1800244A8.c)
 *     sub_180025DD8 @ 0x180025DD8 (sub_180025DD8.c)
 */

__int64 __fastcall sub_180023ADC(__int64 *a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  _BYTE v12[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]
  _DWORD *v16; // [rsp+88h] [rbp+28h] BYREF

  sub_180023A5C(a1, &v14, a3);
  if ( *(_BYTE *)(v15 + 25) || *v6 < *(_DWORD *)(v15 + 32) )
  {
    sub_180025DD8(a1);
    v16 = a3;
    v7 = *a1;
    sub_180023E2C(v12, a1);
    sub_180023C24(v8, v13 + 32, v9, &v16);
    *(_QWORD *)v13 = v7;
    *(_QWORD *)(v13 + 8) = v7;
    *(_QWORD *)(v13 + 16) = v7;
    *(_BYTE *)(v13 + 24) = 0;
    *(_BYTE *)(v13 + 25) = 0;
    v10 = v13;
    v13 = 0LL;
    sub_1800244A8(v12);
    *(_QWORD *)a2 = sub_18001CA04((__int64)a1, (__int64)&v14, v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v15;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
