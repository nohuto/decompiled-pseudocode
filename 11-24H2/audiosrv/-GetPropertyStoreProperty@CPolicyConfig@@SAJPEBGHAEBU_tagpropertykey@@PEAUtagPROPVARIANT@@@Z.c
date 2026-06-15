/*
 * XREFs of ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180106258
 * Callers:
 *     ?IsExclusiveModeDisabled@@YAHPEBG@Z @ 0x18010D2D0 (-IsExclusiveModeDisabled@@YAHPEBG@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180050180 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetPropertyStoreProperty(
        const unsigned __int16 *a1,
        __int64 a2,
        const struct _tagpropertykey *a3,
        struct tagPROPVARIANT *a4)
{
  int PropertyStoreProperty; // ebx
  struct IMMDevice *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  PropertyStoreProperty = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, const unsigned __int16 *, struct IMMDevice **))g_DeviceEnumerator->lpVtbl->GetDevice)(
                            g_DeviceEnumerator,
                            a1,
                            &v7);
  if ( PropertyStoreProperty < 0
    || (PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty(v7, 0, &PKEY_Endpoint_AllowExclusive, a4),
        PropertyStoreProperty < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetPropertyStoreProperty", 2014, PropertyStoreProperty);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v7);
  return (unsigned int)PropertyStoreProperty;
}
