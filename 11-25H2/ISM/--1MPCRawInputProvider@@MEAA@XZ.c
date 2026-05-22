/*
 * XREFs of ??1MPCRawInputProvider@@MEAA@XZ @ 0x1800CC940
 * Callers:
 *     ??_GMPCRawInputProvider@@MEAAPEAXI@Z @ 0x1800CCBF0 (--_GMPCRawInputProvider@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180015AA8 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800334CC (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180092B78 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?UnregisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXI@Z @ 0x1800B38B8 (-UnregisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXI@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@ULegacyDeviceInfo@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@0@@Z @ 0x1800CC33C (--$_Destroy_range@V-$allocator@V-$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@YAXPEAV-$share.c)
 *     ??1?$unique_ptr@VMPCHeadMovementDetector@@U?$default_delete@VMPCHeadMovementDetector@@@std@@@std@@QEAA@XZ @ 0x1800CC870 (--1-$unique_ptr@VMPCHeadMovementDetector@@U-$default_delete@VMPCHeadMovementDetector@@@std@@@std.c)
 *     ?InternalRelease@?$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CD11C (-InternalRelease@-$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x1800CE2DC (-Unregister@SpectrumListener@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCRawInputProvider::~MPCRawInputProvider(MPCRawInputProvider *this)
{
  RTL_SRWLOCK *Instance; // rax
  SpectrumListener *v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  __int64 *v7; // rdi
  _QWORD *v8; // r14
  _QWORD *v9; // rbp
  char *v10; // rcx
  __int64 v11; // rcx
  void *v12; // rdx
  int v13; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_QWORD *)this = &MPCRawInputProvider::`vftable';
  Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
  MPC3DStateHelper::UnregisterFor3DCompositorRunningChanged(Instance, *((_DWORD *)this + 21));
  v3 = (SpectrumListener *)*((_QWORD *)this + 6);
  if ( v3 )
    SpectrumListener::Unregister(v3);
  Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease((char *)this + 48);
  if ( *((_QWORD *)this + 9) )
  {
    v4 = *((_QWORD *)this + 8);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 280LL))(v4);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x48,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
          (const char *)(unsigned int)v5);
    }
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 240LL))(*((_QWORD *)this + 8));
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      (const char *)(unsigned int)v6,
      v13);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
  v7 = (__int64 *)((char *)this + 24);
  if ( *((_QWORD *)this + 2) )
  {
    v8 = (_QWORD *)*v7;
    v9 = (_QWORD *)*((_QWORD *)this + 4);
    while ( v8 != v9 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 56LL))(*((_QWORD *)this + 2), *v8);
      v8 += 2;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2);
  v10 = (char *)*((_QWORD *)this + 23);
  if ( v10 )
  {
    std::_Deallocate<16,0>(
      v10,
      (const struct std::nothrow_t *)((__int64)(*((_QWORD *)this + 25) - (_QWORD)v10) >> 6 << 6));
    *((_QWORD *)this + 23) = 0LL;
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
  }
  std::vector<Windows::UI::Color>::_Tidy((__int64)this + 160);
  v11 = *((_QWORD *)this + 17);
  if ( v11 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<LegacyDeviceInfo>>>(v11, *((_QWORD *)this + 18));
    std::_Deallocate<16,0>(
      *((char **)this + 17),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 19) - *((_QWORD *)this + 17)) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    (wil::details **)this + 9,
    v12);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
  std::unique_ptr<MPCHeadMovementDetector>::~unique_ptr<MPCHeadMovementDetector>((_QWORD *)this + 7);
  Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease((char *)this + 48);
  if ( *v7 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<LegacyDeviceInfo>>>(*v7, *((_QWORD *)this + 4));
    std::_Deallocate<16,0>(
      (char *)*v7,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 5) - *((_QWORD *)this + 3)) & 0xFFFFFFFFFFFFFFF0uLL));
    *v7 = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
