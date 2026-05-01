/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1806A3318
 * Callers:
 *     ?CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801DD5E8 (-CreateFrameForMonitor@TaskViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18001D4AC (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18001D4DC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1801D3AB8 (--$_Uninitialized_move@PEAV-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@V-$allo.c)
 *     ??0?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18029BC1C (--0-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy> const &>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  __int64 *v12; // rax
  __int64 *v13; // rdi
  __int64 *v14; // r14
  __int64 *v15; // rdx
  __int64 *v16; // r8
  __int64 *v17; // rcx
  __int64 *result; // rax
  __int64 *v19; // [rsp+20h] [rbp-48h]
  __int64 *v20; // [rsp+70h] [rbp+8h]

  v5 = ((__int64)a2 - *(_QWORD *)a1) >> 3;
  v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v7 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v7);
  v12 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v19 = v12;
  v14 = &v12[v5];
  try
  {
    wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>(
      v14,
      a3);
    v20 = v14;
    v15 = *(__int64 **)(a1 + 8);
    v16 = v13;
    v17 = *(__int64 **)a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>>>(
        v17,
        a2,
        v13);
      v20 = v13;
      v16 = v14 + 1;
      v15 = *(__int64 **)(a1 + 8);
      v17 = a2;
    }
    std::_Uninitialized_move<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>>>(
      v17,
      v15,
      v16);
    if ( *(_QWORD *)a1 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>>(
        *(__int64 **)a1,
        *(__int64 **)(a1 + 8));
      std::_Deallocate<16,0>(
        *(void **)a1,
        (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    *(_QWORD *)a1 = v13;
    *(_QWORD *)(a1 + 8) = &v13[v8];
    *(_QWORD *)(a1 + 16) = &v13[v7];
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>>(v20, v14 + 1);
    std::_Deallocate<16,0>(v19, (const struct std::nothrow_t *)(8 * v7));
    throw;
  }
  return result;
}
