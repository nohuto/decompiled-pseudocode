/*
 * XREFs of sub_180073154 @ 0x180073154
 * Callers:
 *     sub_18007365C @ 0x18007365C (sub_18007365C.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800109C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18001CD64 @ 0x18001CD64 (sub_18001CD64.c)
 *     sub_18007345C @ 0x18007345C (sub_18007345C.c)
 *     sub_180073560 @ 0x180073560 (sub_180073560.c)
 *     sub_180073958 @ 0x180073958 (sub_180073958.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180073154(__int64 a1, __int64 a2, int *a3, __int64 a4)
{
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int128 v14; // [rsp+20h] [rbp-30h] BYREF
  __int128 v15; // [rsp+30h] [rbp-20h]

  v7 = qword_1801C9A48;
  v8 = *(_QWORD *)(qword_1801C9A48 + 8);
  v15 = (unsigned __int64)v8;
  v9 = qword_1801C9A48;
  if ( !*(_BYTE *)(v8 + 25) )
  {
    v10 = *a3;
    do
    {
      *(_QWORD *)&v15 = v8;
      if ( *(_DWORD *)(v8 + 32) >= v10 )
      {
        DWORD2(v15) = 1;
        v9 = v8;
        v8 = *(_QWORD *)v8;
      }
      else
      {
        DWORD2(v15) = 0;
        v8 = *(_QWORD *)(v8 + 16);
      }
    }
    while ( !*(_BYTE *)(v8 + 25) );
  }
  if ( *(_BYTE *)(v9 + 25) || *a3 < *(_DWORD *)(v9 + 32) )
  {
    if ( qword_1801C9A50 == 0x492492492492492LL )
      sub_18001CD64();
    v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
    sub_18007345C(v12, v11 + 32, a3, a4, &qword_1801C9A48, 0LL);
    *(_QWORD *)v11 = v7;
    *(_QWORD *)(v11 + 8) = v7;
    *(_QWORD *)(v11 + 16) = v7;
    *(_WORD *)(v11 + 24) = 0;
    *((_QWORD *)&v14 + 1) = 0LL;
    sub_180073560(&v14);
    v14 = v15;
    *(_QWORD *)a2 = sub_180073958(&qword_1801C9A48, &v14, v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
