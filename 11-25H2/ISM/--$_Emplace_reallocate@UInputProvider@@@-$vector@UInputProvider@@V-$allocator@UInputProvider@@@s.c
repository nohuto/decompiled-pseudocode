/*
 * XREFs of ??$_Emplace_reallocate@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@AEAAPEAUInputProvider@@QEAU2@$$QEAU2@@Z @ 0x1800CBF3C
 * Callers:
 *     ??$emplace_back@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAA?A_T$$QEAUInputProvider@@@Z @ 0x180097988 (--$emplace_back@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@st.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180054F60 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@QEAU1@AEAV?$allocator@UInputProvider@@@0@@Z @ 0x1800A2BF4 (--$_Destroy_range@V-$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@QEAU1@AEAV-$all.c)
 *     ??$_Uninitialized_move@PEAUInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@YAPEAUInputProvider@@QEAU1@0PEAU1@AEAV?$allocator@UInputProvider@@@0@@Z @ 0x1800CC0C8 (--$_Uninitialized_move@PEAUInputProvider@@V-$allocator@UInputProvider@@@std@@@std@@YAPEAUInputPr.c)
 *     ??$construct@UInputProvider@@U1@@?$_Default_allocator_traits@V?$allocator@UInputProvider@@@std@@@std@@SAXAEAV?$allocator@UInputProvider@@@1@QEAUInputProvider@@$$QEAU3@@Z @ 0x1800CC10C (--$construct@UInputProvider@@U1@@-$_Default_allocator_traits@V-$allocator@UInputProvider@@@std@@.c)
 */

char *__fastcall std::vector<InputProvider>::_Emplace_reallocate<InputProvider>(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r15
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  char *v12; // rax
  char *v13; // rsi
  __int64 v14; // rcx
  char *v15; // r15
  __int64 v16; // rdx
  char *v17; // r8
  __int64 v18; // rcx
  char *result; // rax
  char *v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+70h] [rbp+8h]

  v5 = (a2 - *a1) / 24;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3);
  v7 = 0xAAAAAAAAAAAAAAALL;
  if ( v6 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 3);
  v10 = v9 >> 1;
  if ( v9 <= 0xAAAAAAAAAAAAAAALL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v8;
  }
  size_of = std::_Get_size_of_n<24>(v7);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v20 = v12;
  v14 = 3 * v5;
  v15 = &v12[24 * v5];
  try
  {
    std::_Default_allocator_traits<std::allocator<InputProvider>>::construct<InputProvider,InputProvider>(v14, v15, a3);
    v21 = (__int64)v15;
    v16 = a1[1];
    v17 = v13;
    v18 = *a1;
    if ( a2 != v16 )
    {
      std::_Uninitialized_move<InputProvider *>(v18, a2, v13);
      v21 = (__int64)v13;
      v17 = v15 + 24;
      v16 = a1[1];
      v18 = a2;
    }
    std::_Uninitialized_move<InputProvider *>(v18, v16, v17);
    if ( *a1 )
    {
      std::_Destroy_range<std::allocator<InputProvider>>(*a1, a1[1]);
      std::_Deallocate<16,0>((char *)*a1, (const struct std::nothrow_t *)(8 * ((a1[2] - *a1) >> 3)));
    }
    *a1 = (__int64)v13;
    a1[1] = (__int64)&v13[24 * v8];
    a1[2] = (__int64)&v13[24 * v7];
    result = v15;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<InputProvider>>(v21, (__int64)(v15 + 24));
    std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)(24 * v7));
    throw;
  }
  return result;
}
