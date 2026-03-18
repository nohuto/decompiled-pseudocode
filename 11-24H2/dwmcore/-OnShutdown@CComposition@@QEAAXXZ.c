/*
 * XREFs of ?OnShutdown@CComposition@@QEAAXXZ @ 0x1800ED3DC
 * Callers:
 *     ?MainCompositionThreadLoop@CConnection@@AEAAJXZ @ 0x1800ED258 (-MainCompositionThreadLoop@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180043EE4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?SetEvent@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBAXXZ @ 0x18007BF7C (-SetEvent@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@w.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?clear@?$vector_facade@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800ED238 (-clear@-$vector_facade@V-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V-$buffer_impl@.c)
 *     ?ReleaseExclusive@CTreeLock@@QEAAXXZ @ 0x1800ED598 (-ReleaseExclusive@CTreeLock@@QEAAXXZ.c)
 *     ?AcquireExclusive@CTreeLock@@QEAAXXZ @ 0x1800ED658 (-AcquireExclusive@CTreeLock@@QEAAXXZ.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x1800ED728 (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EE36C (-InternalRelease@-$ComPtr@VDataProviderManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DestroyDelayDeleteResources@CComposition@@QEAAXXZ @ 0x1801335D0 (-DestroyDelayDeleteResources@CComposition@@QEAAXXZ.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18019E1F4 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x180248228 (-InternalRelease@-$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDeviceManager@@QEAV12@AEAV?$allocator@VDeviceInfo@CDeviceManager@@@0@@Z @ 0x18024B654 (--$_Destroy_range@V-$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDevice.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CComposition::OnShutdown(CComposition *this)
{
  CTreeLock *v1; // rbp
  __int64 v3; // rdx
  __int64 v4; // r8
  CCachedVisualImage *v5; // rcx
  __int64 v6; // rcx
  __int64 *v7; // rcx
  __int64 *v8; // rdx
  __int64 v9; // rbx

  v1 = (CComposition *)((char *)this + 5704);
  *((_BYTE *)this + 6474) = 1;
  CTreeLock::AcquireExclusive((CComposition *)((char *)this + 5704));
  detail::vector_facade<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>,8,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 724);
  CComposition::DestroyDelayDeleteResources(this);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cpHalfBlurNineGrid);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurNineGrid);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&CProjectedShadow::s_cp2xBlurNineGrid);
  v5 = CProjectedShadow::s_cp2xBlurSurface;
  CProjectedShadow::s_cp2xBlurSurface = 0LL;
  if ( v5 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v5, v3, v4);
  v6 = CCommonRenderingEffectFactory::s_cpSolidColorEffect;
  CCommonRenderingEffectFactory::s_cpSolidColorEffect = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = (__int64 *)*((_QWORD *)this + 812);
  v8 = (__int64 *)*((_QWORD *)this + 813);
  if ( v7 != v8 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
      v7,
      v8);
    *((_QWORD *)this + 813) = *((_QWORD *)this + 812);
  }
  _SetEvent___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEBAXXZ((HANDLE *)this + 801);
  if ( qword_1803FAAE8 != (_QWORD)xmmword_1803FAAF0 )
  {
    std::_Destroy_range<std::allocator<CDeviceManager::DeviceInfo>>();
    *(_QWORD *)&xmmword_1803FAAF0 = qword_1803FAAE8;
  }
  CComposition::ReleaseNotificationChannels(this);
  while ( *((_DWORD *)this + 216) )
    CComposition::CloseChannel(
      this,
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 105) + 8LL * (unsigned int)(*((_DWORD *)this + 216) - 1)) + 24LL));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 799) + 64LL))(*((_QWORD *)this + 799));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 799) + 16LL))(*((_QWORD *)this + 799));
  *((_QWORD *)this + 799) = 0LL;
  v9 = *((_QWORD *)this + 800);
  Microsoft::WRL::ComPtr<DataProviderRegistrarConnection>::InternalRelease(v9 + 24);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)(v9 + 32));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(v9 + 16));
  Microsoft::WRL::ComPtr<DataProviderManager>::InternalRelease((char *)this + 6400);
  CTreeLock::ReleaseExclusive(v1);
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 712) + 24LL))(*((_QWORD *)this + 712), 5LL);
}
