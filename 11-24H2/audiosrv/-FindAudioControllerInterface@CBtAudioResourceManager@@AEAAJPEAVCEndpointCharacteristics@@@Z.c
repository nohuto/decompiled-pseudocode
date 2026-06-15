/*
 * XREFs of ?FindAudioControllerInterface@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@@Z @ 0x1800D9BD4
 * Callers:
 *     ?SetRenderEndpoint@CBtAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@@Z @ 0x1800DA190 (-SetRenderEndpoint@CBtAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180019F28 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x180029154 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x18003AFEC (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A320 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CBtAudioResourceManager::FindAudioControllerInterface(
        void **this,
        struct CEndpointCharacteristics *a2)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, void **); // rdi
  int v16; // eax
  HRESULT (__stdcall *GetDevice)(IMMDeviceEnumerator *, LPCWSTR, IMMDevice **); // rbx
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 *v24; // [rsp+30h] [rbp-50h] BYREF
  void *v25; // [rsp+38h] [rbp-48h] BYREF
  __int64 *v26; // [rsp+40h] [rbp-40h] BYREF
  __int64 v27; // [rsp+48h] [rbp-38h] BYREF
  int v28[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v29; // [rsp+58h] [rbp-28h] BYREF
  PROPVARIANT pvar[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v31; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 *v33; // [rsp+B8h] [rbp+38h] BYREF
  __int64 (__fastcall ***v34)(_QWORD, GUID *, __int64 **); // [rsp+C0h] [rbp+40h] BYREF
  __int64 v35; // [rsp+C8h] [rbp+48h] BYREF

  v29 = 0LL;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v29);
  wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>((__int64 *)a2 + 5, &v29);
  *(_QWORD *)v28 = 0LL;
  v4 = *v29;
  *(_QWORD *)v28 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64, _QWORD, int *))(v4 + 24))(
         v29,
         &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
         1LL,
         0LL,
         v28);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v33 = 0LL;
    v7 = **(_QWORD **)v28;
    v33 = 0LL;
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 **))(v7 + 32))(*(_QWORD *)v28, 0LL, &v33);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v34 = 0LL;
      v9 = *v33;
      v34 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 **)))(v9 + 64))(
              v33,
              &v34);
      v6 = v10;
      if ( v10 >= 0 )
      {
        v24 = 0LL;
        v11 = (**v34)(v34, &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9, &v24);
        v6 = v11;
        if ( v11 >= 0 )
        {
          v35 = 0LL;
          v12 = *v24;
          v35 = 0LL;
          v13 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v12 + 96))(v24, &v35);
          v6 = v13;
          if ( v13 >= 0 )
          {
            v25 = 0LL;
            v14 = v35;
            v15 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v35 + 64LL);
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
              &v25,
              0LL);
            v16 = v15(v14, &v25);
            v6 = v16;
            if ( v16 >= 0 )
            {
              v26 = 0LL;
              GetDevice = g_DeviceEnumerator->lpVtbl->GetDevice;
              wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v26);
              v18 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, void *, __int64 **))GetDevice)(
                      g_DeviceEnumerator,
                      v25,
                      &v26);
              v6 = v18;
              if ( v18 >= 0 )
              {
                v27 = 0LL;
                v19 = *v26;
                v27 = 0LL;
                v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v19 + 32))(v26, 0LL, &v27);
                v6 = v20;
                if ( v20 >= 0 )
                {
                  *(_OWORD *)pvar = 0LL;
                  v31 = 0LL;
                  (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v27 + 40LL))(
                    v27,
                    &DEVPKEY_KsAudio_Controller_DeviceInterface_Path,
                    pvar);
                  if ( LOWORD(pvar[0]) != 31 )
                  {
                    PropVariantClear(pvar);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v26);
                    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v25);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v35);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v24);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v34);
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v33);
                    v6 = -2147023728;
                    goto LABEL_27;
                  }
                  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
                    this + 71,
                    0LL);
                  v6 = _AllocString<CTCoAllocPolicy>(v22, v21, (const WCHAR *)pvar[1], this + 71);
                  PropVariantClear(pvar);
                }
                else
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x43,
                    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
                    (const char *)(unsigned int)v20);
                }
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x40,
                  (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
                  (const char *)(unsigned int)v18);
              }
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v26);
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x3D,
                (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
                (const char *)(unsigned int)v16);
            }
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v25);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x3A,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
              (const char *)(unsigned int)v13);
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v35);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x37,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
            (const char *)(unsigned int)v11);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v24);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x34,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
          (const char *)(unsigned int)v10);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v34);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
        (const char *)(unsigned int)v8);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v33);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
      (const char *)(unsigned int)v5);
  }
LABEL_27:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v28);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v29);
  return v6;
}
