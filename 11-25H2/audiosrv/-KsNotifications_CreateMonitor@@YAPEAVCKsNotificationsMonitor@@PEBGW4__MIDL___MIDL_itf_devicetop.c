/*
 * XREFs of ?KsNotifications_CreateMonitor@@YAPEAVCKsNotificationsMonitor@@PEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V?$CComPtr@UIConnector@@@ATL@@V?$CComPtr@UIDeviceTopology@@@4@@Z @ 0x180104808
 * Callers:
 *     ?KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z @ 0x18008E130 (-KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Initialize@CKsNotificationsMonitor@@QEAAJPEAUIPart@@PEBG@Z @ 0x18001F4B8 (-Initialize@CKsNotificationsMonitor@@QEAAJPEAUIPart@@PEBG@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
CKsNotificationsMonitor *__fastcall KsNotifications_CreateMonitor(char *a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  void (__fastcall ***v7)(_QWORD, GUID *, struct IPart **); // rcx
  struct IPart *v8; // rax
  CKsNotificationsMonitor *v9; // rax
  CKsNotificationsMonitor *v10; // rbx
  CKsNotificationsMonitor *v12; // [rsp+30h] [rbp-10h] BYREF
  struct IPart *v13; // [rsp+38h] [rbp-8h] BYREF

  v7 = (void (__fastcall ***)(_QWORD, GUID *, struct IPart **))*a3;
  v8 = 0LL;
  v13 = 0LL;
  if ( v7 )
  {
    (**v7)(v7, &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9, &v13);
    v8 = v13;
  }
  if ( !v8 )
    goto LABEL_11;
  v9 = (CKsNotificationsMonitor *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  v12 = v9;
  if ( !v9 )
    goto LABEL_11;
  memset_0(v9, 0, 0x60uLL);
  *(_QWORD *)v10 = &CKsNotificationsMonitor::`vftable';
  *((_DWORD *)v10 + 3) = 0;
  *((_QWORD *)v10 + 2) = 0LL;
  *((_DWORD *)v10 + 6) = 1;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)v10 + 32), 0, 0);
  *((_QWORD *)v10 + 9) = 0LL;
  *((_QWORD *)v10 + 11) = 0LL;
  ++CKsNotificationsMonitor::m_cRefAll;
  *(_QWORD *)v10 = &CKsSoftwareNotificationsMonitor::`vftable';
  v12 = 0LL;
  if ( ((int (__fastcall *)(struct IPart *, __int64, GUID *, CKsNotificationsMonitor **))v13->lpVtbl->Activate)(
         v13,
         23LL,
         &GUID_b78d8339_f1c6_40be_89a2_11fbff856316,
         &v12) >= 0
    && (*(int (__fastcall **)(CKsNotificationsMonitor *, void *, __int64))(*(_QWORD *)v12 + 24LL))(
         v12,
         &gConnectorEnablingInfo,
         3LL) < 0 )
  {
LABEL_10:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v12);
LABEL_11:
    v10 = 0LL;
    goto LABEL_12;
  }
  if ( (int)CKsNotificationsMonitor::Initialize(v10, (struct IUnknown *)v13, a1) < 0 )
  {
    (*(void (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v10 + 16LL))(v10);
    goto LABEL_10;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v12);
LABEL_12:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v13);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(a3);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(a4);
  return v10;
}
