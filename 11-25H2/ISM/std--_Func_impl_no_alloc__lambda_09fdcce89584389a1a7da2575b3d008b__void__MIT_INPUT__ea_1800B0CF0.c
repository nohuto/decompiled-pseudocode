/*
 * XREFs of std::_Func_impl_no_alloc__lambda_09fdcce89584389a1a7da2575b3d008b__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call @ 0x1800B0CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetActiveWindowId@ActivationListenerWindowIdAdapter@@SAX_K@Z @ 0x1800253DC (-SetActiveWindowId@ActivationListenerWindowIdAdapter@@SAX_K@Z.c)
 *     ?HandleForegroundChangeNotification@ForegroundManager@@AEAAX_KII@Z @ 0x180025BC0 (-HandleForegroundChangeNotification@ForegroundManager@@AEAAX_KII@Z.c)
 *     ?HandleDelegationChangeNotification@ForegroundManager@@AEAAXII@Z @ 0x1800AEE1C (-HandleDelegationChangeNotification@ForegroundManager@@AEAAXII@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_57240160@@@details@wil@@QEAA_NXZ @ 0x1800B10F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_57240160@@@details@wil@@QE.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_09fdcce89584389a1a7da2575b3d008b__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rbx

  v2 = *a2;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Bugfix_57240160>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Bugfix_57240160>::GetImpl'::`2'::impl)
    && *(_DWORD *)(v2 + 24) )
  {
    ForegroundManager::HandleDelegationChangeNotification(
      *(ForegroundManager **)(a1 + 8),
      *(_DWORD *)v2,
      *(_DWORD *)(v2 + 4));
  }
  else
  {
    ActivationListenerWindowIdAdapter::SetActiveWindowId(*(_QWORD *)(v2 + 16));
    ForegroundManager::HandleForegroundChangeNotification(
      *(ForegroundManager **)(a1 + 8),
      *(_QWORD *)(v2 + 16),
      *(_DWORD *)v2,
      *(_DWORD *)(v2 + 4));
  }
}
