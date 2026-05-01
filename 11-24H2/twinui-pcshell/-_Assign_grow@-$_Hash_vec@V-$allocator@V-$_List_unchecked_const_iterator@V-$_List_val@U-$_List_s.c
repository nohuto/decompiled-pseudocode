/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18004DD38
 * Callers:
 *     ??0?$_Hash@V?$_Umap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@V?$_Uhash_compare@W4ShellView@Shell@UI@WindowsUdk@winrt@@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@@std@@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@W4ShellView@Shell@UI@WindowsUdk@winrt@@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@@1@AEBV?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@1@@Z @ 0x18004DC24 (--0-$_Hash@V-$_Umap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@V-$.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180126038 (-_Forced_rehash@-$_Hash@V-$_Uset_traits@Uguid@winrt@@V-$_Uhash_compare@Uguid@winrt@@U-$hash@Ugui.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@V?$_Uhash_compare@W4ShellView@Shell@UI@WindowsUdk@winrt@@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@@std@@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@$0A@@std@@@std@@IEAAX_K@Z @ 0x18058D724 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordin.c)
 * Callees:
 *     ??$fill@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@@std@@V12@@std@@YAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x18001D514 (--$fill@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBUhstring@w.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180125FF0 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180296974 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

unsigned __int64 __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<winrt::guid>>,std::_Iterator_base0>>>::_Assign_grow(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  __int64 v5; // rsi
  unsigned __int64 *v6; // rax
  unsigned __int64 *v7; // rdi
  __int64 v8; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  if ( (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3 >= a2 )
    return std::fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>>>>>(
             *(unsigned __int64 **)a1,
             *(unsigned __int64 **)(a1 + 8),
             &v10);
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v5 = a2;
  if ( 8 * a2 >= 0x1000 )
  {
    v6 = (unsigned __int64 *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(8 * a2);
  }
  else
  {
    if ( !(v5 * 8) )
    {
      v7 = 0LL;
      goto LABEL_7;
    }
    v6 = (unsigned __int64 *)operator new(8 * a2);
  }
  v7 = v6;
LABEL_7:
  v8 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  if ( v8 )
    std::_Deallocate<16,0>(*(void **)a1, (const struct std::nothrow_t *)(8 * v8));
  result = (unsigned __int64)&v7[v5];
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = &v7[v5];
  *(_QWORD *)(a1 + 16) = &v7[v5];
  while ( v7 != (unsigned __int64 *)result )
    *v7++ = a3;
  return result;
}
