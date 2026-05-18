/*
 * XREFs of sub_1800502A0 @ 0x1800502A0
 * Callers:
 *     sub_1800507FC @ 0x1800507FC (sub_1800507FC.c)
 *     sub_180050AB0 @ 0x180050AB0 (sub_180050AB0.c)
 *     sub_1800519DC @ 0x1800519DC (sub_1800519DC.c)
 *     sub_180055BB0 @ 0x180055BB0 (sub_180055BB0.c)
 *     sub_180068B9C @ 0x180068B9C (sub_180068B9C.c)
 *     sub_180069470 @ 0x180069470 (sub_180069470.c)
 *     sub_18007BA64 @ 0x18007BA64 (sub_18007BA64.c)
 *     sub_18007D9F4 @ 0x18007D9F4 (sub_18007D9F4.c)
 *     sub_18007EEA0 @ 0x18007EEA0 (sub_18007EEA0.c)
 *     sub_18007F5DC @ 0x18007F5DC (sub_18007F5DC.c)
 *     sub_180081150 @ 0x180081150 (sub_180081150.c)
 *     sub_1800814EC @ 0x1800814EC (sub_1800814EC.c)
 *     sub_1800821A4 @ 0x1800821A4 (sub_1800821A4.c)
 *     sub_1800CB3D0 @ 0x1800CB3D0 (sub_1800CB3D0.c)
 *     sub_1800CBAD4 @ 0x1800CBAD4 (sub_1800CBAD4.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18001CB64 @ 0x18001CB64 (sub_18001CB64.c)
 *     sub_18001CD64 @ 0x18001CD64 (sub_18001CD64.c)
 *     sub_180026488 @ 0x180026488 (sub_180026488.c)
 *     sub_180026644 @ 0x180026644 (sub_180026644.c)
 *     sub_180040B74 @ 0x180040B74 (sub_180040B74.c)
 */

__int64 __fastcall sub_1800502A0(__int64 *a1, __int64 a2, _DWORD *a3)
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

  sub_180040B74(a1, &v12, a3);
  if ( *(_BYTE *)(v13 + 25) || *v5 < *(_DWORD *)(v13 + 32) )
  {
    if ( a1[1] == 0x492492492492492LL )
      sub_18001CD64();
    v14 = v5;
    v6 = *a1;
    *(_QWORD *)&v11 = a1;
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
    sub_180026488(v8, v7 + 32, v9, &v14);
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)(v7 + 16) = v6;
    *(_WORD *)(v7 + 24) = 0;
    *((_QWORD *)&v11 + 1) = 0LL;
    sub_180026644((__int64)&v11);
    v11 = v12;
    *(_QWORD *)a2 = sub_18001CB64((__int64)a1, (__int64)&v11, v7);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
