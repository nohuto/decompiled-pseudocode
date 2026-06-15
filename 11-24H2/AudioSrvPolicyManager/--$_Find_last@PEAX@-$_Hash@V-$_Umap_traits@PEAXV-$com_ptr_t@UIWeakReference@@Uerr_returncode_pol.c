/*
 * XREFs of ??$_Find_last@PEAX@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBQEAX_K@Z @ 0x180017E40
 * Callers:
 *     ??$emplace@AEAPEAUIAudioSessionInfo@@AEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAPEAUIAudioSessionInfo@@AEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800301F0 (--$emplace@AEAPEAUIAudioSessionInfo@@AEAV-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<void *,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>,0>>::_Find_last<void *>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  _QWORD *v4; // rax
  _QWORD *v5; // r11
  _QWORD *v6; // r9
  _QWORD *result; // rax

  v4 = (_QWORD *)a1[1];
  v5 = (_QWORD *)(a1[3] + 16 * (a4 & a1[6]));
  v6 = (_QWORD *)v5[1];
  if ( v6 == v4 )
  {
    *a2 = v4;
    result = a2;
    a2[1] = 0LL;
  }
  else
  {
    while ( *a3 != v6[2] )
    {
      if ( v6 == (_QWORD *)*v5 )
      {
        *a2 = v6;
        a2[1] = 0LL;
        return a2;
      }
      v6 = (_QWORD *)v6[1];
    }
    *a2 = *v6;
    a2[1] = v6;
    return a2;
  }
  return result;
}
