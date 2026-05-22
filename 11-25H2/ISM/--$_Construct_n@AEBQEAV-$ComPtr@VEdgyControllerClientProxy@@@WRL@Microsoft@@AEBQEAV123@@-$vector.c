/*
 * XREFs of ??$_Construct_n@AEBQEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@AEBQEAV123@@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@AEAAX_KAEBQEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@1@Z @ 0x1801A1700
 * Callers:
 *     ??0Edge@@QEAA@AEBV0@@Z @ 0x1801A1E78 (--0Edge@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180017AC0 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180154528 (-InternalAddRef@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@0@@Z @ 0x1801A05D8 (--$_Destroy_range@V-$allocator@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@.c)
 *     ??1?$_Tidy_guard@V?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAA@XZ @ 0x1801A1F1C (--1-$_Tidy_guard@V-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::_Construct_n<Microsoft::WRL::ComPtr<EdgyControllerClientProxy> * const &,Microsoft::WRL::ComPtr<EdgyControllerClientProxy> * const &>(
        __int64 **a1,
        unsigned __int64 a2,
        __int64 **a3,
        __int64 **a4)
{
  size_t size_of; // rax
  __int64 *v9; // rax
  __int64 *v10; // rbx
  __int64 *v11; // rbp
  __int64 *i; // rdi
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    size_of = std::_Get_size_of_n<8>(a2);
    v9 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *a1 = v9;
    v10 = v9;
    a1[1] = v9;
    a1[2] = &v9[a2];
    v11 = *a4;
    for ( i = *a3; i != v11; ++i )
    {
      *v10 = *i;
      Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalAddRef(v10++);
    }
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>>(v10, v10);
    v13 = 0LL;
    a1[1] = v10;
    std::_Tidy_guard<std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>>::~_Tidy_guard<std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>>(&v13);
  }
}
