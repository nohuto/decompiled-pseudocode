/*
 * XREFs of sub_180050140 @ 0x180050140
 * Callers:
 *     sub_18005069C @ 0x18005069C (sub_18005069C.c)
 *     sub_180050950 @ 0x180050950 (sub_180050950.c)
 *     sub_18005187C @ 0x18005187C (sub_18005187C.c)
 *     sub_180055A50 @ 0x180055A50 (sub_180055A50.c)
 *     sub_180068A3C @ 0x180068A3C (sub_180068A3C.c)
 *     sub_180069310 @ 0x180069310 (sub_180069310.c)
 *     sub_18007B904 @ 0x18007B904 (sub_18007B904.c)
 *     sub_18007D894 @ 0x18007D894 (sub_18007D894.c)
 *     sub_18007ED40 @ 0x18007ED40 (sub_18007ED40.c)
 *     sub_18007F47C @ 0x18007F47C (sub_18007F47C.c)
 *     sub_180080FF0 @ 0x180080FF0 (sub_180080FF0.c)
 *     sub_18008138C @ 0x18008138C (sub_18008138C.c)
 *     sub_180082044 @ 0x180082044 (sub_180082044.c)
 *     sub_1800CB270 @ 0x1800CB270 (sub_1800CB270.c)
 *     sub_1800CB974 @ 0x1800CB974 (sub_1800CB974.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_18001CC04 @ 0x18001CC04 (sub_18001CC04.c)
 *     sub_180026328 @ 0x180026328 (sub_180026328.c)
 *     sub_1800264E4 @ 0x1800264E4 (sub_1800264E4.c)
 *     sub_180040A14 @ 0x180040A14 (sub_180040A14.c)
 */

__int64 __fastcall sub_180050140(__int64 *a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]
  _DWORD *v14; // [rsp+88h] [rbp+20h] BYREF

  sub_180040A14(a1, &v12, a3);
  if ( *(_BYTE *)(v13 + 25) || *v5 < *(_DWORD *)(v13 + 32) )
  {
    if ( a1[1] == 0x492492492492492LL )
      sub_18001CC04();
    v14 = v5;
    v6 = *a1;
    *(_QWORD *)&v11 = a1;
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
    sub_180026328(v8, v7 + 32, v9, &v14);
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)(v7 + 16) = v6;
    *(_WORD *)(v7 + 24) = 0;
    *((_QWORD *)&v11 + 1) = 0LL;
    sub_1800264E4((__int64)&v11);
    v11 = v12;
    *(_QWORD *)a2 = sub_18001CA04((__int64)a1, (__int64)&v11, v7);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
