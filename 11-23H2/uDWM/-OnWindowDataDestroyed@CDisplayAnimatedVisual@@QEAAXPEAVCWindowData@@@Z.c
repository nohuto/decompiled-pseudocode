/*
 * XREFs of ?OnWindowDataDestroyed@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z @ 0x18001EA38
 * Callers:
 *     ??1CWindowData@@QEAA@XZ @ 0x180010A48 (--1CWindowData@@QEAA@XZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180049060 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@PEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@std@@@1@AEBQEAVCWindowData@@@Z @ 0x18001EAD0 (--$_Find_lower_bound@PEAVCWindowData@@@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWin.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800B82A8 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@QEAAP.c)
 */

void __fastcall CDisplayAnimatedVisual::OnWindowDataDestroyed(CDisplayAnimatedVisual *this, struct CWindowData *a2)
{
  _QWORD *v4; // r10
  _QWORD *v5; // r10
  __int64 v6; // rax
  __int64 v7; // rax
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  struct CWindowData *v10; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    v10 = a2;
    std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::_Find_lower_bound<CWindowData *>(
      (char *)this + 384,
      v8,
      &v10);
    if ( !*(_BYTE *)(v9 + 25) && (unsigned __int64)a2 >= *(_QWORD *)(v9 + 32) && v9 != *v4 )
    {
      v6 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,double>>>::_Extract(v4);
      std::_Deallocate<16,0>(v6, 40LL);
    }
    std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::_Find_lower_bound<CWindowData *>(
      (char *)this + 400,
      v8,
      &v10);
    if ( !*(_BYTE *)(v9 + 25) && (unsigned __int64)a2 >= *(_QWORD *)(v9 + 32) && v9 != *v5 )
    {
      v7 = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,double>>>::_Extract(v5);
      std::_Deallocate<16,0>(v7, 40LL);
    }
  }
}
