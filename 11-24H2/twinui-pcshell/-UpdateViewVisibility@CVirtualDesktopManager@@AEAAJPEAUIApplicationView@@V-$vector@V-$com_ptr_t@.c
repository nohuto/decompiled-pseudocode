/*
 * XREFs of ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x18007D950
 * Callers:
 *     ?OnViewRemovedFromSwitchersInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18007D590 (-OnViewRemovedFromSwitchersInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?PlaceOrphanedViewsInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x18007D660 (-PlaceOrphanedViewsInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?CopyDesktopState@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@0@Z @ 0x180235660 (-CopyDesktopState@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@0@Z.c)
 *     CVirtualDesktopManager::_OnViewAdded__lambda_34ee246322c155ae103acce2d12cb4c3___ @ 0x180550D90 (CVirtualDesktopManager--_OnViewAdded__lambda_34ee246322c155ae103acce2d12cb4c3___.c)
 *     CVirtualDesktopManager::_OnViewAdded__lambda_d2b372ea82d33f7a4ac070e1e3f1e361___ @ 0x180550F0C (CVirtualDesktopManager--_OnViewAdded__lambda_d2b372ea82d33f7a4ac070e1e3f1e361___.c)
 *     ?MoveViewToDesktopNoGroupPropagateInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180554390 (-MoveViewToDesktopNoGroupPropagateInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PE.c)
 *     ?MoveViewToHolographicDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180554440 (-MoveViewToHolographicDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180554A40 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x1805577C4 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 *     ?ViewVisibilityUpdatedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180558910 (-ViewVisibilityUpdatedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?_MoveViewToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180558B78 (-_MoveViewToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 *     ?_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180558C18 (-_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18007DAFC (-_Tidy@-$vector@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 *     ?GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180191CC0 (-GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopManager::UpdateViewVisibility(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int8 v6; // bp
  _QWORD *v7; // rbx
  _QWORD *v8; // r15
  int v9; // eax
  unsigned int v10; // ebx
  int CurrentDesktopInternal; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v16; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v17; // [rsp+60h] [rbp+18h]
  struct IVirtualDesktop *v18; // [rsp+68h] [rbp+20h] BYREF

  v17 = a3;
  v6 = 0;
  v7 = (_QWORD *)*a3;
  v8 = (_QWORD *)a3[1];
  while ( v7 != v8 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 120) + 24LL))(
           *(_QWORD *)(a1 + 120),
           a2,
           *v7) )
    {
      v6 = 1;
      break;
    }
    ++v7;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 96LL))(a2, 2LL, v6 ^ 1u);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v16 = 0;
    v18 = 0LL;
    if ( v6 )
    {
      CurrentDesktopInternal = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 336LL))(a2, &v16);
      v12 = retaddr;
      if ( CurrentDesktopInternal >= 0 )
      {
        if ( !v16 )
          goto LABEL_16;
        v18 = 0LL;
        CurrentDesktopInternal = CVirtualDesktopManager::GetCurrentDesktopInternal(
                                   (CVirtualDesktopManager *)(a1 + 8),
                                   &v18);
        v12 = retaddr;
        if ( CurrentDesktopInternal >= 0 )
        {
          (*(void (__fastcall **)(_QWORD, __int64, struct IVirtualDesktop *))(**(_QWORD **)(a1 + 120) + 104LL))(
            *(_QWORD *)(a1 + 120),
            a2,
            v18);
          goto LABEL_16;
        }
        v13 = 1384LL;
      }
      else
      {
        v13 = 1383LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v12,
        (void *)v13,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)CurrentDesktopInternal);
    }
LABEL_16:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v18);
    v10 = 0;
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x55D,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_17:
  std::vector<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>::_Tidy(a3);
  return v10;
}
