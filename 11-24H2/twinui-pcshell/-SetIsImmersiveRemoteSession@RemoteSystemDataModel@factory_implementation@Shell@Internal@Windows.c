/*
 * XREFs of ?SetIsImmersiveRemoteSession@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAX_N@Z @ 0x180650CA4
 * Callers:
 *     ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUUri@Foundation@56@_N@Z @ 0x18064F958 (-RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Window.c)
 *     ?UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z @ 0x180652280 (-UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Wind.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180065888 (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1800EFE54 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801CF810 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     CapabilityHelper::CreateSecurityAttributesForUWPCapability_0 @ 0x18064B124 (CapabilityHelper--CreateSecurityAttributesForUWPCapability_0.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180650594 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout@@@detai.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetIsImmersiveRemoteSession(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *this,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // edi
  LSTATUS v6; // ebx
  LSTATUS v7; // eax
  struct _ACL *v8; // rax
  signed int v9; // eax
  const char *v10; // r9
  int dwOptions; // [rsp+20h] [rbp-88h]
  WINBOOL bDaclPresent; // [rsp+50h] [rbp-58h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-50h] BYREF
  PACL pDacl; // [rsp+60h] [rbp-48h] BYREF
  HKEY *p_hKey; // [rsp+68h] [rbp-40h] BYREF
  HKEY phkResult; // [rsp+70h] [rbp-38h] BYREF
  char v17; // [rsp+78h] [rbp-30h]
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+80h] [rbp-28h] BYREF
  struct _SECURITY_ATTRIBUTES SecurityAttributes; // [rsp+88h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  int Data; // [rsp+C0h] [rbp+18h] BYREF
  WINBOOL bDaclDefaulted; // [rsp+C8h] [rbp+20h] BYREF

  v4 = a2;
  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::ReportUsage(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::GetImpl'::`2'::impl,
      1u,
      a3,
      a4);
    *((_BYTE *)this + 40) = v4;
    hKey = 0LL;
    CapabilityHelper::CreateSecurityAttributesForUWPCapability_0((__int64)&pSecurityDescriptor);
    p_hKey = &hKey;
    phkResult = 0LL;
    v17 = 1;
    v6 = RegCreateKeyExW(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\RemoteSystemIntegration",
           0,
           0LL,
           1u,
           0xF003Fu,
           &SecurityAttributes,
           &phkResult,
           0LL);
    wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>>((__int64)&p_hKey);
    if ( !v6 )
    {
      Data = v4;
      v7 = RegSetValueExW(hKey, L"IsImmersiveRemoteSession", 0, 4u, (const BYTE *)&Data, 4u);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x440,
          (int)"pcshell\\twinui\\cloudpc\\lib\\remotesystemdatamodel.cpp",
          (const char *)(unsigned int)v7,
          dwOptions);
      pDacl = 0LL;
      bDaclPresent = 0;
      bDaclDefaulted = 0;
      if ( GetSecurityDescriptorDacl(pSecurityDescriptor, &bDaclPresent, &pDacl, &bDaclDefaulted) )
      {
        v8 = pDacl;
        if ( !pDacl )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x44A,
            (int)"pcshell\\twinui\\cloudpc\\lib\\remotesystemdatamodel.cpp",
            (const char *)0x8000FFFFLL);
          v8 = pDacl;
        }
        v9 = SetSecurityInfo(hKey, SE_REGISTRY_KEY, 4u, 0LL, 0LL, v8, 0LL);
        if ( v9 > 0 )
          v9 = (unsigned __int16)v9 | 0x80070000;
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x451,
            (int)"pcshell\\twinui\\cloudpc\\lib\\remotesystemdatamodel.cpp",
            (const char *)(unsigned int)v9);
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&pSecurityDescriptor);
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x46F,
      (int)"pcshell\\twinui\\cloudpc\\lib\\remotesystemdatamodel.cpp",
      v10);
  }
}
