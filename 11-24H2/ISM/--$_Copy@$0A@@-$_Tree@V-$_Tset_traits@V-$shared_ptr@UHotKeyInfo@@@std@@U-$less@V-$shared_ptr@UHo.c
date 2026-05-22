/*
 * XREFs of ??$_Copy@$0A@@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@$0A@@std@@@std@@IEAAXAEBV01@@Z @ 0x1801C915C
 * Callers:
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x1801CAB08 (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_K1PEAEIIU_GUID@@AEAUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x1800900DC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBa.c)
 *     ??$_Copy_nodes@$0A@@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@1@PEAU21@0@Z @ 0x1801C91E0 (--$_Copy_nodes@$0A@@-$_Tree@V-$_Tset_traits@V-$shared_ptr@UHotKeyInfo@@@std@@U-$less@V-$shared_p.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<std::shared_ptr<HotKeyInfo>,std::less<std::shared_ptr<HotKeyInfo>>,std::allocator<std::shared_ptr<HotKeyInfo>>,0>>::_Copy<0>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // r8
  __int64 v5; // rcx
  _QWORD *v6; // rax
  char v7; // r9
  _QWORD *v8; // r8
  __int64 result; // rax
  __int64 i; // rcx

  *(_QWORD *)(*a1 + 8LL) = std::_Tree<std::_Tset_traits<std::shared_ptr<HotKeyInfo>,std::less<std::shared_ptr<HotKeyInfo>>,std::allocator<std::shared_ptr<HotKeyInfo>>,0>>::_Copy_nodes<0>(
                             a1,
                             *(_QWORD *)(*a2 + 8LL),
                             *a1);
  v4 = (_QWORD *)*a1;
  a1[1] = a2[1];
  v5 = v4[1];
  if ( *(_BYTE *)(v5 + 25) )
  {
    *v4 = v4;
    result = *a1;
    *(_QWORD *)(*a1 + 16LL) = *a1;
  }
  else
  {
    v6 = std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>>::_Min((_QWORD *)v5);
    *v8 = v6;
    result = *(_QWORD *)(*a1 + 8LL);
    for ( i = *(_QWORD *)(result + 16); *(_BYTE *)(i + 25) == v7; i = *(_QWORD *)(i + 16) )
      result = i;
    *(_QWORD *)(*a1 + 16LL) = result;
  }
  return result;
}
