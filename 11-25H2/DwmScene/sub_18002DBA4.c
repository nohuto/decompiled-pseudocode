/*
 * XREFs of sub_18002DBA4 @ 0x18002DBA4
 * Callers:
 *     sub_180030FDC @ 0x180030FDC (sub_180030FDC.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_18001CC04 @ 0x18001CC04 (sub_18001CC04.c)
 *     sub_180023A5C @ 0x180023A5C (sub_180023A5C.c)
 *     sub_180026328 @ 0x180026328 (sub_180026328.c)
 *     sub_1800264E4 @ 0x1800264E4 (sub_1800264E4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002DBA4(__int64 *a1, __int64 a2, _DWORD *a3)
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

  sub_180023A5C(a1, &v12, a3);
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
