/*
 * XREFs of ??$construct@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@AEAPEAUIAudioSessionInfo@@AEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@?$_Default_allocator_traits@V?$allocator@U?$_List_node@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@QEAU?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@1@AEAPEAUIAudioSessionInfo@@AEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800301AC
 * Callers:
 *     ??$emplace@AEAPEAUIAudioSessionInfo@@AEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@PEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@std@@V?$allocator@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAXV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAPEAUIAudioSessionInfo@@AEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800301F0 (--$emplace@AEAPEAUIAudioSessionInfo@@AEAV-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Default_allocator_traits<std::allocator<std::_List_node<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>,void *>>>::construct<std::pair<void * const,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>,IAudioSessionInfo * &,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy> &>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 result; // rax
  __int64 v5; // rcx

  result = *a3;
  *a2 = *a3;
  v5 = *a4;
  a2[1] = *a4;
  if ( v5 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return result;
}
