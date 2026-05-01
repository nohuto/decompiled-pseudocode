/*
 * XREFs of ?ClosePeopleShare@PeoplePaneViewManager@@UEAAJH@Z @ 0x180410820
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1804108A8 (-CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x180410DB8 (-FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewIn.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PeoplePaneViewManager::ClosePeopleShare(PeoplePaneViewManager *this, __int64 a2)
{
  PeoplePaneViewManager *v2; // rcx
  int ViewInfoByApplicationViewId; // ebx
  __int64 v4; // rdx
  std::_Ref_count_base *v6[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_OWORD *)v6 = 0LL;
  ViewInfoByApplicationViewId = PeoplePaneViewManager::FindViewInfoByApplicationViewId((char *)this - 88, a2, v6);
  if ( ViewInfoByApplicationViewId >= 0 )
  {
    if ( *((_DWORD *)v6[0] + 15) == 1 )
    {
      ViewInfoByApplicationViewId = PeoplePaneViewManager::CloseView(v2, *((struct IApplicationView **)v6[0] + 4));
      if ( ViewInfoByApplicationViewId >= 0 )
        goto LABEL_8;
      v4 = 442LL;
    }
    else
    {
      ViewInfoByApplicationViewId = -2147024809;
      v4 = 440LL;
    }
  }
  else
  {
    v4 = 439LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)ViewInfoByApplicationViewId);
LABEL_8:
  if ( v6[1] )
    std::_Ref_count_base::_Decref(v6[1]);
  return (unsigned int)ViewInfoByApplicationViewId;
}
