/*
 * XREFs of ?DeleteAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x1800C62E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800480B0 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     WPP_SF_qd @ 0x1800C3678 (WPP_SF_qd.c)
 *     ??$remove_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@@std@@V_lambda_a5fcd431b6a5ef671993691a41929e10_@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@@0@V10@V10@V_lambda_a5fcd431b6a5ef671993691a41929e10_@@@Z @ 0x1800C5AF8 (--$remove_if@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULockedListEntry@-$CLockedList_.c)
 *     ?erase@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@@2@0@Z @ 0x1800C6DA0 (-erase@-$vector@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProces.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManager::DeleteAudioSessionClientNotification(
        CAudioSessionManager *this,
        struct IAudioProcess *a2)
{
  char *v4; // rbx
  __int64 *v5; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // rax
  int v9; // [rsp+20h] [rbp-30h]
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v11[2]; // [rsp+40h] [rbp-10h] BYREF
  char v12; // [rsp+70h] [rbp+20h] BYREF
  __int64 v13; // [rsp+80h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+88h] [rbp+38h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v9 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x12u,
      (__int64)&WPP_a93cb6bcfd8139528881ae8cee6da3d9_Traceguids,
      this,
      v9);
  }
  v4 = (char *)this + 176;
  ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v13, (__int64)a2);
  EnterCriticalSection((LPCRITICAL_SECTION)v4);
  v14 = (struct _RTL_CRITICAL_SECTION *)v4;
  v12 = 0;
  v5 = (__int64 *)(v4 + 40);
  v6 = *((_QWORD *)v4 + 6);
  v11[0] = &v13;
  v11[1] = &v12;
  v7 = std::remove_if<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>>>,_lambda_a5fcd431b6a5ef671993691a41929e10_>(
         &v10,
         *v5,
         v6,
         (__int64)v11);
  std::vector<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::LockedListEntry>>::erase(
    v5,
    v11,
    *v7,
    v6);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v14);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
  return 0LL;
}
