/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180017870
 * Callers:
 *     ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUHitTestResult@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x180017E30 (-GetTargetListFromHitTestResult@DWMInputRouter@@AEAA-AV-$vector@V-$ComPtr@UIInputTarget@@@WRL@Mi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@0@@Z @ 0x180014BA0 (--$_Destroy_range@V-$allocator@V-$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180017AC0 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IInputTarget>>(
        __int64 **a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 size_of; // rax
  __int64 v12; // rax
  __int64 *v13; // r14
  _QWORD *v14; // r15
  __int64 *v15; // r8
  __int64 *v16; // rax
  __int64 *i; // rdx
  __int64 *v18; // rsi
  __int64 *k; // r12
  __int64 *v20; // rcx
  const struct std::nothrow_t *v21; // rdx
  _QWORD *result; // rax
  __int64 *j; // rcx
  __int64 *v24; // r8
  __int64 *v25; // rcx
  __int64 *v26; // rdx
  __int64 *v27; // r8
  char *v28; // rcx
  __int64 v29; // [rsp+30h] [rbp-48h]
  __int64 *v31; // [rsp+98h] [rbp+20h]

  v5 = a2 - *a1;
  v6 = a1[1] - *a1;
  v7 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = a1[2] - *a1;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v7);
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = (__int64 *)v12;
  v29 = v12;
  v14 = (_QWORD *)(8 * v5 + v12);
  try
  {
    *v14 = 0LL;
    if ( v14 != a3 )
    {
      *v14 = *a3;
      *a3 = 0LL;
    }
    v31 = (__int64 *)(8 * v5 + v12);
    v15 = a1[1];
    v16 = *a1;
    if ( a2 == v15 )
    {
      for ( i = v13; v16 != v15; ++v16 )
      {
        *i = 0LL;
        if ( i != v16 )
        {
          *i = *v16;
          *v16 = 0LL;
        }
        ++i;
      }
    }
    else
    {
      for ( j = v13; v16 != a2; ++v16 )
      {
        *j = 0LL;
        if ( j != v16 )
        {
          *j = *v16;
          *v16 = 0LL;
        }
        ++j;
      }
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CUIWindow>>>(j, j);
      v31 = v13;
      v24 = a1[1];
      v25 = v14 + 1;
      if ( a2 != v24 )
      {
        v26 = (__int64 *)((char *)a2 + (char *)&v14[-v5] - (char *)v13);
        do
        {
          *v25 = 0LL;
          if ( v25 != v26 )
          {
            *v25 = *v26;
            *v26 = 0LL;
          }
          ++v25;
          ++v26;
        }
        while ( v26 != v24 );
      }
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CUIWindow>>>(v25, v25);
    }
    v18 = *a1;
    if ( *a1 )
    {
      for ( k = a1[1]; v18 != k; ++v18 )
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v18);
      v20 = *a1;
      v21 = (const struct std::nothrow_t *)(((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL);
      if ( (unsigned __int64)v21 >= 0x1000 )
      {
        v21 = (const struct std::nothrow_t *)((char *)v21 + 39);
        v27 = (__int64 *)*(v20 - 1);
        v28 = (char *)((char *)v20 - (char *)v27);
        if ( (unsigned __int64)(v28 - 8) > 0x1F )
        {
          _o__invalid_parameter_noinfo_noreturn(v28, v21);
          __debugbreak();
          JUMPOUT(0x180017AAFLL);
        }
        v20 = v27;
      }
      operator delete(v20, v21);
    }
    *a1 = v13;
    a1[1] = &v13[v8];
    a1[2] = &v13[v7];
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CUIWindow>>>(v31, v14 + 1);
    std::_Deallocate<16,0>(v29, 8 * v7);
    throw;
  }
  return result;
}
