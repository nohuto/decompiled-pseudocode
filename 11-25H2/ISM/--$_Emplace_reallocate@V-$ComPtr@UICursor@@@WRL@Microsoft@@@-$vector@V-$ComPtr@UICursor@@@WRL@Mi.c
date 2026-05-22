/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@UICursor@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180062FC0
 * Callers:
 *     ?GetCursors@DWMCursorBroker@@UEAA?AV?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x180062EF0 (-GetCursors@DWMCursorBroker@@UEAA-AV-$vector@V-$ComPtr@UICursor@@@WRL@Microsoft@@V-$allocator@V-.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@0@@Z @ 0x180014BA0 (--$_Destroy_range@V-$allocator@V-$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180017AC0 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@0@@Z @ 0x180061060 (--$_Uninitialized_move@PEAV-$ComPtr@UICursor@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UICursor@@@.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<ICursor>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ICursor>>(
        __int64 a1,
        char *a2,
        __int64 *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // rax
  __int64 *v14; // rsi
  __int64 *v15; // r14
  char *v16; // r8
  char *v17; // rcx
  char *v18; // rdx
  __int64 *result; // rax
  _QWORD *v20; // r9
  char *v21; // [rsp+20h] [rbp-48h]
  __int64 *v22; // [rsp+70h] [rbp+8h]

  v6 = (__int64)&a2[-*(_QWORD *)a1] >> 3;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (__int64 *)v13;
  v21 = v13;
  v15 = (__int64 *)&v13[8 * v6];
  try
  {
    *v15 = 0LL;
    if ( v15 != a3 )
    {
      *v15 = *a3;
      *a3 = 0LL;
    }
    v22 = v15;
    v16 = *(char **)(a1 + 8);
    v17 = *(char **)a1;
    if ( a2 == v16 )
    {
      v18 = v13;
      while ( v17 != v16 )
      {
        *(_QWORD *)v18 = 0LL;
        if ( v18 != v17 )
        {
          *(_QWORD *)v18 = *(_QWORD *)v17;
          *(_QWORD *)v17 = 0LL;
        }
        v18 += 8;
        v17 += 8;
      }
    }
    else
    {
      std::_Uninitialized_move<Microsoft::WRL::ComPtr<ICursor> *,std::allocator<Microsoft::WRL::ComPtr<ICursor>>>(
        v17,
        a2,
        v13);
      v22 = v14;
      std::_Uninitialized_move<Microsoft::WRL::ComPtr<ICursor> *,std::allocator<Microsoft::WRL::ComPtr<ICursor>>>(
        a2,
        *(_QWORD **)(a1 + 8),
        v20);
    }
    if ( *(_QWORD *)a1 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CUIWindow>>>(*(__int64 **)a1, *(__int64 **)(a1 + 8));
      std::_Deallocate<16,0>(
        *(char **)a1,
        (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    *(_QWORD *)a1 = v14;
    *(_QWORD *)(a1 + 8) = &v14[v9];
    *(_QWORD *)(a1 + 16) = &v14[v8];
    result = v15;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CUIWindow>>>(v22, v15 + 1);
    std::_Deallocate<16,0>(v21, (const struct std::nothrow_t *)(8 * v8));
    throw;
  }
  return result;
}
