/*
 * XREFs of ?SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18008A9C0
 * Callers:
 *     ?SetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180126B70 (-SetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetEndpointLevel@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_J@Z @ 0x180043CD0 (-GetEndpointLevel@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_J@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180047F60 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?IsAvoidAsDefault@@YAHPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180048280 (-IsAvoidAsDefault@@YAHPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800486D0 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?SetEndpointLevels@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@_K@Z @ 0x18004AC4C (-SetEndpointLevels@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@_K@Z.c)
 *     ??4?$CComQIPtr@UIMMEndpointInternal@@$1?_GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21@@3U__s_GUID@@B@ATL@@QEAAPEAUIMMEndpointInternal@@PEAUIUnknown@@@Z @ 0x18004ACF4 (--4-$CComQIPtr@UIMMEndpointInternal@@$1-_GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21@@3U__s_GUID@@.c)
 *     ?IsNeverSetAsDefault@@YAHPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180051F3C (-IsNeverSetAsDefault@@YAHPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL.c)
 *     ?RemoveAvoidAsDefaultProperty@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180073258 (-RemoveAvoidAsDefaultProperty@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@.c)
 *     ?IsEqualObject@?$CComPtrBase@UIMMEndpoint@@@ATL@@QEAA_NPEAUIUnknown@@@Z @ 0x1800A0A20 (-IsEqualObject@-$CComPtrBase@UIMMEndpoint@@@ATL@@QEAA_NPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CDefaultDeviceManager::SetDefaultEndpoint(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  int v7; // ebx
  __int64 v8; // rdi
  unsigned int i; // r14d
  __int64 v10; // r8
  __int64 *v11; // rcx
  __int64 v12; // r14
  unsigned int v13; // edi
  __int64 v14; // r8
  __int64 v15; // r8
  unsigned int v16; // edi
  void (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-29h] BYREF
  void (__fastcall ***v19)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp-21h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-19h] BYREF
  struct IUnknown *v21; // [rsp+50h] [rbp-11h] BYREF
  struct IUnknown *v22; // [rsp+58h] [rbp-9h] BYREF
  unsigned int v23; // [rsp+60h] [rbp-1h] BYREF
  LPVOID ppv; // [rsp+68h] [rbp+7h] BYREF
  struct IUnknown *v25; // [rsp+70h] [rbp+Fh] BYREF
  PROPVARIANT pvar[2]; // [rsp+78h] [rbp+17h] BYREF
  __int64 v27; // [rsp+88h] [rbp+27h]
  unsigned int v28; // [rsp+C8h] [rbp+67h] BYREF
  int v29; // [rsp+CCh] [rbp+6Bh]

  v29 = HIDWORD(a1);
  ppv = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  v21 = 0LL;
  v20 = 0;
  v28 = 0;
  *(_OWORD *)pvar = 0LL;
  v27 = 0LL;
  LOWORD(pvar[0]) = 11;
  LOWORD(pvar[1]) = -1;
  v7 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv);
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(LPVOID, __int64, struct IUnknown **))(*(_QWORD *)ppv + 40LL))(ppv, a2, &v22);
    if ( v7 >= 0 )
    {
      if ( !(unsigned __int8)ATL::CComPtrBase<IMMEndpoint>::IsEqualObject(&v25, v22) )
        ATL::AtlComQIPtrAssign(&v25, v22, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
      if ( !v25 )
        goto LABEL_6;
      v7 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v25->lpVtbl[1].QueryInterface)(v25, &v28);
      if ( v7 >= 0 )
      {
        if ( (unsigned int)IsNeverSetAsDefault((__int64)v22, v28, a3) )
        {
LABEL_6:
          v7 = -2147467259;
          goto LABEL_57;
        }
        RemoveAvoidAsDefaultProperty((__int64)v22, v28, a3);
        v7 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, struct IUnknown **))(*(_QWORD *)ppv + 24LL))(
               ppv,
               v28,
               1LL,
               &v21);
        if ( v7 >= 0 )
        {
          v7 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v21->lpVtbl[1].QueryInterface)(v21, &v20);
          if ( v7 >= 0 )
          {
            if ( v20 )
            {
              v8 = -1LL;
              for ( i = 0; i < v20; ++i )
              {
                v19 = 0LL;
                v18 = 0LL;
                v7 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, _QWORD))v21->lpVtbl[1].AddRef)(v21, i, &v19);
                if ( v7 < 0 )
                {
                  v11 = (__int64 *)&v19;
                  goto LABEL_23;
                }
                if ( !(unsigned int)IsNeverSetAsDefault((__int64)v19, v28, a3)
                  && (int)GetEndpointLevel(v19, a3, &v18) >= 0
                  && v8 <= (__int64)v18 )
                {
                  v8 = (__int64)v18;
                }
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
              }
              if ( v8 == -1 )
                v10 = 1LL;
              else
                v10 = v8 + 2;
              v12 = 0LL;
              if ( v8 != -1 )
                v12 = v8 + 1;
              v7 = SetEndpointLevels((__int64)v22, a3, v10);
              if ( v7 >= 0 )
              {
                v13 = 0;
                if ( v20 )
                {
                  while ( 1 )
                  {
                    v18 = 0LL;
                    v19 = 0LL;
                    v7 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, _QWORD))v21->lpVtbl[1].AddRef)(
                           v21,
                           v13,
                           &v18);
                    if ( v7 < 0 )
                      break;
                    if ( !(unsigned int)IsNeverSetAsDefault((__int64)v18, v28, a3) )
                    {
                      if ( (unsigned int)IsAvoidAsDefault((__int64)v18, v28, a3) )
                      {
                        v7 = SetEndpointLevels((__int64)v18, a3, 0LL);
                        if ( v7 < 0 )
                          break;
                      }
                      if ( (int)GetEndpointLevel(v18, a3, &v19) < 0 )
                      {
                        v19 = 0LL;
                        v23 = 0;
                        ATL::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21>::operator=(
                          (__int64 *)&v19,
                          v18,
                          v14);
                        if ( !v19 )
                        {
                          v7 = -2147024809;
LABEL_61:
                          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
                          break;
                        }
                        v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned int *))(*v19)[9])(v19, a3, &v23);
                        if ( v7 < 0 )
                          goto LABEL_61;
                        v15 = v12;
                        if ( v23 < 0x60000000 )
                          v15 = 0LL;
                        v7 = SetEndpointLevels((__int64)v18, a3, v15);
                        if ( v7 < 0 )
                          goto LABEL_61;
                        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
                      }
                    }
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
                    if ( ++v13 >= v20 )
                      goto LABEL_41;
                  }
LABEL_62:
                  v11 = (__int64 *)&v18;
LABEL_23:
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v11);
                  goto LABEL_57;
                }
LABEL_41:
                if ( v21 )
                  ATL::AtlComPtrAssign(&v21, 0LL);
                v7 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, struct IUnknown **))(*(_QWORD *)ppv + 24LL))(
                       ppv,
                       v28,
                       14LL,
                       &v21);
                if ( v7 >= 0 )
                {
                  v7 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v21->lpVtbl[1].QueryInterface)(
                         v21,
                         &v20);
                  if ( v7 >= 0 )
                  {
                    v16 = 0;
                    if ( v20 )
                    {
                      do
                      {
                        v18 = 0LL;
                        v19 = 0LL;
                        v7 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, _QWORD))v21->lpVtbl[1].AddRef)(
                               v21,
                               v16,
                               &v18);
                        if ( v7 < 0 )
                          goto LABEL_62;
                        if ( !(unsigned int)IsNeverSetAsDefault((__int64)v18, v28, a3)
                          && (int)GetEndpointLevel(v18, a3, &v19) >= 0
                          && (__int64)v19 >= v12 )
                        {
                          v7 = SetEndpointLevels((__int64)v18, a3, (__int64)v19 + 1);
                          if ( v7 < 0 )
                            goto LABEL_62;
                        }
                        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
                      }
                      while ( ++v16 < v20 );
                    }
                    if ( !v28 && !a3 )
                    {
                      v19 = 0LL;
                      v7 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, _QWORD))v22->lpVtbl[1].AddRef)(
                             v22,
                             1LL,
                             &v19);
                      if ( v7 >= 0 )
                        v7 = ((__int64 (__fastcall *)(_QWORD, void *, PROPVARIANT *))(*v19)[6])(
                               v19,
                               &PKEY_AudioEndpoint_NoDefaultChangeUserPrompt,
                               pvar);
                      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
                    }
                  }
                }
              }
            }
            else
            {
              v7 = -2147023728;
            }
          }
        }
      }
    }
  }
LABEL_57:
  PropVariantClear(pvar);
  if ( v7 >= 0 )
    *a4 = v28;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
  return (unsigned int)v7;
}
