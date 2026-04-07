/*
 * XREFs of ?UnRegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ @ 0x180069230
 * Callers:
 *     wil::details::lambda_call__lambda_b6ad21b81698ee59d063e67281553ae7___::_lambda_call__lambda_b6ad21b81698ee59d063e67281553ae7___ @ 0x18006866C (wil--details--lambda_call__lambda_b6ad21b81698ee59d063e67281553ae7___--_lambda_call__lambda_b6ad.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x1800690A0 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180049728 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CAcrylicSheet::UnRegisterGlobalTimer(CAcrylicSheet *this)
{
  if ( *((_BYTE *)this + 416) )
  {
    *((_BYTE *)this + 416) = 0;
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
  }
  return 0LL;
}
