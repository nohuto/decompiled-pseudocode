/*
 * XREFs of ?OnFlyoutInstanceShutdown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z @ 0x180272490
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BDC30 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?erase@?$vector@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@@2@0@Z @ 0x1801C7974 (-erase@-$vector@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V-$allocator@V-$shared.c)
 *     ?TryGetFlyoutInstance@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801FC70C (-TryGetFlyoutInstance@SnapFlyoutHost@@AEAA-AV-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@.c)
 *     ?ProgressRequest@?$consume_Windows_Internal_Shell_WindowManagementEvents_IArrangedWindowResizeStartedEventArgs@UIArrangedWindowResizeStartedEventArgs@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801FC7A0 (-ProgressRequest@-$consume_Windows_Internal_Shell_WindowManagementEvents_IArrangedWindowResizeSt.c)
 *     ?SnapControlType@?$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180241B40 (-SnapControlType@-$consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance@UISnapFlyout.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@1@XZ @ 0x18028B58C (--C-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_da.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180291E00 (--1-$test_data_control@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x180295BA8 (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A9934 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ??$SnapFlyout_InstanceShutdown@I@SnapFlyoutTelemetry@@SAX$$QEAI@Z @ 0x1802CB744 (--$SnapFlyout_InstanceShutdown@I@SnapFlyoutTelemetry@@SAX$$QEAI@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@PEAX@std@@@std@@@?$_List_node@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1805B0E00 (--$_Free_non_head@V-$allocator@U-$_List_node@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_________lambda_d3d99d077aa6088e001c766fa29bfd0f___ @ 0x1805B1040 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--shared_ptr_SnapFly.c)
 *     _lambda_859f4926c3ab381d440196e95fb695e7_::operator() @ 0x1805B163C (_lambda_859f4926c3ab381d440196e95fb695e7_--operator().c)
 *     ?RemoveInstanceFromMonitorMap@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805B3B38 (-RemoveInstanceFromMonitorMap@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@In.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SnapFlyoutHost::OnFlyoutInstanceShutdown(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance *a2)
{
  _QWORD *v4; // rax
  __int128 *v5; // rbx
  __int64 Ptr; // rsi
  _QWORD *v7; // rbx
  __int64 *i; // rdi
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int128 v13; // [rsp+20h] [rbp-30h] BYREF
  __int128 *v14; // [rsp+30h] [rbp-20h] BYREF
  std::_Ref_count_base *v15; // [rsp+38h] [rbp-18h]
  RTL_SRWLOCK **v16; // [rsp+40h] [rbp-10h]
  RTL_SRWLOCK *v17; // [rsp+90h] [rbp+40h] BYREF
  const struct winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance *v18; // [rsp+98h] [rbp+48h] BYREF
  const struct winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance *v19; // [rsp+A0h] [rbp+50h] BYREF

  LODWORD(v17) = winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IArrangedWindowResizeStartedEventArgs<winrt::Windows::Internal::Shell::WindowManagementEvents::IArrangedWindowResizeStartedEventArgs>::ProgressRequest((__int64 *)a2);
  SnapFlyoutTelemetry::SnapFlyout_InstanceShutdown<unsigned int>(&v17);
  v13 = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  *v4 = v4;
  v4[1] = v4;
  *(_QWORD *)&v13 = v4;
  wil::AcquireSRWLockExclusive(&v17, this + 22);
  SnapFlyoutHost::TryGetFlyoutInstance((__int64)this, &v14, (__int64)a2);
  v5 = v14;
  if ( v14
    && (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool(v14) )
  {
    *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                            v5,
                            &v18)
             + 274LL) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(&v18);
    tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete(v5);
  }
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  Ptr = (__int64)this[4].Ptr;
  v7 = this[3].Ptr;
  v19 = a2;
  v18 = a2;
  while ( v7 != (_QWORD *)Ptr && !(unsigned __int8)lambda_859f4926c3ab381d440196e95fb695e7_::operator()(&v18, v7) )
    v7 += 2;
  if ( v7 != (_QWORD *)Ptr )
  {
    for ( i = v7 + 2; i != (__int64 *)Ptr; i += 2 )
    {
      if ( !(unsigned __int8)lambda_859f4926c3ab381d440196e95fb695e7_::operator()(&v19, i) )
      {
        std::shared_ptr<KBViewInfo>::operator=(v7, i);
        v7 += 2;
      }
    }
  }
  std::vector<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>::erase((__int64)&this[3], &v18, (__int64)v7, Ptr);
  if ( (unsigned int)winrt::impl::consume_Windows_Internal_Shell_SnapComponent_ISnapFlyoutInstance<winrt::Windows::Internal::Shell::SnapComponent::ISnapFlyoutInstance>::SnapControlType((__int64 *)a2) == 2 )
  {
    SnapFlyoutHost::RemoveInstanceFromMonitorMap(this, a2);
    v9 = (__int64)this[4].Ptr;
    v14 = &v13;
    v15 = (std::_Ref_count_base *)this;
    v16 = &v17;
    v10 = (__int64 *)std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_________lambda_d3d99d077aa6088e001c766fa29bfd0f___(
                       &v18,
                       this[3].Ptr,
                       v9,
                       &v14);
    std::vector<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>::erase((__int64)&this[3], &v19, *v10, v9);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v17);
  std::_List_node<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>,void *>::_Free_non_head<std::allocator<std::_List_node<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>,void *>>>(
    v11,
    v13);
  *(_QWORD *)v13 = v13;
  *(_QWORD *)(v13 + 8) = v13;
  *((_QWORD *)&v13 + 1) = 0LL;
  std::_List_node<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>,void *>::_Free_non_head<std::allocator<std::_List_node<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>,void *>>>(
    v12,
    v13);
  std::_Deallocate<16,0>((void *)v13, (const struct std::nothrow_t *)0x20);
}
