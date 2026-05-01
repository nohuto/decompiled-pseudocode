/*
 * XREFs of ?FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x180410DB8
 * Callers:
 *     ?ClosePeopleShare@PeoplePaneViewManager@@UEAAJH@Z @ 0x180410820 (-ClosePeopleShare@PeoplePaneViewManager@@UEAAJH@Z.c)
 *     ?GetViewContactId@PeoplePaneViewManager@@UEAAJHPEAPEAG@Z @ 0x180411880 (-GetViewContactId@PeoplePaneViewManager@@UEAAJHPEAPEAG@Z.c)
 *     ?GetViewDesiredSize@PeoplePaneViewManager@@UEAAJHPEAUtagSIZE@@@Z @ 0x180411940 (-GetViewDesiredSize@PeoplePaneViewManager@@UEAAJHPEAUtagSIZE@@@Z.c)
 * Callees:
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x18004689C (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800479B8 (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::FindViewInfoByApplicationViewId(RTL_SRWLOCK *a1, int a2, _QWORD *a3)
{
  std::_Ref_count_base **Ptr; // rbp
  std::_Ref_count_base **v7; // rbx
  std::_Ref_count_base **v8; // rdx
  std::_Ref_count_base *v10[2]; // [rsp+20h] [rbp-28h] BYREF
  RTL_SRWLOCK *v11; // [rsp+50h] [rbp+8h] BYREF

  std::shared_ptr<PeoplePaneViewInfo>::reset(a3);
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v11, a1 + 16);
  Ptr = (std::_Ref_count_base **)a1[18].Ptr;
  v7 = (std::_Ref_count_base **)a1[17].Ptr;
  *(_OWORD *)v10 = 0LL;
  while ( v7 != Ptr )
  {
    if ( *((_QWORD *)*v7 + 6) )
    {
      if ( ~*((_DWORD *)*v7 + 12) == a2 )
        break;
    }
    else
    {
      std::shared_ptr<FlyoutView>::operator=(v10, v7);
    }
    v7 += 2;
  }
  if ( v7 != a1[18].Ptr )
  {
    v8 = v7;
    goto LABEL_15;
  }
  if ( v10[0] )
  {
    v8 = v10;
LABEL_15:
    std::shared_ptr<FlyoutView>::operator=(a3, v8);
    if ( v10[1] )
      std::_Ref_count_base::_Decref(v10[1]);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v11);
    return 0LL;
  }
  if ( v10[1] )
    std::_Ref_count_base::_Decref(v10[1]);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v11);
  return 2147943568LL;
}
