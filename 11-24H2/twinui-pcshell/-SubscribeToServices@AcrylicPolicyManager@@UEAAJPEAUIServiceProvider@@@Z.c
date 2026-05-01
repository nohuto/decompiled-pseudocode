/*
 * XREFs of ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801130F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterForCompositionCapabilitiesChange@AcrylicPolicyManager@@AEAAJXZ @ 0x180113310 (-RegisterForCompositionCapabilitiesChange@AcrylicPolicyManager@@AEAAJXZ.c)
 *     ??$Register@UIImmersiveWindowMessageService@@P81@EAAJIPEAUIImmersiveWindowMessageNotification@@PEAK@ZP81@EAAJK@ZHPEAVAcrylicPolicyManager@@@SmartCookie@@QEAAJPEAUIImmersiveWindowMessageService@@P81@EAAJIPEAUIImmersiveWindowMessageNotification@@PEAK@ZP81@EAAJK@ZHPEAVAcrylicPolicyManager@@@Z @ 0x180113564 (--$Register@UIImmersiveWindowMessageService@@P81@EAAJIPEAUIImmersiveWindowMessageNotification@@P.c)
 *     ?IsBatterySaverEnabled@@YA_NXZ @ 0x1801138DC (-IsBatterySaverEnabled@@YA_NXZ.c)
 *     ?RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ @ 0x180113A28 (-RegisterForEnergySaverStateChange@AcrylicPolicyManager@@AEAAJXZ.c)
 *     ?_IsDeviceCapableOfAcrylic@AcrylicPolicyManager@@CA_NXZ @ 0x180113B84 (-_IsDeviceCapableOfAcrylic@AcrylicPolicyManager@@CA_NXZ.c)
 *     ?RegisterForTransparencyChange@AcrylicPolicyManager@@AEAAJXZ @ 0x1802A358C (-RegisterForTransparencyChange@AcrylicPolicyManager@@AEAAJXZ.c)
 *     ?UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z @ 0x1802AB300 (-UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z.c)
 *     ?_IsHighContrast@AcrylicPolicyManager@@CA_NXZ @ 0x1802C73E8 (-_IsHighContrast@AcrylicPolicyManager@@CA_NXZ.c)
 *     ?_IsTransparencyEnabled@AcrylicPolicyManager@@CA_NXZ @ 0x1802C8DBC (-_IsTransparencyEnabled@AcrylicPolicyManager@@CA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AcrylicPolicyManager::SubscribeToServices(AcrylicPolicyManager *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  int updated; // eax
  __int64 v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v20; // [rsp+48h] [rbp+18h] BYREF

  v20 = 0LL;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
         a2,
         &IID_IImmersiveWindowMessageService,
         &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
         &v20);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x73,
      (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)v5);
    v7 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return v6;
  }
  v8 = AcrylicPolicyManager::RegisterForCompositionCapabilitiesChange((AcrylicPolicyManager *)((char *)this - 48));
  v6 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74,
      (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)v8);
    v11 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return v6;
  }
  v12 = SmartCookie::Register<IImmersiveWindowMessageService,long (IImmersiveWindowMessageService::*)(unsigned int,IImmersiveWindowMessageNotification *,unsigned long *),long (IImmersiveWindowMessageService::*)(unsigned long),int,AcrylicPolicyManager *>(
          (int)this - 48 + 200,
          v20,
          v9,
          v10);
  v6 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD8,
      (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)v12);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)v6);
    v13 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    return v6;
  }
  v14 = AcrylicPolicyManager::RegisterForTransparencyChange((AcrylicPolicyManager *)((char *)this - 48));
  v6 = v14;
  if ( v14 < 0 )
  {
    v15 = 119LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)v14);
LABEL_23:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
    return v6;
  }
  v14 = AcrylicPolicyManager::RegisterForEnergySaverStateChange((AcrylicPolicyManager *)((char *)this - 48));
  v6 = v14;
  if ( v14 < 0 )
  {
    v15 = 120LL;
    goto LABEL_17;
  }
  *((_BYTE *)this + 307) = IsBatterySaverEnabled();
  *((_BYTE *)this + 308) = AcrylicPolicyManager::_IsDeviceCapableOfAcrylic();
  *((_BYTE *)this + 305) = AcrylicPolicyManager::_IsHighContrast();
  *((_BYTE *)this + 306) = AcrylicPolicyManager::_IsTransparencyEnabled();
  updated = AcrylicPolicyManager::UpdateAcrylicState((AcrylicPolicyManager *)((char *)this - 48), 1);
  v6 = updated;
  if ( updated >= 0 )
  {
    v6 = 0;
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7F,
    (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
    (const char *)(unsigned int)updated);
  v17 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return v6;
}
