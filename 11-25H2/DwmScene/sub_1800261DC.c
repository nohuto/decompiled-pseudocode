/*
 * XREFs of sub_1800261DC @ 0x1800261DC
 * Callers:
 *     sub_180026710 @ 0x180026710 (sub_180026710.c)
 *     sub_180026B60 @ 0x180026B60 (sub_180026B60.c)
 *     sub_180045020 @ 0x180045020 (sub_180045020.c)
 *     sub_1800C300C @ 0x1800C300C (sub_1800C300C.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_18001CC04 @ 0x18001CC04 (sub_18001CC04.c)
 *     sub_180026328 @ 0x180026328 (sub_180026328.c)
 *     sub_1800264E4 @ 0x1800264E4 (sub_1800264E4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800261DC(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  __int64 *v5; // r14
  __int64 *v6; // rax
  __int64 *v7; // rdx
  unsigned int v8; // ecx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h]
  unsigned int *v15; // [rsp+80h] [rbp+20h] BYREF

  v5 = (__int64 *)*a1;
  v6 = *(__int64 **)(*a1 + 8LL);
  v14 = (unsigned __int64)v6;
  v7 = v5;
  if ( !*((_BYTE *)v6 + 25) )
  {
    v8 = *a3;
    do
    {
      *(_QWORD *)&v14 = v6;
      if ( *((_DWORD *)v6 + 8) >= v8 )
      {
        DWORD2(v14) = 1;
        v7 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        DWORD2(v14) = 0;
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
  }
  if ( *((_BYTE *)v7 + 25) || *a3 < *((_DWORD *)v7 + 8) )
  {
    if ( a1[1] == 0x492492492492492LL )
      sub_18001CC04();
    v15 = a3;
    *(_QWORD *)&v13 = a1;
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
    sub_180026328(v10, v9 + 32, v11, &v15);
    *(_QWORD *)v9 = v5;
    *(_QWORD *)(v9 + 8) = v5;
    *(_QWORD *)(v9 + 16) = v5;
    *(_WORD *)(v9 + 24) = 0;
    *((_QWORD *)&v13 + 1) = 0LL;
    sub_1800264E4(&v13);
    v13 = v14;
    *(_QWORD *)a2 = sub_18001CA04((__int64)a1, (__int64)&v13, v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
