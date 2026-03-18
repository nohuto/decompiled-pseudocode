/*
 * XREFs of ??$_Emplace_reallocate@V?$function@$$A6AXXZ@std@@@?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@AEAAPEAV?$function@$$A6AXXZ@1@QEAV21@$$QEAV21@@Z @ 0x1802C7068
 * Callers:
 *     ?ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@PEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1802C7F64 (-ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@PEBUD.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0EA@@std@@YA_K_K@Z @ 0x18020BD38 (--$_Get_size_of_n@$0EA@@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AXXZ@std@@@std@@@std@@YAXPEAV?$function@$$A6AXXZ@0@QEAV10@AEAV?$allocator@V?$function@$$A6AXXZ@std@@@0@@Z @ 0x1802C6EFC (--$_Destroy_range@V-$allocator@V-$function@$$A6AXXZ@std@@@std@@@std@@YAXPEAV-$function@$$A6AXXZ@.c)
 *     ??$_Uninitialized_move@PEAV?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@YAPEAV?$function@$$A6AXXZ@0@QEAV10@0PEAV10@AEAV?$allocator@V?$function@$$A6AXXZ@std@@@0@@Z @ 0x1802C7418 (--$_Uninitialized_move@PEAV-$function@$$A6AXXZ@std@@V-$allocator@V-$function@$$A6AXXZ@std@@@2@@s.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@$$QEAV01@@Z @ 0x1802C7810 (--0-$function@$$A6AXXZ@std@@QEAA@$$QEAV01@@Z.c)
 */

unsigned __int64 __fastcall std::vector<std::function<void (void)>>::_Emplace_reallocate<std::function<void (void)>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rsi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned __int64 result; // rax

  v3 = 0x3FFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 6;
  if ( v6 == 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 6;
  v11 = v10 >> 1;
  if ( v10 <= 0x3FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v9;
  }
  size_of = std::_Get_size_of_n<64>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13 + (v4 & 0xFFFFFFFFFFFFFFC0uLL);
  v15 = v13;
  std::function<void (void)>::function<void (void)>(v14, a3);
  v16 = a1[1];
  v17 = v15;
  v18 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<std::function<void (void)> *,std::allocator<std::function<void (void)>>>(v18, a2, v15);
    v16 = a1[1];
    v17 = v14 + 64;
    v18 = a2;
  }
  std::_Uninitialized_move<std::function<void (void)> *,std::allocator<std::function<void (void)>>>(v18, v16, v17);
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<std::function<void (void)>>>(*a1, a1[1]);
    std::_Deallocate<16,0>((_QWORD *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFC0uLL);
  }
  *a1 = v15;
  result = v14;
  a1[1] = v15 + (v9 << 6);
  a1[2] = v15 + (v3 << 6);
  return result;
}
