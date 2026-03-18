/*
 * XREFs of ?UpdatePowerNotifications@CComposition@@QEAAJXZ @ 0x180254B48
 * Callers:
 *     ?SetCompositionCapabilities@CComposition@@QEAAXAEBUCOMPOSITION_CAPABILITY_INFO@@@Z @ 0x180226BA0 (-SetCompositionCapabilities@CComposition@@QEAAXAEBUCOMPOSITION_CAPABILITY_INFO@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AKPEAX@Z$1?PowerSettingUnregisterNotification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180254C60 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AKPEAX@Z$1-PowerSettingUnregisterNotification@@.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AKPEAX@Z$1?PowerSettingUnregisterNotification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18025A67C (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AKPEAX@Z$1-PowerSett.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SustainabilityFixes_Q3@@@details@wil@@QEAA_NXZ @ 0x18026678C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SustainabilityFixes_Q3@@@details@.c)
 */

__int64 __fastcall CComposition::UpdatePowerNotifications(CComposition *this)
{
  signed int v2; // eax
  signed int v3; // ebx
  __int64 v4; // rdx
  signed int v6; // eax
  _QWORD Recipient[2]; // [rsp+20h] [rbp-30h] BYREF
  char *v8; // [rsp+30h] [rbp-20h] BYREF
  HPOWERNOTIFY RegistrationHandle; // [rsp+38h] [rbp-18h] BYREF
  char v10; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  if ( *((_DWORD *)this + 1629) )
  {
    if ( !*((_QWORD *)this + 809) )
    {
      Recipient[1] = 0LL;
      Recipient[0] = CComposition::s_PowerNotification;
      RegistrationHandle = 0LL;
      v8 = (char *)this + 6472;
      v10 = 1;
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SustainabilityFixes_Q3>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SustainabilityFixes_Q3>::GetImpl'::`2'::impl) )
      {
        v2 = PowerSettingRegisterNotification(&GUID_ENERGY_SAVER_STATUS, 2u, Recipient, &RegistrationHandle);
        v3 = v2;
        if ( v2 > 0 )
          v3 = (unsigned __int16)v2 | 0x80070000;
        wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,unsigned long (*)(void *),&unsigned long PowerSettingUnregisterNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,unsigned long (*)(void *),&unsigned long PowerSettingUnregisterNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>(&v8);
        if ( v3 < 0 )
        {
          v4 = 2974LL;
LABEL_8:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v4,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\composition.cpp",
            (const char *)(unsigned int)v3);
          return (unsigned int)v3;
        }
      }
      else
      {
        v6 = PowerSettingRegisterNotification(&GUID_POWER_SAVING_STATUS, 2u, Recipient, &RegistrationHandle);
        v3 = v6;
        if ( v6 > 0 )
          v3 = (unsigned __int16)v6 | 0x80070000;
        wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,unsigned long (*)(void *),&unsigned long PowerSettingUnregisterNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,unsigned long (*)(void *),&unsigned long PowerSettingUnregisterNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>(&v8);
        if ( v3 < 0 )
        {
          v4 = 2982LL;
          goto LABEL_8;
        }
      }
    }
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,unsigned long (*)(void *),&unsigned long PowerSettingUnregisterNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (char *)this + 6472,
      0LL);
    *((_BYTE *)this + 6495) = 0;
  }
  return 0LL;
}
