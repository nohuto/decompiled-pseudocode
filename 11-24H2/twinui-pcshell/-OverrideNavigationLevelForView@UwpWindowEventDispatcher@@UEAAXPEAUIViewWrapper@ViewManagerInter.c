/*
 * XREFs of ?OverrideNavigationLevelForView@UwpWindowEventDispatcher@@UEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x1801D8250
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BDC30 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?RaiseViewEvent@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x1801D84A8 (-RaiseViewEvent@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayVisibilityRevokedEventHandling@@@details@wil@@QEAA_NXZ @ 0x18035FF00 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayVisibilityRevokedEve.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall UwpWindowEventDispatcher::OverrideNavigationLevelForView(RTL_SRWLOCK *a1, void (***a2)(void), int a3)
{
  void (**v6)(void); // rax
  void (*v7)(void); // rax
  unsigned __int8 (__fastcall *v8)(__int64, __int64); // rax
  const char *v9; // r9
  __int64 v10; // rax
  std::_Ref_count_base *v11; // r15
  std::_Ref_count_base *v12; // rbx
  RTL_SRWLOCK *v13; // rcx
  __int64 *v14; // rax
  RTL_SRWLOCK *v15; // rcx
  std::_Ref_count_base *v16[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v17; // [rsp+30h] [rbp-38h]
  char v18; // [rsp+38h] [rbp-30h]
  _BYTE v19[8]; // [rsp+40h] [rbp-28h] BYREF
  std::_Ref_count_base *v20; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF
  RTL_SRWLOCK *v23; // [rsp+88h] [rbp+20h] BYREF

  v6 = *a2;
  v22 = 0LL;
  v7 = *v6;
  try
  {
    v7();
    v8 = *(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 312LL);
    if ( a3 == 2 )
    {
      if ( v8(v22, 1LL) )
      {
        v17 = &v22;
        v18 = 1;
        *(_OWORD *)v16 = 0LL;
        AcquireSRWLockShared(a1 + 56);
        v23 = a1 + 56;
        v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v22 + 264LL))(v22, v19);
        v11 = *(std::_Ref_count_base **)v10;
        v12 = *(std::_Ref_count_base **)(v10 + 8);
        *(_QWORD *)v10 = 0LL;
        *(_QWORD *)(v10 + 8) = 0LL;
        v16[0] = v11;
        v16[1] = v12;
        if ( v20 )
          std::_Ref_count_base::_Decref(v20);
        if ( a1 != (RTL_SRWLOCK *)-448LL )
          ReleaseSRWLockShared(a1 + 56);
        v13 = (RTL_SRWLOCK *)*((_QWORD *)v11 + 3);
        v23 = v13;
        if ( v13 )
          (*((void (__fastcall **)(RTL_SRWLOCK *))v13->Ptr + 1))(v13);
        UwpWindowEventDispatcher::RaiseViewEvent(&a1[-5], a2, 7LL, &v23);
        if ( v12 )
          std::_Ref_count_base::_Decref(v12);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 312LL))(v22, 2LL);
      }
    }
    else
    {
      v8(v22, 0LL);
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamingOverlayVisibilityRevokedEventHandling>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_GamingOverlayVisibilityRevokedEventHandling>::GetImpl'::`2'::impl) )
      {
        *(_OWORD *)v16 = 0LL;
        Microsoft::WRL::Wrappers::SRWLock::LockShared(&v23, a1 + 56);
        v14 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v22 + 264LL))(v22, v19);
        std::shared_ptr<KBViewInfo>::operator=(v16, v14);
        if ( v20 )
          std::_Ref_count_base::_Decref(v20);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v23);
        v15 = (RTL_SRWLOCK *)*((_QWORD *)v16[0] + 3);
        v23 = v15;
        if ( v15 )
          (*((void (__fastcall **)(RTL_SRWLOCK *))v15->Ptr + 1))(v15);
        UwpWindowEventDispatcher::RaiseViewEvent(&a1[-5], a2, 7LL, &v23);
        if ( v16[1] )
          std::_Ref_count_base::_Decref(v16[1]);
      }
    }
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x934,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      v9);
  }
}
