/*
 * XREFs of ??$_Emplace_reallocate@AEBUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@?$vector@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@V?$allocator@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@std@@@std@@AEAAPEAUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@QEAU23@AEBU23@@Z @ 0x18012CA50
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_d726b1e7ec95932be2432bf4c2269415__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Do_call @ 0x18012DA00 (std--_Func_impl_no_alloc__lambda_d726b1e7ec95932be2432bf4c2269415__void_void___unsigned_long_uns.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0GI@@std@@YA_K_K@Z @ 0x18012CBF4 (--$_Get_size_of_n@$0GI@@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

char *__fastcall std::vector<CProcessResourceAttributionReporter::ProcessResourceUsageRecord>::_Emplace_reallocate<CProcessResourceAttributionReporter::ProcessResourceUsageRecord const &>(
        __int64 a1,
        _BYTE *a2,
        __int64 a3)
{
  __int64 v4; // rdi
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  char *v13; // rsi
  void *v14; // rcx
  char *v15; // rbp
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  size_t v18; // r8
  char *result; // rax

  v4 = 0x276276276276276LL;
  v7 = (__int64)&a2[-*(_QWORD *)a1] / 104;
  v8 = 0x4EC4EC4EC4EC4EC5LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  if ( v8 == 0x276276276276276LL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = 0x4EC4EC4EC4EC4EC5LL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0x276276276276276LL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v8 + 1;
  }
  size_of = std::_Get_size_of_n<104>(v4);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v15 = &v13[104 * v7];
  *(_OWORD *)v15 = *(_OWORD *)a3;
  *((_OWORD *)v15 + 1) = *(_OWORD *)(a3 + 16);
  *((_OWORD *)v15 + 2) = *(_OWORD *)(a3 + 32);
  *((_OWORD *)v15 + 3) = *(_OWORD *)(a3 + 48);
  *((_OWORD *)v15 + 4) = *(_OWORD *)(a3 + 64);
  *((_OWORD *)v15 + 5) = *(_OWORD *)(a3 + 80);
  *((_QWORD *)v15 + 12) = *(_QWORD *)(a3 + 96);
  v16 = *(_BYTE **)(a1 + 8);
  v17 = *(_BYTE **)a1;
  if ( a2 == v16 )
  {
    v18 = v16 - v17;
  }
  else
  {
    memmove_0(v13, v17, (size_t)&a2[-*(_QWORD *)a1]);
    v14 = v15 + 104;
    v18 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
    v17 = a2;
  }
  memmove_0(v14, v17, v18);
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(*(_QWORD **)a1, 8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3));
  *(_QWORD *)a1 = v13;
  result = v15;
  *(_QWORD *)(a1 + 8) = &v13[104 * v9];
  *(_QWORD *)(a1 + 16) = &v13[104 * v4];
  return result;
}
