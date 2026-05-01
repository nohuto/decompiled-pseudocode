/*
 * XREFs of ??$_Insert_or_assign@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@?$map@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@U?$less@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@@7@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@std@@_N@1@$$QEAW4ShellView@Shell@UI@WindowsUdk@winrt@@$$QEAV?$shared_ptr@VInputAppViewCoodinatorHandler@@@1@@Z @ 0x1801C7E80
 * Callers:
 *     ?InitializeViewCoordinators@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1801C7A18 (-InitializeViewCoordinators@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18006B894 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std.c)
 *     ?_Check_grow_by_1@?$_Tree@V?$_Tmap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@U?$less@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@@7@$0A@@std@@@std@@IEAAXXZ @ 0x1801C7FCC (-_Check_grow_by_1@-$_Tree@V-$_Tmap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@V-$shared_ptr@V.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>>::_Insert_or_assign<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>>(
        _QWORD *a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  __int64 *v8; // rbx
  __int64 *v9; // rax
  int v10; // ecx
  __int64 *v11; // rbx
  _DWORD *v12; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  std::_Ref_count_base *v16; // rcx
  __int128 v17; // [rsp+20h] [rbp-48h] BYREF
  __int128 v18; // [rsp+30h] [rbp-38h]

  v8 = (__int64 *)*a1;
  v9 = *(__int64 **)(*a1 + 8LL);
  v18 = (unsigned __int64)v9;
  if ( !*((_BYTE *)v9 + 25) )
  {
    v10 = *a3;
    do
    {
      *(_QWORD *)&v18 = v9;
      if ( *((_DWORD *)v9 + 8) >= v10 )
      {
        DWORD2(v18) = 1;
        v8 = v9;
        v9 = (__int64 *)*v9;
      }
      else
      {
        DWORD2(v18) = 0;
        v9 = (__int64 *)v9[2];
      }
    }
    while ( !*((_BYTE *)v9 + 25) );
  }
  if ( *((_BYTE *)v8 + 25) || *a3 < *((_DWORD *)v8 + 8) )
  {
    std::_Tree<std::_Tmap_traits<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>,std::less<enum winrt::WindowsUdk::UI::Shell::ShellView>,std::allocator<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>>,0>>::_Check_grow_by_1(a1);
    v11 = (__int64 *)*a1;
    v17 = (unsigned __int64)a1;
    v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
    v12[8] = *a3;
    *((_QWORD *)v12 + 5) = 0LL;
    *((_QWORD *)v12 + 6) = 0LL;
    *((_QWORD *)v12 + 5) = *a4;
    *((_QWORD *)v12 + 6) = a4[1];
    *a4 = 0LL;
    a4[1] = 0LL;
    *(_QWORD *)v12 = v11;
    *((_QWORD *)v12 + 1) = v11;
    *((_QWORD *)v12 + 2) = v11;
    *((_WORD *)v12 + 12) = 0;
    v17 = v18;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>::_Insert_node(
                      a1,
                      (__int64)&v17,
                      (__int64)v12);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    v14 = *a4;
    v15 = a4[1];
    *a4 = 0LL;
    a4[1] = 0LL;
    v8[5] = v14;
    v16 = (std::_Ref_count_base *)v8[6];
    v8[6] = v15;
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
