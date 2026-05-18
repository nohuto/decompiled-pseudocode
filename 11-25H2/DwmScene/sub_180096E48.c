/*
 * XREFs of sub_180096E48 @ 0x180096E48
 * Callers:
 *     sub_180097A70 @ 0x180097A70 (sub_180097A70.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001BB4C @ 0x18001BB4C (sub_18001BB4C.c)
 *     sub_18001CA04 @ 0x18001CA04 (sub_18001CA04.c)
 *     sub_18001CC04 @ 0x18001CC04 (sub_18001CC04.c)
 *     sub_180096F7C @ 0x180096F7C (sub_180096F7C.c)
 *     sub_18009729C @ 0x18009729C (sub_18009729C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180096E48(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 *v9; // rbx
  size_t v10; // rdi
  const void *v11; // r12
  const void *v12; // rax
  size_t v13; // r9
  int v14; // eax
  __int128 v16; // [rsp+20h] [rbp-30h] BYREF
  __int128 v17; // [rsp+30h] [rbp-20h]

  v6 = *a1;
  *(_QWORD *)&v16 = a1;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x58uLL);
  *((_QWORD *)&v16 + 1) = v7;
  sub_180096F7C(v8, v7 + 32, a3);
  *(_QWORD *)v7 = v6;
  *(_QWORD *)(v7 + 8) = v6;
  *(_QWORD *)(v7 + 16) = v6;
  *(_WORD *)(v7 + 24) = 0;
  v9 = *(__int64 **)(*a1 + 8LL);
  v17 = (unsigned __int64)v9;
  if ( !*((_BYTE *)v9 + 25) )
  {
    v10 = *(_QWORD *)(v7 + 48);
    v11 = (const void *)sub_1800137F8(v7 + 32);
    do
    {
      *(_QWORD *)&v17 = v9;
      v12 = (const void *)sub_1800137F8((__int64)(v9 + 4));
      LOBYTE(v14) = sub_18001BB4C(v11, v10, v12, v13);
      if ( v14 >= 0 )
      {
        DWORD2(v17) = 0;
        v9 = (__int64 *)v9[2];
      }
      else
      {
        DWORD2(v17) = 1;
        v9 = (__int64 *)*v9;
      }
    }
    while ( !*((_BYTE *)v9 + 25) );
  }
  if ( a1[1] == 0x2E8BA2E8BA2E8BALL )
    sub_18001CC04();
  *((_QWORD *)&v16 + 1) = 0LL;
  sub_18009729C(&v16);
  v16 = v17;
  *(_QWORD *)a2 = sub_18001CA04((__int64)a1, (__int64)&v16, v7);
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
