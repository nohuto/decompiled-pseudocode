/*
 * XREFs of ?FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x18010161C
 * Callers:
 *     _lambda_48ab4a51811d1fd17847d009bb0945ca_::operator() @ 0x180101338 (_lambda_48ab4a51811d1fd17847d009bb0945ca_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180019F28 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004A2E8 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A320 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _lambda_b2150f9863123c82f4c7cc3e68d21ee2_::operator() @ 0x1801013F4 (_lambda_b2150f9863123c82f4c7cc3e68d21ee2_--operator().c)
 *     ?FindMuteControlForEndpoint_old@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18010195C (-FindMuteControlForEndpoint_old@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@@@details@wil@@QEAA_NXZ @ 0x180103030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@.c)
 *     ?CrackPartGlobalId@@YAJPEBGPEAPEAGPEAI@Z @ 0x18012D930 (-CrackPartGlobalId@@YAJPEBGPEAPEAGPEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CMuteHardware::FindMuteControlForEndpoint(
        CMuteHardware *this,
        struct IMMDevice *a2,
        struct IPartsList *a3,
        _QWORD *a4,
        unsigned int *a5)
{
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  _QWORD *v17; // r14
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, unsigned __int16 **); // rbx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  int v24; // [rsp+30h] [rbp-40h] BYREF
  int v25; // [rsp+34h] [rbp-3Ch] BYREF
  int v26[2]; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int16 *v27; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int16 *v28; // [rsp+48h] [rbp-28h] BYREF
  __int64 v29; // [rsp+50h] [rbp-20h] BYREF
  __int64 v30; // [rsp+58h] [rbp-18h] BYREF
  _QWORD v31[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl) )
  {
    v25 = 0;
    v9 = 0LL;
    v30 = 0LL;
    if ( a2 )
    {
      ((void (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
        a2,
        &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
        &v30);
      v9 = v30;
    }
    if ( v9 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 88LL))(v9, &v25);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16B,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
          (const char *)(unsigned int)v10);
LABEL_34:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v30);
        return v11;
      }
    }
    *(_QWORD *)v26 = 0LL;
    v12 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a2->lpVtbl->Activate)(
            a2,
            &GUID_2b0711de_dab7_4610_a16f_d3383749b220,
            23LL);
    v11 = v12;
    if ( v12 < 0 )
    {
      v13 = 367LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
        (const char *)(unsigned int)v12);
LABEL_10:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v26);
      goto LABEL_34;
    }
    if ( v25 )
    {
      v29 = 0LL;
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)v26 + 64LL))(*(_QWORD *)v26, &v29);
      v11 = v14;
      if ( v14 < 0 )
      {
        v15 = 372LL;
LABEL_14:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
          (const char *)(unsigned int)v14);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v29);
        goto LABEL_10;
      }
      v24 = 0;
      if ( (*(int (__fastcall **)(__int64, _QWORD, int *, _QWORD))(*(_QWORD *)v29 + 104LL))(v29, 0LL, &v24, 0LL) >= 0 )
      {
        v16 = v24;
      }
      else
      {
        v16 = 1;
        v24 = 1;
      }
      if ( v16 == 1 )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD, struct IPartsList *, GUID *, GUID *, char *))(**(_QWORD **)v26 + 80LL))(
                *(_QWORD *)v26,
                a3,
                &GUID_35caf6e4_f3b3_4168_bb4b_55e77a461c7e,
                &GUID_df45aeea_b74a_4b6b_afad_2366b6aa012e,
                (char *)this + 48);
        v11 = v14;
        if ( v14 < 0 )
        {
          v15 = 389LL;
          goto LABEL_14;
        }
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v29);
    }
    v17 = (_QWORD *)((char *)this + 48);
    if ( *((_QWORD *)this + 6)
      || (v12 = (*(__int64 (__fastcall **)(_QWORD, struct IPartsList *, GUID *, char *))(**(_QWORD **)v26 + 32LL))(
                  *(_QWORD *)v26,
                  a3,
                  &GUID_df45aeea_b74a_4b6b_afad_2366b6aa012e,
                  (char *)this + 48),
          v11 = v12,
          v12 >= 0) )
    {
      v27 = 0LL;
      v18 = *v17;
      v19 = *(__int64 (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)*v17 + 40LL);
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)&v27,
        0LL);
      v20 = v19(v18, &v27);
      v11 = v20;
      if ( v20 >= 0 )
      {
        v28 = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          (void **)&v28,
          0LL);
        v21 = CrackPartGlobalId(v27, &v28, a5);
        v11 = v21;
        if ( v21 >= 0 )
        {
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
            a4,
            &v28);
          v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, GUID *, char *))(*(_QWORD *)*v17 + 104LL))(
                  *v17,
                  23LL,
                  &GUID_df45aeea_b74a_4b6b_afad_2366b6aa012e,
                  (char *)this + 56);
          v11 = v21;
          if ( v21 >= 0 )
          {
            v31[0] = a4;
            v31[1] = this;
            lambda_b2150f9863123c82f4c7cc3e68d21ee2_::operator()((__int64)v31);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v28);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v27);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v26);
            v11 = 0;
            goto LABEL_34;
          }
          v22 = 408LL;
        }
        else
        {
          v22 = 405LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
          (const char *)(unsigned int)v21);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v28);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x192,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
          (const char *)(unsigned int)v20);
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v27);
      goto LABEL_10;
    }
    v13 = 398LL;
    goto LABEL_9;
  }
  return CMuteHardware::FindMuteControlForEndpoint_old(this, a2, a3);
}
