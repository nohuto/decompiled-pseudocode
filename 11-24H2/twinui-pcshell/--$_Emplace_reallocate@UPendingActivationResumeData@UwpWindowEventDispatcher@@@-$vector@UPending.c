/*
 * XREFs of ??$_Emplace_reallocate@UPendingActivationResumeData@UwpWindowEventDispatcher@@@?$vector@UPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@AEAAPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU23@$$QEAU23@@Z @ 0x18014A45C
 * Callers:
 *     ?AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18009B0F4 (-AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@YAXPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU12@AEAV?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@0@@Z @ 0x18009B8B4 (--$_Destroy_range@V-$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std.c)
 *     ??$_Uninitialized_move@PEAUPendingActivationResumeData@UwpWindowEventDispatcher@@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@YAPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU12@0PEAU12@AEAV?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@0@@Z @ 0x18014A5B8 (--$_Uninitialized_move@PEAUPendingActivationResumeData@UwpWindowEventDispatcher@@V-$allocator@UP.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x18014AECC (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 */

char *__fastcall std::vector<UwpWindowEventDispatcher::PendingActivationResumeData>::_Emplace_reallocate<UwpWindowEventDispatcher::PendingActivationResumeData>(
        char **a1,
        char *a2,
        __int64 *a3)
{
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // rax
  char *v14; // r14
  char *v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rax
  char *v18; // rdx
  char *v19; // r8
  char *v20; // rcx
  char *result; // rax
  char *v22; // [rsp+20h] [rbp-48h]
  char *v23; // [rsp+70h] [rbp+8h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 5;
  v8 = 0x7FFFFFFFFFFFFFFLL;
  if ( v7 == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 5;
  v11 = v10 >> 1;
  if ( v10 <= 0x7FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v9;
  }
  size_of = std::_Get_size_of_n<32>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v22 = v13;
  v15 = &v13[v6 & 0xFFFFFFFFFFFFFFE0uLL];
  try
  {
    v16 = *a3;
    *a3 = 0LL;
    *(_QWORD *)v15 = v16;
    v17 = a3[1];
    a3[1] = 0LL;
    *((_QWORD *)v15 + 1) = v17;
    *((_QWORD *)v15 + 2) = a3[2];
    *((_DWORD *)v15 + 6) = *((_DWORD *)a3 + 6);
    v23 = v15;
    v18 = a1[1];
    v19 = v14;
    v20 = *a1;
    if ( a2 != v18 )
    {
      std::_Uninitialized_move<UwpWindowEventDispatcher::PendingActivationResumeData *>(v20, a2, v14);
      v23 = v14;
      v19 = v15 + 32;
      v18 = a1[1];
      v20 = a2;
    }
    std::_Uninitialized_move<UwpWindowEventDispatcher::PendingActivationResumeData *>(v20, v18, v19);
    if ( *a1 )
    {
      std::_Destroy_range<std::allocator<UwpWindowEventDispatcher::PendingActivationResumeData>>(*a1, a1[1]);
      std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)((a1[2] - *a1) & 0xFFFFFFFFFFFFFFE0uLL));
    }
    *a1 = v14;
    a1[1] = &v14[32 * v9];
    a1[2] = &v14[32 * v8];
    result = v15;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<UwpWindowEventDispatcher::PendingActivationResumeData>>(v23, v15 + 32);
    std::_Deallocate<16,0>(v22, (const struct std::nothrow_t *)(32 * v8));
    throw;
  }
  return result;
}
