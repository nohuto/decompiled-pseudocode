/*
 * XREFs of sub_18005E0A0 @ 0x18005E0A0
 * Callers:
 *     sub_18005EBFC @ 0x18005EBFC (sub_18005EBFC.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_18001E480 @ 0x18001E480 (sub_18001E480.c)
 *     sub_180023C44 @ 0x180023C44 (sub_180023C44.c)
 *     sub_18002D5B0 @ 0x18002D5B0 (sub_18002D5B0.c)
 *     sub_1800400F4 @ 0x1800400F4 (sub_1800400F4.c)
 *     sub_18005DBD8 @ 0x18005DBD8 (sub_18005DBD8.c)
 *     sub_18005E99C @ 0x18005E99C (sub_18005E99C.c)
 *     sub_180067E7C @ 0x180067E7C (sub_180067E7C.c)
 *     sub_180067EB0 @ 0x180067EB0 (sub_180067EB0.c)
 *     sub_1800682C0 @ 0x1800682C0 (sub_1800682C0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005E0A0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rbp
  unsigned __int64 v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rcx
  _QWORD *v14; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v15; // [rsp+28h] [rbp-20h]
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF

  v6 = sub_1800130AC(a3);
  v9 = sub_18001E480(v8, v6, 2 * v7);
  sub_18005DBD8(a1, &v16, a3, v9);
  if ( *((_QWORD *)&v16 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v16 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_180067E7C(a1);
    v14 = a1 + 1;
    v10 = sub_18002D5B0(1uLL);
    v11 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
    v15 = v11;
    sub_180023C44(v12, (__int64)(v11 + 2), a3);
    if ( (unsigned __int8)sub_180067EB0(a1) )
    {
      sub_1800682C0(a1);
      v16 = *(_OWORD *)sub_18005DBD8(a1, &v16, (__int64)(v11 + 2), v9);
    }
    v15 = 0LL;
    *(_QWORD *)a2 = sub_1800400F4(a1, v9, v16, v11);
    *(_BYTE *)(a2 + 8) = 1;
    sub_18005E99C(&v14);
  }
  return a2;
}
