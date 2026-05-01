/*
 * XREFs of ?ReplaceAll@?$vector_base@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UMenuItem@UI@WindowsUdk@3@@winrt@@QEAAXU?$array_view@$$CBUMenuItem@UI@WindowsUdk@winrt@@@2@@Z @ 0x18060217C
 * Callers:
 *     ?ReplaceAll@?$produce@U?$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x180602130 (-ReplaceAll@-$produce@U-$vector_impl@UMenuItem@UI@WindowsUdk@winrt@@V-$vector@UMenuItem@UI@Windo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@WindowsUdk@winrt@@QEAU1234@AEAV?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@0@@Z @ 0x1801CDA40 (--$_Destroy_range@V-$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@YAXPEAUMenuItem@UI@Win.c)
 *     ??$_Assign_counted_range@PEBUMenuItem@UI@WindowsUdk@winrt@@@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@AEAAXPEBUMenuItem@UI@WindowsUdk@winrt@@_K@Z @ 0x1805FE378 (--$_Assign_counted_range@PEBUMenuItem@UI@WindowsUdk@winrt@@@-$vector@UMenuItem@UI@WindowsUdk@win.c)
 */

void __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::WindowsUdk::UI::MenuItem,std::vector<winrt::WindowsUdk::UI::MenuItem>,winrt::impl::single_threaded_collection_base>,winrt::WindowsUdk::UI::MenuItem>::ReplaceAll(
        volatile signed __int32 *a1,
        __int64 a2)
{
  __int64 v3; // rax
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v4; // rdi
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  _InterlockedIncrement(a1);
  v3 = (__int64)(a1 + 2);
  if ( !a1 )
    v3 = 48LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( &v8 != (__int128 *)v3 )
  {
    v4 = *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)v3;
    *(_QWORD *)&v8 = *(_QWORD *)v3;
    *(_QWORD *)v3 = 0LL;
    v5 = *(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(v3 + 8);
    *((_QWORD *)&v8 + 1) = v5;
    *(_QWORD *)(v3 + 8) = 0LL;
    v6 = *(_QWORD *)(v3 + 16);
    v9 = v6;
    *(_QWORD *)(v3 + 16) = 0LL;
  }
  v7 = (__int64)(a1 + 2);
  if ( !a1 )
    v7 = 48LL;
  std::vector<winrt::WindowsUdk::UI::MenuItem>::_Assign_counted_range<winrt::WindowsUdk::UI::MenuItem const *>(
    v7,
    *(__int64 **)a2,
    *(unsigned int *)(a2 + 8));
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<winrt::WindowsUdk::UI::MenuItem>>(v4, v5);
    std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)((v6 - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL));
  }
}
