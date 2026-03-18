/*
 * XREFs of ?OnShutdown@CComposition@@QEAAXXZ @ 0x1801BCE1C
 * Callers:
 *     ?MainCompositionThreadLoop@CConnection@@AEAAJXZ @ 0x1801BCC98 (-MainCompositionThreadLoop@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18003082C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D64C (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?SetEvent@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBAXXZ @ 0x1800ADF5C (-SetEvent@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@w.c)
 *     ?DestroyDelayDeleteResources@CComposition@@QEAAXXZ @ 0x180132F20 (-DestroyDelayDeleteResources@CComposition@@QEAAXXZ.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1801989A4 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?ReleaseExclusive@CTreeLock@@QEAAXXZ @ 0x1801BCFD8 (-ReleaseExclusive@CTreeLock@@QEAAXXZ.c)
 *     ?AcquireExclusive@CTreeLock@@QEAAXXZ @ 0x1801BD098 (-AcquireExclusive@CTreeLock@@QEAAXXZ.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x1801BD168 (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1801BD1C4 (-InternalRelease@-$ComPtr@VDataProviderManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?clear@?$vector_facade@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801BD1E4 (-clear@-$vector_facade@V-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V-$buffer_impl@.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18025336C (-InternalRelease@-$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDeviceManager@@QEAV12@AEAV?$allocator@VDeviceInfo@CDeviceManager@@@0@@Z @ 0x180256A24 (--$_Destroy_range@V-$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDevice.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CComposition::OnShutdown(CComposition *this)
{
  CTreeLock *v1; // rbp
  CResource *v3; // rcx
  __int64 v4; // rcx
  __int64 *v5; // rcx
  __int64 *v6; // rdx
  __int64 v7; // rbx

  v1 = (CComposition *)((char *)this + 5704);
  *((_BYTE *)this + 6497) = 1;
  CTreeLock::AcquireExclusive((CComposition *)((char *)this + 5704));
  detail::vector_facade<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>,8,1,detail::liberal_expansion_policy>>::clear((char *)this + 5792);
  CComposition::DestroyDelayDeleteResources((struct _RTL_CRITICAL_SECTION *)this);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cpHalfBlurNineGrid);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurNineGrid);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&CProjectedShadow::s_cp2xBlurNineGrid);
  v3 = CProjectedShadow::s_cp2xBlurSurface;
  CProjectedShadow::s_cp2xBlurSurface = 0LL;
  if ( v3 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v3);
  v4 = CCommonRenderingEffectFactory::s_cpSolidColorEffect;
  CCommonRenderingEffectFactory::s_cpSolidColorEffect = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = (__int64 *)*((_QWORD *)this + 815);
  v6 = (__int64 *)*((_QWORD *)this + 816);
  if ( v5 != v6 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
      v5,
      v6);
    *((_QWORD *)this + 816) = *((_QWORD *)this + 815);
  }
  _SetEvent___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEBAXXZ((HANDLE *)this + 804);
  if ( qword_180406B38 != (_QWORD)xmmword_180406B40 )
  {
    std::_Destroy_range<std::allocator<CDeviceManager::DeviceInfo>>();
    *(_QWORD *)&xmmword_180406B40 = qword_180406B38;
  }
  CComposition::ReleaseNotificationChannels(this);
  while ( *((_DWORD *)this + 216) )
    CComposition::CloseChannel(
      this,
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 105) + 8LL * (unsigned int)(*((_DWORD *)this + 216) - 1)) + 24LL));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 802) + 64LL))(*((_QWORD *)this + 802));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 802) + 16LL))(*((_QWORD *)this + 802));
  *((_QWORD *)this + 802) = 0LL;
  v7 = *((_QWORD *)this + 803);
  Microsoft::WRL::ComPtr<DataProviderRegistrarConnection>::InternalRelease(v7 + 24);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)(v7 + 32));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(v7 + 16));
  Microsoft::WRL::ComPtr<DataProviderManager>::InternalRelease((char *)this + 6424);
  CTreeLock::ReleaseExclusive(v1);
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 712) + 24LL))(*((_QWORD *)this + 712), 5LL);
}
