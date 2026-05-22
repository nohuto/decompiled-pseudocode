/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXAEA_K@Z @ 0x180089EEC
 * Callers:
 *     ?GetInputSiteForEvaluationListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x18001AC50 (-GetInputSiteForEvaluationListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180017AC0 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char *__fastcall std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Reallocate<0>(char **a1, unsigned __int64 *a2)
{
  __int64 v4; // r12
  size_t size_of; // rax
  char *v6; // rax
  char *v7; // rsi
  char *v8; // r8
  char *v9; // rdx
  char *i; // rcx
  unsigned __int64 v11; // r15
  char *v12; // rdi
  char *v13; // r14
  __int64 v14; // rcx
  char *v15; // rcx
  const struct std::nothrow_t *v16; // rdx
  char *v17; // r8
  char *v18; // rcx
  char *result; // rax

  v4 = (a1[1] - *a1) >> 3;
  size_of = std::_Get_size_of_n<8>(*a2);
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v7 = v6;
  try
  {
    v8 = a1[1];
    v9 = v6;
    for ( i = *a1; i != v8; i += 8 )
    {
      *(_QWORD *)v9 = 0LL;
      if ( v9 != i )
      {
        *(_QWORD *)v9 = *(_QWORD *)i;
        *(_QWORD *)i = 0LL;
      }
      v9 += 8;
    }
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(8 * *a2));
    throw;
  }
  v11 = *a2;
  v12 = *a1;
  if ( *a1 )
  {
    v13 = a1[1];
    while ( v12 != v13 )
    {
      v14 = *(_QWORD *)v12;
      if ( *(_QWORD *)v12 )
      {
        *(_QWORD *)v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v12 += 8;
    }
    v15 = *a1;
    v16 = (const struct std::nothrow_t *)((a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v16 >= 0x1000 )
    {
      v16 = (const struct std::nothrow_t *)((char *)v16 + 39);
      v17 = (char *)*((_QWORD *)v15 - 1);
      v18 = (char *)(v15 - v17);
      if ( (unsigned __int64)(v18 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v18, v16);
        __debugbreak();
        JUMPOUT(0x180089FF1LL);
      }
      v15 = v17;
    }
    operator delete(v15, v16);
  }
  *a1 = v7;
  a1[1] = &v7[8 * v4];
  result = &v7[8 * v11];
  a1[2] = result;
  return result;
}
