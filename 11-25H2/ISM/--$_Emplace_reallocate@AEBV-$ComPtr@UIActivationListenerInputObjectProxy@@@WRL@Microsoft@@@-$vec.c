/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180025634
 * Callers:
 *     ?SetActiveWindowId@ActivationListenerWindowIdAdapter@@SAX_K@Z @ 0x1800253DC (-SetActiveWindowId@ActivationListenerWindowIdAdapter@@SAX_K@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@0@@Z @ 0x180015DA0 (--$_Destroy_range@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180017AC0 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy> const &>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  char *v12; // rsi
  __int64 *v13; // r13
  __int64 *v14; // rdi
  __int64 v15; // rcx
  __int64 *v16; // r8
  __int64 *v17; // rdx
  __int64 *v18; // rcx
  __int64 *v19; // rdx
  __int64 *v21; // rcx
  __int64 *v22; // rdx
  __int64 v23; // [rsp+20h] [rbp-58h]
  __int64 *v24; // [rsp+80h] [rbp+8h]
  __int64 v25; // [rsp+98h] [rbp+20h]

  v6 = ((__int64)a2 - *(_QWORD *)a1) >> 3;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v23 = v7 + 1;
  v9 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v8 = v10 + v9;
    if ( v10 + v9 < v7 + 1 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v8);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v25 = 8 * v6;
  v13 = (__int64 *)&v12[8 * v6];
  v14 = v13 + 1;
  try
  {
    v15 = *a3;
    *v13 = *a3;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v24 = v13;
    v16 = *(__int64 **)(a1 + 8);
    v17 = *(__int64 **)a1;
    v18 = (__int64 *)v12;
    if ( a2 == v16 )
    {
      while ( v17 != v16 )
      {
        *v18 = 0LL;
        if ( v18 != v17 )
        {
          *v18 = *v17;
          *v17 = 0LL;
        }
        ++v18;
        ++v17;
      }
      v19 = v18;
    }
    else
    {
      while ( v17 != a2 )
      {
        *v18 = 0LL;
        if ( v18 != v17 )
        {
          *v18 = *v17;
          *v17 = 0LL;
        }
        ++v18;
        ++v17;
      }
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(v18, v18);
      v24 = (__int64 *)v12;
      v21 = *(__int64 **)(a1 + 8);
      if ( a2 != v21 )
      {
        v22 = (__int64 *)((char *)a2 + (char *)&v13[v25 / 0xFFFFFFFFFFFFFFF8uLL] - v12);
        do
        {
          *v14 = 0LL;
          if ( v14 != v22 )
          {
            *v14 = *v22;
            *v22 = 0LL;
          }
          ++v14;
          ++v22;
        }
        while ( v22 != v21 );
      }
      v19 = v14;
      v18 = v14;
    }
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(v18, v19);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(v24, v13 + 1);
    std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)(8 * v8));
    throw;
  }
  if ( *(_QWORD *)a1 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(*(__int64 **)a1, *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(
      *(char **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  *(_QWORD *)a1 = v12;
  *(_QWORD *)(a1 + 8) = &v12[8 * v23];
  *(_QWORD *)(a1 + 16) = &v12[8 * v8];
  return v13;
}
