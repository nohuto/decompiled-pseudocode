/*
 * XREFs of sub_18007ADF4 @ 0x18007ADF4
 * Callers:
 *     sub_18007B39C @ 0x18007B39C (sub_18007B39C.c)
 *     sub_18007B6F0 @ 0x18007B6F0 (sub_18007B6F0.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_18001CC04 @ 0x18001CC04 (sub_18001CC04.c)
 *     sub_18002752C @ 0x18002752C (sub_18002752C.c)
 *     sub_1800277C0 @ 0x1800277C0 (sub_1800277C0.c)
 *     sub_18007AF58 @ 0x18007AF58 (sub_18007AF58.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007ADF4(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  __int64 *v5; // r14
  __int64 *v6; // rax
  __int64 *v7; // rdx
  unsigned int v8; // ecx
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h]
  unsigned int *v16; // [rsp+80h] [rbp+20h] BYREF

  v5 = (__int64 *)*a1;
  v6 = *(__int64 **)(*a1 + 8LL);
  v15 = (unsigned __int64)v6;
  v7 = v5;
  if ( !*((_BYTE *)v6 + 25) )
  {
    v8 = *a3;
    do
    {
      *(_QWORD *)&v15 = v6;
      if ( *((_DWORD *)v6 + 7) >= v8 )
      {
        DWORD2(v15) = 1;
        v7 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        DWORD2(v15) = 0;
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
  }
  if ( *((_BYTE *)v7 + 25) || *a3 < *((_DWORD *)v7 + 7) )
  {
    if ( a1[1] == 0x666666666666666LL )
      sub_18001CC04();
    v16 = a3;
    *(_QWORD *)&v14 = a1;
    v9 = sub_18002752C(1uLL);
    v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(v9);
    sub_18007AF58(v11, v10 + 28, v12, &v16);
    *(_QWORD *)v10 = v5;
    *(_QWORD *)(v10 + 8) = v5;
    *(_QWORD *)(v10 + 16) = v5;
    *(_WORD *)(v10 + 24) = 0;
    *((_QWORD *)&v14 + 1) = 0LL;
    sub_1800277C0((__int64)&v14);
    v14 = v15;
    *(_QWORD *)a2 = sub_18001CA04((__int64)a1, (__int64)&v14, v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v7;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
