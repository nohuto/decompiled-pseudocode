/*
 * XREFs of sub_18005E324 @ 0x18005E324
 * Callers:
 *     sub_18005F890 @ 0x18005F890 (sub_18005F890.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_18001DEE0 @ 0x18001DEE0 (sub_18001DEE0.c)
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     sub_18002D710 @ 0x18002D710 (sub_18002D710.c)
 *     sub_180040254 @ 0x180040254 (sub_180040254.c)
 *     sub_18005DD38 @ 0x18005DD38 (sub_18005DD38.c)
 *     sub_18005EAFC @ 0x18005EAFC (sub_18005EAFC.c)
 *     sub_180067FDC @ 0x180067FDC (sub_180067FDC.c)
 *     sub_180068010 @ 0x180068010 (sub_180068010.c)
 *     sub_180068420 @ 0x180068420 (sub_180068420.c)
 */

__int64 __fastcall sub_18005E324(_QWORD *a1, __int64 a2, __int64 a3)
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

  v6 = sub_1800131AC(a3);
  v9 = sub_18001E5E0(v8, v6, 2 * v7);
  sub_18005DD38(a1, &v16, a3, v9);
  if ( *((_QWORD *)&v16 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v16 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_180067FDC(a1);
    v14 = a1 + 1;
    v10 = sub_18002D710(1uLL);
    v11 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
    v15 = v11;
    sub_18001DEE0(v12, (__int64)(v11 + 2), a3);
    if ( (unsigned __int8)sub_180068010(a1) )
    {
      sub_180068420(a1);
      v16 = *(_OWORD *)sub_18005DD38(a1, &v16, (__int64)(v11 + 2), v9);
    }
    v15 = 0LL;
    *(_QWORD *)a2 = sub_180040254(a1, v9, v16, v11);
    *(_BYTE *)(a2 + 8) = 1;
    sub_18005EAFC(&v14);
  }
  return a2;
}
