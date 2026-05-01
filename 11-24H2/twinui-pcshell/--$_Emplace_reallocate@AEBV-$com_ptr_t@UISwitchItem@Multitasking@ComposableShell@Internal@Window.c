/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18007BDE4
 * Callers:
 *     ?SortItems@AppViewSwitchItemZOrderSort@@UEAAJPEAU?$IVectorView@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@PEAPEAU2345@@Z @ 0x18007C4B0 (-SortItems@AppViewSwitchItemZOrderSort@@UEAAJPEAU-$IVectorView@PEAUISwitchItem@Multitasking@Comp.c)
 *     ?CacheWindowWrapper@WindowEventDispatcher@@AEAAXV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$shared_ptr@UViewEventRegistration@@@std@@W4ViewInitializationScenario@@@Z @ 0x18041D7CC (-CacheWindowWrapper@WindowEventDispatcher@@AEAAXV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_excep.c)
 *     ?EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@VAgileGitPtr@@@Z @ 0x18041DE28 (-EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180424F90 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18001D4AC (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18001D4DC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x18007BF94 (-_Change_array@-$vector@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V-.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18007D438 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy> const &>(
        __int64 **a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  __int64 *v12; // rax
  __int64 *v13; // r14
  __int64 *v14; // r13
  __int64 *v15; // rsi
  __int64 *v16; // r8
  __int64 *v17; // rdx
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 *v20; // rdx
  __int64 v21; // rax
  __int64 *v22; // rcx
  __int64 v23; // rax
  __int64 *result; // rax
  __int64 *v25; // [rsp+20h] [rbp-48h]
  char *v26; // [rsp+28h] [rbp-40h]
  void *v27; // [rsp+28h] [rbp-40h]
  __int64 *v28; // [rsp+70h] [rbp+8h]
  __int64 v29; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v6 = a2 - *a1;
  v7 = a1[1] - *a1;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v29 = v7 + 1;
  v9 = a1[2] - *a1;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v8 = v10 + v9;
    if ( v10 + v9 < v7 + 1 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v8);
  v12 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v26 = (char *)v12;
  v14 = &v12[v6];
  v15 = v14 + 1;
  try
  {
    wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
      v14,
      a3);
    v28 = v14;
    v16 = a1[1];
    v17 = *a1;
    v18 = v13;
    if ( v4 == v16 )
    {
      while ( v17 != v16 )
      {
        v19 = *v17;
        *v17 = 0LL;
        *v18++ = v19;
        ++v17;
      }
      v20 = v18;
    }
    else
    {
      while ( v17 != v4 )
      {
        v21 = *v17;
        *v17 = 0LL;
        *v18++ = v21;
        ++v17;
      }
      std::_Destroy_range<std::allocator<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>>(v18, v18);
      v28 = v13;
      v22 = a1[1];
      while ( v4 != v22 )
      {
        v23 = *v4;
        *v4 = 0LL;
        *v15++ = v23;
        ++v4;
      }
      v20 = v15;
      v18 = v15;
    }
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>>(v18, v20);
    std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Change_array(
      a1,
      v13,
      v29,
      v8,
      v14 + 1,
      v26);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>>(v28, v25);
    std::_Deallocate<16,0>(v27, (const struct std::nothrow_t *)(8 * v8));
    throw;
  }
  return result;
}
