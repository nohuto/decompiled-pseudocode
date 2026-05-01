/*
 * XREFs of ??$_Assign_cast@AEAU?$pair@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$list@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x18069A858
 * Callers:
 *     ?CreateWithShellViewCoordinatorMap@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@CA?AU134567@AEBUShellAnimationCoordinator@34567@AEBV?$unordered_map@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@8@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@@std@@@Z @ 0x180285834 (-CreateWithShellViewCoordinatorMap@EdgeAnimationRelationshipManager@implementation@Animations@Sh.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x18004FA8C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801FF670 (--$_Append_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180228730 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShel.c)
 *     ??1?$_List_node_insert_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1802317F0 (--1-$_List_node_insert_op2@V-$allocator@U-$_List_node@U-$pair@$$CBW4ShellView@Shell@UI@WindowsUd.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::list<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>>::_Assign_cast<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator> &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>>>,std::_Iterator_base0>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v6; // r15
  __int64 v7; // rsi
  __int64 **v8; // rax
  __int64 v9; // rbp
  __int64 *v10; // rbx
  __int64 *v11; // rdx
  __int64 v12; // r8
  _QWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+28h] [rbp-30h]
  __int128 v18; // [rsp+30h] [rbp-28h]

  v6 = *(__int64 **)a1;
  v7 = **(_QWORD **)a1;
  while ( (__int64 *)v7 != v6 )
  {
    if ( (__int64 *)a2 == a3 )
    {
      v8 = *(__int64 ***)(v7 + 8);
      *v8 = v6;
      v6[1] = (__int64)v8;
      v9 = 0LL;
      do
      {
        v10 = *(__int64 **)v7;
        std::_List_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>,void *>>>(
          a1,
          v7);
        v7 = (__int64)v10;
        ++v9;
      }
      while ( v10 != v6 );
      *(_QWORD *)(a1 + 8) -= v9;
      return;
    }
    *(_DWORD *)(v7 + 16) = *(_DWORD *)(a2 + 16);
    winrt::Windows::Foundation::IUnknown::operator=((__int64 *)(v7 + 24), (__int64 *)(a2 + 24));
    v7 = *(_QWORD *)v7;
    a2 = *(_QWORD *)a2;
  }
  v16 = a1;
  v17 = 0LL;
  v18 = 0LL;
  std::_List_node_insert_op2<std::allocator<std::_List_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>,void *>>>::_Append_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>>>,std::_Iterator_base0>>(
    &v16,
    (__int64 *)a2,
    a3);
  v11 = *(__int64 **)a1;
  v12 = v17;
  if ( v17 )
  {
    v13 = (_QWORD *)v11[1];
    v14 = *((_QWORD *)&v18 + 1);
    *(_QWORD *)(*((_QWORD *)&v18 + 1) + 8LL) = v13;
    *v13 = v14;
    v15 = v18;
    *(_QWORD *)v18 = v11;
    v11[1] = v15;
    *(_QWORD *)(a1 + 8) += v12;
    v17 = 0LL;
  }
  std::_List_node_insert_op2<std::allocator<std::_List_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>,void *>>>::~_List_node_insert_op2<std::allocator<std::_List_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>,void *>>>((__int64)&v16);
}
