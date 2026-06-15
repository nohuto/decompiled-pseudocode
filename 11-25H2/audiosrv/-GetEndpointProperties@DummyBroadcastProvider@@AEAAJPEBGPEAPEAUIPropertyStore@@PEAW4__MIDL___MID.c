/*
 * XREFs of ?GetEndpointProperties@DummyBroadcastProvider@@AEAAJPEBGPEAPEAUIPropertyStore@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800F7648
 * Callers:
 *     _lambda_5376a2af323ddc5a5b83ae59d60facbc_::operator() @ 0x1800F68B0 (_lambda_5376a2af323ddc5a5b83ae59d60facbc_--operator().c)
 *     ?OnMulticastChildSessionDescriptorKeyChanged@DummyBroadcastProvider@@AEAAJPEBG@Z @ 0x1800F79F8 (-OnMulticastChildSessionDescriptorKeyChanged@DummyBroadcastProvider@@AEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DummyBroadcastProvider::GetEndpointProperties(
        DummyBroadcastProvider *this,
        const unsigned __int16 *a2,
        struct IPropertyStore **a3,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *a4)
{
  HRESULT (__stdcall *GetDevice)(IMMDeviceEnumerator *, LPCWSTR, IMMDevice **); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v13[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  DummyBroadcastProvider *v15; // [rsp+50h] [rbp+20h] BYREF

  v15 = this;
  v13[0] = 0LL;
  GetDevice = g_DeviceEnumerator->lpVtbl->GetDevice;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(v13);
  v8 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, const unsigned __int16 *, __int64 *))GetDevice)(
         g_DeviceEnumerator,
         a2,
         v13);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v15 = 0LL;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v15);
    v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, DummyBroadcastProvider **))v13[0])(
            v13[0],
            &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
            &v15);
    v9 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(DummyBroadcastProvider *, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *))(*(_QWORD *)v15 + 24LL))(
              v15,
              a4);
      v9 = v10;
      if ( v10 >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IPropertyStore **))(*(_QWORD *)v13[0] + 32LL))(
                v13[0],
                0LL,
                a3);
        v9 = v10;
        if ( v10 >= 0 )
        {
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
          v9 = 0;
          goto LABEL_11;
        }
        v11 = 524LL;
      }
      else
      {
        v11 = 522LL;
      }
    }
    else
    {
      v11 = 521LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\dummybroadcastprovider.cpp",
      (const char *)(unsigned int)v10);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x206,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\dummybroadcastprovider.cpp",
      (const char *)(unsigned int)v8);
  }
LABEL_11:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v13);
  return v9;
}
