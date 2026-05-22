/*
 * XREFs of ??$_Emplace_reallocate@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@AEAAPEAUPointData3D@@QEAU2@AEBU2@@Z @ 0x1800BB798
 * Callers:
 *     ??$_Emplace_one_at_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@AEAAAEAUPointData3D@@AEBU2@@Z @ 0x1800BB6F4 (--$_Emplace_one_at_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009AC3C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

char *__fastcall std::vector<PointData3D>::_Emplace_reallocate<PointData3D const &>(__int64 a1, _BYTE *a2, _OWORD *a3)
{
  __int64 v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // r14
  char *v12; // rax
  char *v13; // rdi
  char *v14; // r12
  _OWORD *v15; // rsi
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  char *v18; // rcx
  size_t v19; // r8
  unsigned __int64 v20; // rax
  char *result; // rax
  __int64 v22; // [rsp+50h] [rbp+8h]
  char *v23; // [rsp+58h] [rbp+10h]

  v6 = (__int64)&a2[-*(_QWORD *)a1] / 184;
  v7 = 0xD37A6F4DE9BD37A7uLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  if ( v7 == 0x1642C8590B21642LL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = 0xD37A6F4DE9BD37A7uLL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3);
  if ( v9 <= 0x1642C8590B21642LL - (v9 >> 1) )
  {
    v20 = (v9 >> 1) + v9;
    v10 = v8;
    if ( v20 >= v8 )
      v10 = v20;
    v22 = v10;
    if ( v10 > 0x1642C8590B21642LL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v10 = 0x1642C8590B21642LL;
    v22 = 0x1642C8590B21642LL;
  }
  v11 = 184 * v10;
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(184 * v10);
  v13 = v12;
  v23 = v12;
  try
  {
    v14 = &v12[184 * v6];
    *(_OWORD *)v14 = *a3;
    *((_OWORD *)v14 + 1) = a3[1];
    *((_OWORD *)v14 + 2) = a3[2];
    *((_OWORD *)v14 + 3) = a3[3];
    *((_OWORD *)v14 + 4) = a3[4];
    *((_OWORD *)v14 + 5) = a3[5];
    *((_OWORD *)v14 + 6) = a3[6];
    *((_OWORD *)v14 + 7) = a3[7];
    v15 = a3 + 8;
    *((_OWORD *)v14 + 8) = *v15;
    *((_OWORD *)v14 + 9) = v15[1];
    *((_OWORD *)v14 + 10) = v15[2];
    *((_QWORD *)v14 + 22) = *((_QWORD *)v15 + 6);
    v16 = *(_BYTE **)(a1 + 8);
    v17 = *(_BYTE **)a1;
    v18 = v12;
    if ( a2 == v16 )
    {
      v19 = v16 - v17;
    }
    else
    {
      memmove_0(v12, v17, (size_t)&a2[-*(_QWORD *)a1]);
      v18 = v14 + 184;
      v19 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
      v17 = a2;
    }
    memmove_0(v18, v17, v19);
    if ( *(_QWORD *)a1 )
      std::_Deallocate<16,0>(
        *(char **)a1,
        (const struct std::nothrow_t *)(8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3)));
    *(_QWORD *)a1 = v13;
    *(_QWORD *)(a1 + 8) = &v13[184 * v8];
    *(_QWORD *)(a1 + 16) = &v13[v11];
    result = v14;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v23, (const struct std::nothrow_t *)(184 * v22));
    throw;
  }
  return result;
}
