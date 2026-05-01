/*
 * XREFs of wil::details::ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___::_ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___ @ 0x1804B1ED8
 * Callers:
 *     _PeoplePaneViewManager::LaunchPeopleShare_::_1_::dtor$2 @ 0x1804B57A2 (_PeoplePaneViewManager--LaunchPeopleShare_--_1_--dtor$2.c)
 * Callees:
 *     ?RemovePendingShareViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1804B5B90 (-RemovePendingShareViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___::_ScopeExitFn__lambda_d52e6cb0473107659bfee17c1ebaafe9___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    PeoplePaneViewManager::RemovePendingShareViewInfoForContactId(
      *(PeoplePaneViewManager **)a1,
      **(const unsigned __int16 ***)(a1 + 8));
  }
}
