/*
 * XREFs of ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x18003D970
 * Callers:
 *     ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x18003E960 (-GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ.c)
 *     ?StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ @ 0x1800F1D50 (-StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1800F3724 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?TryGetChainingHelper@CScrollAnimation@@AEBAPEAVCChainingHelper@@XZ @ 0x1800F3B8C (-TryGetChainingHelper@CScrollAnimation@@AEBAPEAVCChainingHelper@@XZ.c)
 *     ?StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ @ 0x180231FB0 (-StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ.c)
 *     ?UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Boundary@@@Z @ 0x180234354 (-UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Bound.c)
 *     ?CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEBUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x1802A7298 (-CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEBUExpressionReferenceInfo@@PEAVCReso.c)
 * Callees:
 *     ??$_Find@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@AEBAPEAU?$_List_node@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@PEAX@1@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x18003D33C (--$_Find@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@-$_Hash@V-$_Umap_traits.c)
 *     ??$?RV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@QEBA_KAEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18003D384 (--$-RV-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@-$_Uhash_compare@V-$com_ptr.c)
 */

struct CChainingHelper *__fastcall InteractionSourceManager::TryGetActiveChainingHelper(InteractionSourceManager *this)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r11
  __int64 *v7; // r9
  __int64 v8; // rax
  __int64 v9; // r11

  if ( *((_QWORD *)this + 3)
    && *((_QWORD *)this + 13)
    && (v3 = *((_QWORD *)this + 12),
        v4 = (*((_QWORD *)this + 11) - 1LL) & (v3 >> 1),
        v5 = std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>::operator()<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>(
               v4,
               (__int64 *)(*(_QWORD *)(*((_QWORD *)this + 10) + 8 * v4) + 8 * (v3 & 1))),
        v8 = std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::_Find<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>(
               (_QWORD *)(v6 + 8),
               v7,
               v5),
        v8 != *(_QWORD *)(v9 + 16)) )
  {
    return *(struct CChainingHelper **)(v8 + 24);
  }
  else
  {
    return 0LL;
  }
}
