/*
 * XREFs of ??$Initialize@USecurityPolicyEveryoneLocal@ServiceModuleBase@Internal@Windows@@$01UDefaultServerDescriptor@34@@ServiceModuleBase@Internal@Windows@@QEAAJEEEEPEAXK@Z @ 0x1800CB5E8
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800CF034 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Uninitialize@ServiceModuleBase@Internal@Windows@@QEAAJXZ @ 0x1800CECC0 (-Uninitialize@ServiceModuleBase@Internal@Windows@@QEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUCO_MTA_USAGE_COOKIE__@@P6AJPEAU1@@Z$1?CoDecrementMTAUsage@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUCO_MTA_USAGE_COOKIE__@@@Z @ 0x1800CFCBC (-reset@-$unique_storage@U-$resource_policy@PEAUCO_MTA_USAGE_COOKIE__@@P6AJPEAU1@@Z$1-CoDecrement.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Windows::Internal::ServiceModuleBase::Initialize<Windows::Internal::ServiceModuleBase::SecurityPolicyEveryoneLocal,2,Windows::Internal::DefaultServerDescriptor>(
        Windows::Internal::ServiceModuleBase *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v5; // eax
  HRESULT Instance; // eax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  wil::details::unique_storage<wil::details::resource_policy<CO_MTA_USAGE_COOKIE__ *,long (*)(CO_MTA_USAGE_COOKIE__ *),&long CoDecrementMTAUsage(CO_MTA_USAGE_COOKIE__ *),wistd::integral_constant<unsigned __int64,0>,CO_MTA_USAGE_COOKIE__ *,CO_MTA_USAGE_COOKIE__ *,0,std::nullptr_t>>::reset(
    (char *)this + 8,
    0LL);
  v2 = CoIncrementMTAUsage((char *)this + 8);
  v3 = v2;
  *((_DWORD *)this + 4) = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x63,
      (int)"onecore\\internal\\com\\inc\\ComServiceHelper.h",
      (const char *)(unsigned int)v2);
    Windows::Internal::ServiceModuleBase::Uninitialize(this);
    return v3;
  }
  v5 = (*(__int64 (__fastcall **)(Windows::Internal::ServiceModuleBase *))(*(_QWORD *)this + 32LL))(this);
  v3 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B,
      (int)"onecore\\internal\\com\\inc\\ComServiceHelper.h",
      (const char *)(unsigned int)v5);
    Windows::Internal::ServiceModuleBase::Uninitialize(this);
    return v3;
  }
  (*(void (__fastcall **)(Windows::Internal::ServiceModuleBase *))(*(_QWORD *)this + 16LL))(this);
  *((_BYTE *)this + 20) = 1;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 3);
  Instance = CoCreateInstance(
               &CLSID_ContextSwitcher,
               0LL,
               1u,
               &GUID_000001da_0000_0000_c000_000000000046,
               (LPVOID *)this + 3);
  v3 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8D,
      (int)"onecore\\internal\\com\\inc\\ComServiceHelper.h",
      (const char *)(unsigned int)Instance);
    Windows::Internal::ServiceModuleBase::Uninitialize(this);
    return v3;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(struct tagComCallData *), Windows::Internal::ServiceModuleBase *, GUID *, int, _QWORD))(**((_QWORD **)this + 3) + 24LL))(
         *((_QWORD *)this + 3),
         Windows::Internal::ServiceModuleBase::ConnectCallbackThunk,
         this,
         &IID_IContextCallback,
         5,
         0LL);
  v3 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x90,
      (int)"onecore\\internal\\com\\inc\\ComServiceHelper.h",
      (const char *)(unsigned int)v7);
    Windows::Internal::ServiceModuleBase::Uninitialize(this);
    return v3;
  }
  return 0LL;
}
