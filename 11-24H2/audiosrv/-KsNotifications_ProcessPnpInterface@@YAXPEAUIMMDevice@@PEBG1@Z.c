/*
 * XREFs of ?KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z @ 0x180089860
 * Callers:
 *     ?KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z @ 0x180067310 (-KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z.c)
 *     ?KsNotifications_ServiceStart@@YAJXZ @ 0x18011EE44 (-KsNotifications_ServiceStart@@YAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Dispose@CKsNotificationsMonitor@@QEAAXXZ @ 0x180059C78 (-Dispose@CKsNotificationsMonitor@@QEAAXXZ.c)
 *     ?GetNext@?$TList@VCKsNotificationsMonitor@@@@QEBAHAEAPEAXPEAPEAVCKsNotificationsMonitor@@@Z @ 0x1800651EC (-GetNext@-$TList@VCKsNotificationsMonitor@@@@QEBAHAEAPEAXPEAPEAVCKsNotificationsMonitor@@@Z.c)
 *     ?KsNotifications_CreateMonitor@@YAPEAVCKsNotificationsMonitor@@PEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V?$CComPtr@UIConnector@@@ATL@@V?$CComPtr@UIDeviceTopology@@@4@@Z @ 0x18010A958 (-KsNotifications_CreateMonitor@@YAPEAVCKsNotificationsMonitor@@PEBGW4__MIDL___MIDL_itf_devicetop.c)
 *     ?AddTail@?$TList@VCKsNotificationsMonitor@@@@QEAAPEAXPEAVCKsNotificationsMonitor@@@Z @ 0x18011E5A4 (-AddTail@-$TList@VCKsNotificationsMonitor@@@@QEAAPEAXPEAVCKsNotificationsMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall KsNotifications_ProcessPnpInterface(
        struct IMMDevice *a1,
        unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  __int64 v5; // rcx
  unsigned __int16 *v6; // rdx
  int v7; // eax
  unsigned int i; // edi
  __int64 Monitor; // rax
  __int64 v10; // rcx
  CKsNotificationsMonitor *v11; // rbx
  _QWORD *v12; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v13[3]; // [rsp+38h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v15; // [rsp+90h] [rbp+30h] BYREF
  int v16; // [rsp+94h] [rbp+34h]
  __int64 v17; // [rsp+98h] [rbp+38h] BYREF

  v16 = HIDWORD(a3);
  v12 = 0LL;
  v15 = 0;
  EnterCriticalSection(&g_csKsNotificationMonitors);
  v14 = &g_csKsNotificationMonitors;
  v13[0] = (_QWORD *)g_lstKsNotificationMonitors;
  if ( g_lstKsNotificationMonitors )
  {
    while ( 1 )
    {
      v17 = 0LL;
      TList<CKsNotificationsMonitor>::GetNext(v5, v13, &v17);
      v6 = a2;
      do
      {
        v5 = *(unsigned __int16 *)((char *)v6 + *(_QWORD *)(v17 + 16) - (_QWORD)a2);
        v7 = *v6 - (_DWORD)v5;
        if ( v7 )
          break;
        ++v6;
      }
      while ( (_DWORD)v5 );
      if ( !v7 )
        break;
      if ( !v13[0] )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    if ( ((int (__fastcall *)(struct IMMDevice *, GUID *, __int64))a1->lpVtbl->Activate)(
           a1,
           &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
           23LL) >= 0
      && (*(int (__fastcall **)(_QWORD *, unsigned int *))(*v12 + 24LL))(v12, &v15) >= 0 )
    {
      for ( i = 0; i < v15; ++i )
      {
        v13[0] = 0LL;
        if ( (*(int (__fastcall **)(_QWORD *, _QWORD, _QWORD **))(*v12 + 32LL))(v12, i, v13) >= 0 )
        {
          LODWORD(v17) = 0;
          if ( (*(int (__fastcall **)(_QWORD *, __int64 *))(*v13[0] + 24LL))(v13[0], &v17) >= 0 )
          {
            v13[1] = v12;
            v13[2] = v13[0];
            if ( v13[0] )
              (*(void (__fastcall **)(_QWORD *))(*v13[0] + 8LL))(v13[0]);
            Monitor = KsNotifications_CreateMonitor(a2);
            v11 = (CKsNotificationsMonitor *)Monitor;
            if ( Monitor && !TList<CKsNotificationsMonitor>::AddTail(v10, Monitor) )
            {
              CKsNotificationsMonitor::Dispose(v11);
              (*(void (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v11 + 16LL))(v11);
            }
          }
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v13);
      }
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v14);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v12);
}
