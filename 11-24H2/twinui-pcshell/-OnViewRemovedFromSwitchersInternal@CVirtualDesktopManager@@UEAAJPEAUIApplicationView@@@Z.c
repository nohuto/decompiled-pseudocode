/*
 * XREFs of ?OnViewRemovedFromSwitchersInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18007D590
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA?AV?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@XZ @ 0x18007D618 (-GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA-AV-$vector@V-$com_ptr_t@UIVirtualDeskt.c)
 *     ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x18007D950 (-UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V-$vector@V-$com_ptr_t@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktopManager::OnViewRemovedFromSwitchersInternal(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2)
{
  int updated; // ebx
  __int64 v5; // rdx
  __int64 CurrentDesktopCollection; // rax
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  updated = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 64LL))(*((_QWORD *)this + 14));
  if ( updated < 0 )
  {
    v5 = 1325LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  CurrentDesktopCollection = CVirtualDesktopManager::GetCurrentDesktopCollection((char *)this - 8, v8);
  updated = CVirtualDesktopManager::UpdateViewVisibility((char *)this - 8, a2, CurrentDesktopCollection);
  if ( updated < 0 )
  {
    v5 = 1326LL;
    goto LABEL_5;
  }
  return (unsigned int)updated;
}
