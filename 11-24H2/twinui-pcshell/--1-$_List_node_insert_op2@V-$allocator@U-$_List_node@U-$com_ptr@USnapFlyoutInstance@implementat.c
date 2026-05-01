/*
 * XREFs of ??1?$_List_node_insert_op2@V?$allocator@U?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1805B12FC
 * Callers:
 *     ??$_Construct_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1805B0958 (--$_Construct_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_Li_ea_1805B0958.c)
 *     _std::list_winrt::com_ptr_winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance__std::allocator_winrt::com_ptr_winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance_____::_Construct_range_unchecked_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_winrt::com_ptr_winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance______std::_Iterator_base0__std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_winrt::com_ptr_winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance______std::_Iterator_base0____::_1_::dtor$0 @ 0x1806F72F6 (_std--list_winrt--com_ptr_winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFl.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@@std@@@?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@@1@PEAU01@@Z @ 0x1805B0E50 (--$_Freenode@V-$allocator@U-$_List_node@U-$com_ptr@USnapFlyoutInstance@implementation@SnapCompon.c)
 */

void __fastcall std::_List_node_insert_op2<std::allocator<std::_List_node<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>,void *>>>::~_List_node_insert_op2<std::allocator<std::_List_node<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>,void *>>>(
        __int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD **v2; // rdx

  if ( *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = 0LL;
    **(_QWORD **)(a1 + 16) = 0LL;
    v1 = *(_QWORD **)(a1 + 24);
    while ( v1 )
    {
      v2 = (_QWORD **)v1;
      v1 = (_QWORD *)*v1;
      std::_List_node<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>,void *>::_Freenode<std::allocator<std::_List_node<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>,void *>>>(
        a1,
        v2);
    }
  }
}
