/*
 * XREFs of sub_180054718 @ 0x180054718
 * Callers:
 *     sub_180058AA8 @ 0x180058AA8 (sub_180058AA8.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_18001CC04 @ 0x18001CC04 (sub_18001CC04.c)
 *     sub_1800540EC @ 0x1800540EC (sub_1800540EC.c)
 *     sub_180054974 @ 0x180054974 (sub_180054974.c)
 *     sub_1800550D0 @ 0x1800550D0 (sub_1800550D0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180054718(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  __int64 *v6; // r15
  __int64 *v7; // rbx
  __int64 *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h]
  _DWORD *v15; // [rsp+90h] [rbp+30h] BYREF

  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8LL);
  v14 = (unsigned __int64)v7;
  v8 = v6;
  while ( !*((_BYTE *)v7 + 25) )
  {
    *(_QWORD *)&v14 = v7;
    if ( sub_1800540EC((_DWORD *)v7 + 8, a3) )
    {
      DWORD2(v14) = 0;
      v7 = (__int64 *)v7[2];
    }
    else
    {
      DWORD2(v14) = 1;
      v8 = v7;
      v7 = (__int64 *)*v7;
    }
  }
  if ( *((_BYTE *)v8 + 25) || sub_1800540EC(a3, (_DWORD *)v8 + 8) )
  {
    if ( a1[1] == 0x2E8BA2E8BA2E8BALL )
      sub_18001CC04();
    v15 = a3;
    *(_QWORD *)&v13 = a1;
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x58uLL);
    sub_180054974(v10, v9 + 32, v11, &v15);
    *(_QWORD *)v9 = v6;
    *(_QWORD *)(v9 + 8) = v6;
    *(_QWORD *)(v9 + 16) = v6;
    *(_WORD *)(v9 + 24) = 0;
    *((_QWORD *)&v13 + 1) = 0LL;
    sub_1800550D0(&v13);
    v13 = v14;
    *(_QWORD *)a2 = sub_18001CA04((__int64)a1, (__int64)&v13, v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
