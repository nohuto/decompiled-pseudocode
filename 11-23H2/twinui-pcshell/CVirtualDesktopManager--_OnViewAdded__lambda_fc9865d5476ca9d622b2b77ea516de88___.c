/*
 * XREFs of CVirtualDesktopManager::_OnViewAdded__lambda_fc9865d5476ca9d622b2b77ea516de88___ @ 0x180214EF8
 * Callers:
 *     ?OnPinnedViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180602790 (-OnPinnedViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA?AV?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@XZ @ 0x18003A918 (-GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA-AV-$vector@V-$com_ptr_t@UIVirtualDeskt.c)
 *     ?_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18003A960 (-_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x18003B554 (-UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V-$vector@V-$com_ptr_t@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_fc9865d5476ca9d622b2b77ea516de88_::operator() @ 0x18021554C (_lambda_fc9865d5476ca9d622b2b77ea516de88_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::_OnViewAdded__lambda_fc9865d5476ca9d622b2b77ea516de88___(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2,
        __int64 a3)
{
  int (__fastcall *v6)(struct IApplicationView *, struct IUnknown **); // rbx
  int updated; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *CurrentDesktopCollection; // rax
  _QWORD v14[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IUnknown *v16; // [rsp+68h] [rbp+28h] BYREF

  v16 = 0LL;
  v6 = *(int (__fastcall **)(struct IApplicationView *, struct IUnknown **))(*(_QWORD *)a2 + 360LL);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v16);
  if ( v6(a2, &v16) < 0 )
  {
    updated = lambda_fc9865d5476ca9d622b2b77ea516de88_::operator()(a3);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 1083LL;
      goto LABEL_17;
    }
    CurrentDesktopCollection = CVirtualDesktopManager::GetCurrentDesktopCollection((__int64)this, v14);
    updated = CVirtualDesktopManager::UpdateViewVisibility((__int64)this, (__int64)a2, CurrentDesktopCollection);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 1084LL;
      goto LABEL_17;
    }
  }
  else if ( (unsigned int)SHIsSameObject(v16, (struct IUnknown *)a2) )
  {
    updated = lambda_fc9865d5476ca9d622b2b77ea516de88_::operator()(a3);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 1070LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)updated);
      goto LABEL_18;
    }
    v10 = CVirtualDesktopManager::GetCurrentDesktopCollection((__int64)this, v14);
    updated = CVirtualDesktopManager::UpdateViewVisibility((__int64)this, (__int64)a2, v10);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 1071LL;
      goto LABEL_17;
    }
    updated = CVirtualDesktopManager::_PropagateVisibilityPolicyToOwnershipTree(this, a2);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 1072LL;
      goto LABEL_17;
    }
  }
  else
  {
    updated = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, struct IUnknown *))(**((_QWORD **)this + 15)
                                                                                              + 96LL))(
                *((_QWORD *)this + 15),
                a2,
                v16);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 1077LL;
      goto LABEL_17;
    }
    v11 = CVirtualDesktopManager::GetCurrentDesktopCollection((__int64)this, v14);
    updated = CVirtualDesktopManager::UpdateViewVisibility((__int64)this, (__int64)a2, v11);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 1078LL;
      goto LABEL_17;
    }
  }
LABEL_18:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v16);
  return v8;
}
