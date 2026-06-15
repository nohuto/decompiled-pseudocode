/*
 * XREFs of ??$_Find_last@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x1400371C0
 * Callers:
 *     ??$emplace@PEAGAEAPEAVCAPOEndpointNotificationsHandler@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@$$QEAPEAGAEAPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x140036FF0 (--$emplace@PEAGAEAPEAVCAPOEndpointNotificationsHandler@@@-$_Hash@V-$_Umap_traits@V-$basic_string.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>>>,0>>::_Find_last<std::wstring>(
        _QWORD *a1,
        _QWORD *a2,
        char *a3,
        __int64 a4)
{
  __int64 v5; // r10
  _QWORD *v6; // r8
  __int64 v7; // rax
  _QWORD *v8; // r9
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  char *v11; // r8
  __int64 v12; // r10
  signed __int64 v13; // r8

  v5 = a1[3];
  v6 = (_QWORD *)a1[1];
  v7 = 2 * (a4 & a1[6]);
  v8 = *(_QWORD **)(v5 + 16 * (a4 & a1[6]) + 8);
  if ( v8 == v6 )
  {
    *a2 = v6;
LABEL_17:
    a2[1] = 0LL;
  }
  else
  {
    v9 = *(_QWORD **)(v5 + 8 * v7);
    while ( 1 )
    {
      v10 = v8 + 2;
      if ( v8[5] > 7uLL )
        v10 = (_QWORD *)*v10;
      v11 = a3;
      if ( *((_QWORD *)a3 + 3) > 7uLL )
        v11 = *(char **)a3;
      if ( *((_QWORD *)a3 + 2) == v8[4] )
        break;
LABEL_14:
      if ( v8 == v9 )
      {
        *a2 = v8;
        goto LABEL_17;
      }
      v8 = (_QWORD *)v8[1];
    }
    v12 = *((_QWORD *)a3 + 2);
    v13 = v11 - (char *)v10;
    while ( v12 )
    {
      if ( *(_WORD *)((char *)v10 + v13) != *(_WORD *)v10 )
        goto LABEL_14;
      --v12;
      v10 = (_QWORD *)((char *)v10 + 2);
    }
    *a2 = *v8;
    a2[1] = v8;
  }
  return a2;
}
