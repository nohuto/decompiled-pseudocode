/*
 * XREFs of std::_Func_impl_no_alloc__lambda_e299dc0f19f00e2c7ccae28147d2a42e__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call @ 0x1800AEB80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetActiveWindowId@ActivationListenerWindowIdAdapter@@SAX_K@Z @ 0x18002599C (-SetActiveWindowId@ActivationListenerWindowIdAdapter@@SAX_K@Z.c)
 *     ?HandleForegroundChangeNotification@ForegroundManager@@AEAAX_KII@Z @ 0x180026180 (-HandleForegroundChangeNotification@ForegroundManager@@AEAAX_KII@Z.c)
 *     ?HandleDelegationChangeNotification@ForegroundManager@@AEAAXII@Z @ 0x1800AD310 (-HandleDelegationChangeNotification@ForegroundManager@@AEAAXII@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_e299dc0f19f00e2c7ccae28147d2a42e__void__MIT_INPUT_FOCUS_MESSAGE_const___::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rbx

  v2 = *a2;
  if ( *(_DWORD *)(*a2 + 24) )
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
