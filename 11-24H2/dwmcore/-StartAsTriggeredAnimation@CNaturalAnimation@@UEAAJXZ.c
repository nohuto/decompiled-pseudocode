/*
 * XREFs of ?StartAsTriggeredAnimation@CNaturalAnimation@@UEAAJXZ @ 0x1802A0EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@1@AEBQEAVCInteractionTracker@@@Z @ 0x1800DF7B8 (--$find@X@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@@2@V32@@Z @ 0x1801CC258 (-erase@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compare@PEAVCBaseExpression@@U-$ha.c)
 *     ?ClearState@CNaturalAnimation@@AEAAXXZ @ 0x18029FE4C (-ClearState@CNaturalAnimation@@AEAAXXZ.c)
 *     ?StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ @ 0x1802A12F0 (-StartAsTriggeredAnimation@CBaseExpression@@UEAAJXZ.c)
 */

__int64 __fastcall CNaturalAnimation::StartAsTriggeredAnimation(CNaturalAnimation *this)
{
  int started; // eax
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rbx
  CNaturalAnimation *v7; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v8; // [rsp+60h] [rbp+18h] BYREF

  started = CBaseExpression::StartAsTriggeredAnimation(this);
  v3 = started;
  if ( started < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, started, 0x3A9u, 0LL);
  }
  else
  {
    v4 = *((_QWORD *)this + 3);
    *((_BYTE *)this + 224) |= 1u;
    v7 = this;
    v5 = *(_QWORD *)(v4 + 824);
    std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
      (_QWORD *)(v5 + 648),
      &v8,
      &v7);
    if ( v8 != *(_QWORD **)(v5 + 656) )
      std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::erase(
        (_QWORD *)(v5 + 648),
        &v7,
        v8);
    CNaturalAnimation::ClearState(this);
  }
  return v3;
}
