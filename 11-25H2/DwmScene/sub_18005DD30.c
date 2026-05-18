/*
 * XREFs of sub_18005DD30 @ 0x18005DD30
 * Callers:
 *     sub_18005EBD8 @ 0x18005EBD8 (sub_18005EBD8.c)
 * Callees:
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_180023A5C @ 0x180023A5C (sub_180023A5C.c)
 *     sub_180026328 @ 0x180026328 (sub_180026328.c)
 *     sub_1800264E4 @ 0x1800264E4 (sub_1800264E4.c)
 *     sub_18005E5E8 @ 0x18005E5E8 (sub_18005E5E8.c)
 *     sub_180067E54 @ 0x180067E54 (sub_180067E54.c)
 */

__int64 __fastcall sub_18005DD30(__int64 *a1, __int64 a2, _DWORD *a3)
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
    sub_180067E54(a1);
    v16 = a3;
    v7 = *a1;
    sub_18005E5E8(v12, a1);
    sub_180026328(v8, v13 + 32, v9, &v16);
    *(_QWORD *)v13 = v7;
    *(_QWORD *)(v13 + 8) = v7;
    *(_QWORD *)(v13 + 16) = v7;
    *(_BYTE *)(v13 + 24) = 0;
    *(_BYTE *)(v13 + 25) = 0;
    v10 = v13;
    v13 = 0LL;
    sub_1800264E4((__int64)v12);
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
