/*
 * XREFs of sub_180072FF4 @ 0x180072FF4
 * Callers:
 *     sub_1800734FC @ 0x1800734FC (sub_1800734FC.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800108C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     sub_18001CC04 @ 0x18001CC04 (sub_18001CC04.c)
 *     sub_1800732FC @ 0x1800732FC (sub_1800732FC.c)
 *     sub_180073400 @ 0x180073400 (sub_180073400.c)
 *     sub_1800737F8 @ 0x1800737F8 (sub_1800737F8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180072FF4(__int64 a1, __int64 a2, int *a3, __int64 a4)
{
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // edx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int128 v14; // [rsp+20h] [rbp-30h] BYREF
  __int128 v15; // [rsp+30h] [rbp-20h]

  v7 = qword_1801C8A38;
  v8 = *(_QWORD *)(qword_1801C8A38 + 8);
  v15 = (unsigned __int64)v8;
  v9 = qword_1801C8A38;
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
    if ( qword_1801C8A40 == 0x492492492492492LL )
      sub_18001CC04();
    v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
    sub_1800732FC(v12, v11 + 32, a3, a4, &qword_1801C8A38, 0LL);
    *(_QWORD *)v11 = v7;
    *(_QWORD *)(v11 + 8) = v7;
    *(_QWORD *)(v11 + 16) = v7;
    *(_WORD *)(v11 + 24) = 0;
    *((_QWORD *)&v14 + 1) = 0LL;
    sub_180073400(&v14);
    v14 = v15;
    *(_QWORD *)a2 = sub_1800737F8(&qword_1801C8A38, &v14, v11);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
