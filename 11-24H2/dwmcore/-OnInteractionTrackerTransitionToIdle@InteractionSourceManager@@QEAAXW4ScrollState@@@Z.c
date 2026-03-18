/*
 * XREFs of ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x1800E1918
 * Callers:
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1800E1E6C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1800E3F48 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ??$_Find@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@AEBAPEAU?$_List_node@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@PEAX@1@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x1800E4000 (--$_Find@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@-$_Hash@V-$_Umap_traits.c)
 *     ??$?RV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@QEBA_KAEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800E4048 (--$-RV-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@-$_Uhash_compare@V-$com_ptr.c)
 *     ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x1800E6C0C (-ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x1800ECD5C (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
 *     ?ReportInertiaStop@CInteraction@@QEAAJXZ @ 0x180226258 (-ReportInertiaStop@CInteraction@@QEAAJXZ.c)
 */

void __fastcall InteractionSourceManager::OnInteractionTrackerTransitionToIdle(InteractionSourceManager *a1)
{
  __int64 v2; // rcx
  int v3; // r10d
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  if ( InteractionSourceManager::HasActiveManipulation(a1) )
  {
    if ( v3 == 2 )
    {
      v4 = *(_QWORD *)(v2 + 96);
      v5 = v4 + *(_QWORD *)(v2 + 104);
      while ( v4 != v5 )
      {
        v6 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 8 * ((*((_QWORD *)a1 + 11) - 1LL) & (v4 >> 1))) + 8 * (v4 & 1));
        CManipulation::SetCaptureState_RenderThread(*v6, 0LL);
        v8 = std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>::operator()<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>(
               v7,
               v6);
        v9 = std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::_Find<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>(
               (char *)a1 + 8,
               v6,
               v8);
        CInteraction::ReportInertiaStop(*(CInteraction **)(*(_QWORD *)(v9 + 24) + 40LL));
        ++v4;
      }
    }
    InteractionSourceManager::ClearActiveManipulations(a1);
  }
  InteractionSourceManager::ReconfigureAllManipulations(a1);
}
