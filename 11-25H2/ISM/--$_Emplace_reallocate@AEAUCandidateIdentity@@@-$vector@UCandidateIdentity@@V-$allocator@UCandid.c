/*
 * XREFs of ??$_Emplace_reallocate@AEAUCandidateIdentity@@@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@AEAAPEAUCandidateIdentity@@QEAU2@AEAU2@@Z @ 0x1801A1948
 * Callers:
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x1801A283C (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV-$vector@UCandidateIdentity@@V-$allocator@UCan.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18006E8D8 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UCandidateIdentity@@@std@@@std@@YAXPEAUCandidateIdentity@@QEAU1@AEAV?$allocator@UCandidateIdentity@@@0@@Z @ 0x1801A17C8 (--$_Destroy_range@V-$allocator@UCandidateIdentity@@@std@@@std@@YAXPEAUCandidateIdentity@@QEAU1@A.c)
 *     ??$_Uninitialized_move@PEAUCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@YAPEAUCandidateIdentity@@QEAU1@0PEAU1@AEAV?$allocator@UCandidateIdentity@@@0@@Z @ 0x1801A1C70 (--$_Uninitialized_move@PEAUCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@@YAPEA.c)
 *     ??0CandidateIdentity@@QEAA@AEBU0@@Z @ 0x1801A1D88 (--0CandidateIdentity@@QEAA@AEBU0@@Z.c)
 */

char *__fastcall std::vector<CandidateIdentity>::_Emplace_reallocate<CandidateIdentity &>(
        char **a1,
        char *a2,
        const struct CandidateIdentity *a3)
{
  __int64 v5; // r14
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  char *v12; // rsi
  char *v13; // r14
  char *v14; // rdx
  char *v15; // r8
  char *v16; // rcx
  CandidateIdentity *v18; // [rsp+70h] [rbp+8h]

  v5 = (a2 - *a1) / 40;
  v6 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  v7 = 0x666666666666666LL;
  if ( v6 == 0x666666666666666LL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 3);
  v10 = v9 >> 1;
  if ( v9 <= 0x666666666666666LL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v8;
  }
  size_of = std::_Get_size_of_n<40>(v7);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = &v12[40 * v5];
  try
  {
    CandidateIdentity::CandidateIdentity((CandidateIdentity *)v13, a3);
    v18 = (CandidateIdentity *)v13;
    v14 = a1[1];
    v15 = v12;
    v16 = *a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<CandidateIdentity *>(v16, a2, v12);
      v18 = (CandidateIdentity *)v12;
      v15 = v13 + 40;
      v14 = a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<CandidateIdentity *>(v16, v14, v15);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<CandidateIdentity>>(v18, (CandidateIdentity *)(v13 + 40));
    std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)(40 * v7));
    throw;
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<CandidateIdentity>>((CandidateIdentity *)*a1, (CandidateIdentity *)a1[1]);
    std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)(8 * ((a1[2] - *a1) >> 3)));
  }
  *a1 = v12;
  a1[1] = &v12[40 * v8];
  a1[2] = &v12[40 * v7];
  return v13;
}
