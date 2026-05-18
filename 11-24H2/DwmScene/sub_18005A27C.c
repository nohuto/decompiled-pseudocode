/*
 * XREFs of sub_18005A27C @ 0x18005A27C
 * Callers:
 *     sub_18005B2DC @ 0x18005B2DC (sub_18005B2DC.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_180010DC0 @ 0x180010DC0 (sub_180010DC0.c)
 *     sub_18001CB64 @ 0x18001CB64 (sub_18001CB64.c)
 *     sub_18001CD64 @ 0x18001CD64 (sub_18001CD64.c)
 *     sub_18002D710 @ 0x18002D710 (sub_18002D710.c)
 *     sub_18005ADE4 @ 0x18005ADE4 (sub_18005ADE4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005A27C(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 *v6; // r14
  __int64 *v7; // rax
  __int64 *v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int128 v14; // [rsp+20h] [rbp-30h] BYREF
  __int128 v15; // [rsp+30h] [rbp-20h]

  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8LL);
  v15 = (unsigned __int64)v7;
  v8 = v6;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v9 = a3[1];
    do
    {
      *(_QWORD *)&v15 = v7;
      if ( v7[5] >= v9 )
      {
        DWORD2(v15) = 1;
        v8 = v7;
        v7 = (__int64 *)*v7;
      }
      else
      {
        DWORD2(v15) = 0;
        v7 = (__int64 *)v7[2];
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( *((_BYTE *)v8 + 25) || a3[1] < (unsigned __int64)v8[5] )
  {
    if ( a1[1] == 0x555555555555555LL )
      sub_18001CD64();
    *(_QWORD *)&v14 = a1;
    v10 = sub_18002D710(1uLL);
    v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
    sub_180010DC0(v12, (_QWORD *)(v11 + 32), a3);
    *(_QWORD *)v11 = v6;
    *(_QWORD *)(v11 + 8) = v6;
    *(_QWORD *)(v11 + 16) = v6;
    *(_WORD *)(v11 + 24) = 0;
    *((_QWORD *)&v14 + 1) = 0LL;
    sub_18005ADE4(&v14);
    v14 = v15;
    *(_QWORD *)a2 = sub_18001CB64((__int64)a1, (__int64)&v14, v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
