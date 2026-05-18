/*
 * XREFs of sub_18005DE90 @ 0x18005DE90
 * Callers:
 *     sub_18005ED38 @ 0x18005ED38 (sub_18005ED38.c)
 * Callees:
 *     sub_18001CB64 @ 0x18001CB64 (sub_18001CB64.c)
 *     sub_180023BBC @ 0x180023BBC (sub_180023BBC.c)
 *     sub_180026488 @ 0x180026488 (sub_180026488.c)
 *     sub_180026644 @ 0x180026644 (sub_180026644.c)
 *     sub_18005E748 @ 0x18005E748 (sub_18005E748.c)
 *     sub_180067FB4 @ 0x180067FB4 (sub_180067FB4.c)
 */

__int64 __fastcall sub_18005DE90(__int64 *a1, __int64 a2, _DWORD *a3)
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

  sub_180023BBC(a1, &v14, a3);
  if ( *(_BYTE *)(v15 + 25) || *v6 < *(_DWORD *)(v15 + 32) )
  {
    sub_180067FB4(a1);
    v16 = a3;
    v7 = *a1;
    sub_18005E748(v12, a1);
    sub_180026488(v8, v13 + 32, v9, &v16);
    *(_QWORD *)v13 = v7;
    *(_QWORD *)(v13 + 8) = v7;
    *(_QWORD *)(v13 + 16) = v7;
    *(_BYTE *)(v13 + 24) = 0;
    *(_BYTE *)(v13 + 25) = 0;
    v10 = v13;
    v13 = 0LL;
    sub_180026644((__int64)v12);
    *(_QWORD *)a2 = sub_18001CB64((__int64)a1, (__int64)&v14, v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v15;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
