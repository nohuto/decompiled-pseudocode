/*
 * XREFs of ?OnAudioMirrorEnabledChange@CMonitorManager@@AEAAXXZ @ 0x18011A6F4
 * Callers:
 *     wistd::__function::__func__lambda_ca79050dc30379a8d322bb4b6dd56097__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x180117740 (wistd--__function--__func__lambda_ca79050dc30379a8d322bb4b6dd56097__void___cdecl(enum_wil--Regis.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180019F28 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A320 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x18006FC90 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?IsMonitorMirrorEligible@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z @ 0x18011A580 (-IsMonitorMirrorEligible@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CMonitorManager::OnAudioMirrorEnabledChange(CMonitorManager *this)
{
  char v2; // r14
  unsigned int i; // esi
  __int64 v4; // rbx
  int (__fastcall *v5)(__int64, _QWORD, struct IMMDevice **); // rdi
  struct IMMDevice *v6; // rbx
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rdi
  struct IMMDevice *v8; // rbx
  HRESULT (__stdcall *OpenPropertyStore)(IMMDevice *, DWORD, IPropertyStore **); // rdi
  __int64 v10; // rcx
  CMonitorManager *v11; // rcx
  unsigned __int16 *v12; // [rsp+30h] [rbp-48h] BYREF
  struct _tagpropertykey v13; // [rsp+38h] [rbp-40h] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp-18h]
  unsigned int v16; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v17; // [rsp+C8h] [rbp+50h] BYREF
  struct IMMDevice *v18; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v19; // [rsp+D8h] [rbp+60h] BYREF

  v19 = 0LL;
  v16 = 0;
  v2 = *((_BYTE *)this + 352);
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**((_QWORD **)this + 8) + 24LL))(
         *((_QWORD *)this + 8),
         0LL,
         15LL,
         &v19) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 24LL))(v19, &v16) >= 0 )
  {
    for ( i = 0; i < v16; ++i )
    {
      v18 = 0LL;
      v17 = 0LL;
      v12 = 0LL;
      *(_OWORD *)pvar = 0LL;
      v15 = 0LL;
      v4 = v19;
      v5 = *(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v19 + 32LL);
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v18);
      if ( v5(v4, i, &v18) >= 0 )
      {
        v6 = v18;
        GetId = v18->lpVtbl->GetId;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          (void **)&v12,
          0LL);
        if ( ((int (__fastcall *)(struct IMMDevice *, unsigned __int16 **))GetId)(v6, &v12) >= 0 )
        {
          v8 = v18;
          OpenPropertyStore = v18->lpVtbl->OpenPropertyStore;
          v10 = v17;
          v17 = 0LL;
          if ( v10 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          if ( ((int (__fastcall *)(struct IMMDevice *, __int64, __int64 *))OpenPropertyStore)(v8, 2LL, &v17) >= 0
            && CMonitorManager::IsMonitorMirrorEligible(v11, v18)
            && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v17 + 40LL))(
                 v17,
                 &PKEY_MonitorEnabled,
                 pvar) >= 0
            && (LOWORD(pvar[0]) != 11 || (LOWORD(pvar[1]) == 0xFFFF) != v2) )
          {
            LOWORD(pvar[0]) = 11;
            if ( v2 )
              LOWORD(pvar[1]) = -1;
            else
              LOWORD(pvar[1]) = 0;
            if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v17 + 48LL))(
                   v17,
                   &PKEY_MonitorEnabled,
                   pvar) >= 0 )
              CMonitorManager::OnMonitorEnabledChanged(this, v12, &v13);
          }
        }
      }
      PropVariantClear(pvar);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v12);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
}
