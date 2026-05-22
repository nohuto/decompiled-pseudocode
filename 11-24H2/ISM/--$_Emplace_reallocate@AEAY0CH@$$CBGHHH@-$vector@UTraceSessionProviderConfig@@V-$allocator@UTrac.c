/*
 * XREFs of ??$_Emplace_reallocate@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@AEAAPEAUTraceSessionProviderConfig@@QEAU2@AEAY0CH@$$CBG$$QEAH22@Z @ 0x1800D47E0
 * Callers:
 *     ??$emplace_back@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAA?A_TAEAY0CH@$$CBG$$QEAH11@Z @ 0x1800D4D30 (--$emplace_back@AEAY0CH@$$CBGHHH@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessio.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18006E668 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$construct@UTraceSessionProviderConfig@@AEAY0CH@$$CBGHHH@?$_Default_allocator_traits@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@SAXAEAV?$allocator@UTraceSessionProviderConfig@@@1@QEAUTraceSessionProviderConfig@@AEAY0CH@$$CBG$$QEAH33@Z @ 0x1800D4CD4 (--$construct@UTraceSessionProviderConfig@@AEAY0CH@$$CBGHHH@-$_Default_allocator_traits@V-$alloca.c)
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 */

char *__fastcall std::vector<TraceSessionProviderConfig>::_Emplace_reallocate<unsigned short const (&)[39],int,int,int>(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // r15
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  size_t size_of; // rax
  char *v16; // rax
  char *v17; // rsi
  char *v18; // r15
  _BYTE *v19; // r8
  _BYTE *v20; // rdx
  void *v21; // rcx
  size_t v22; // r8
  char *result; // rax
  char *v24; // [rsp+78h] [rbp+10h]

  v9 = (__int64)&a2[-*(_QWORD *)a1] / 40;
  v10 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v11 = 0x666666666666666LL;
  if ( v10 == 0x666666666666666LL )
    std::_Xlength_error("vector too long");
  v12 = v10 + 1;
  v13 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3);
  v14 = v13 >> 1;
  if ( v13 <= 0x666666666666666LL - (v13 >> 1) )
  {
    v11 = v14 + v13;
    if ( v14 + v13 < v12 )
      v11 = v12;
  }
  size_of = std::_Get_size_of_n<40>(v11);
  v16 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v17 = v16;
  v24 = v16;
  try
  {
    v18 = &v16[40 * v9];
    std::_Default_allocator_traits<std::allocator<TraceSessionProviderConfig>>::construct<TraceSessionProviderConfig,unsigned short const (&)[39],int,int,int>(
      a5,
      v18,
      a3,
      a4,
      a5,
      a6);
    v19 = *(_BYTE **)(a1 + 8);
    v20 = *(_BYTE **)a1;
    v21 = v17;
    if ( a2 == v19 )
    {
      v22 = v19 - v20;
    }
    else
    {
      memmove_0(v17, v20, (size_t)&a2[-*(_QWORD *)a1]);
      v21 = v18 + 40;
      v22 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
      v20 = a2;
    }
    memmove_0(v21, v20, v22);
    if ( *(_QWORD *)a1 )
      std::_Deallocate<16,0>(
        *(char **)a1,
        (const struct std::nothrow_t *)(8 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3)));
    *(_QWORD *)a1 = v17;
    *(_QWORD *)(a1 + 8) = &v17[40 * v12];
    *(_QWORD *)(a1 + 16) = &v17[40 * v11];
    result = v18;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v24, (const struct std::nothrow_t *)(40 * v11));
    throw;
  }
  return result;
}
