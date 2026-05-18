/*
 * XREFs of sub_180023C3C @ 0x180023C3C
 * Callers:
 *     sub_1800252D0 @ 0x1800252D0 (sub_1800252D0.c)
 *     sub_180025B00 @ 0x180025B00 (sub_180025B00.c)
 * Callees:
 *     sub_18001CB64 @ 0x18001CB64 (sub_18001CB64.c)
 *     sub_180023BBC @ 0x180023BBC (sub_180023BBC.c)
 *     sub_180023D84 @ 0x180023D84 (sub_180023D84.c)
 *     sub_180023F8C @ 0x180023F8C (sub_180023F8C.c)
 *     sub_180024608 @ 0x180024608 (sub_180024608.c)
 *     sub_180025F38 @ 0x180025F38 (sub_180025F38.c)
 */

__int64 __fastcall sub_180023C3C(__int64 *a1, __int64 a2, _DWORD *a3)
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
    sub_180025F38(a1);
    v16 = a3;
    v7 = *a1;
    sub_180023F8C(v12, a1);
    sub_180023D84(v8, v13 + 32, v9, &v16);
    *(_QWORD *)v13 = v7;
    *(_QWORD *)(v13 + 8) = v7;
    *(_QWORD *)(v13 + 16) = v7;
    *(_BYTE *)(v13 + 24) = 0;
    *(_BYTE *)(v13 + 25) = 0;
    v10 = v13;
    v13 = 0LL;
    sub_180024608(v12);
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
