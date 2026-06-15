/*
 * XREFs of ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18008D9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180019F28 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x18001F288 (--$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUI.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18003A750 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180043528 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A320 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Add@?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAHAEBV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@Z @ 0x180050E48 (-Add@-$CSimpleArray@V-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V-$CSimpleArrayEqualHelpe.c)
 *     ?Add@?$CSimpleArray@V?$ComPtr@UIAudioSystemEffects2@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioSystemEffects2@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAHAEBV?$ComPtr@UIAudioSystemEffects2@@@WRL@Microsoft@@@Z @ 0x180056800 (-Add@-$CSimpleArray@V-$ComPtr@UIAudioSystemEffects2@@@WRL@Microsoft@@V-$CSimpleArrayEqualHelper@.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x1800568AC (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??A?$CSimpleArray@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V?$CSimpleArrayEqualHelper@V?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@@ATL@@@ATL@@QEAAAEAV?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@H@Z @ 0x18005EBCC (--A-$CSimpleArray@V-$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@V-$CSimpleArrayEqualHelper@.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A318C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCompositeSystemEffect::Initialize(
        CCompositeSystemEffect *this,
        struct IMMDevice *a2,
        struct _GUID *a3,
        int a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        struct IAudioProcessingObject **a6,
        struct IAudioSystemEffects2 **a7)
{
  signed int v9; // edi
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rax
  char *v14; // r15
  __int64 v15; // r9
  __int64 v16; // rdx
  signed int v18; // ebx
  struct IAudioSystemEffects2 **v19; // r14
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v20; // r13d
  __int64 (__fastcall ****v21)(_QWORD, GUID *, __int64 **); // rax
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 **); // rdi
  __int64 (__fastcall *v23)(_QWORD, GUID *, __int64 **); // rbx
  _QWORD *v24; // rdi
  __int64 v25; // rax
  signed int v26; // ebx
  __int64 v27; // r8
  void *v28; // rcx
  unsigned int v29; // edx
  struct IAudioProcessingObject **v30; // rdi
  __int64 *v31; // rbx
  __int64 *v32; // rbx
  void *v33; // rcx
  int v34; // r13d
  int v35; // r12d
  int v36; // r15d
  int v37; // r14d
  int v38; // esi
  int v39; // edi
  void *v40; // rcx
  int v41; // eax
  __int64 v42; // rdx
  char *v43; // [rsp+30h] [rbp-89h]
  __int64 v44; // [rsp+38h] [rbp-81h]
  void *v45; // [rsp+88h] [rbp-31h] BYREF
  char *v46; // [rsp+90h] [rbp-29h]
  __int64 *v47; // [rsp+98h] [rbp-21h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-19h] BYREF
  struct _GUID v49; // [rsp+A8h] [rbp-11h] BYREF
  int v50; // [rsp+B8h] [rbp-1h]
  int v51; // [rsp+BCh] [rbp+3h]
  __int64 v52[7]; // [rsp+C0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+47h]
  signed int v54; // [rsp+108h] [rbp+4Fh] BYREF
  struct _GUID *v55; // [rsp+118h] [rbp+5Fh]
  int v56; // [rsp+120h] [rbp+67h]

  v56 = a4;
  v55 = a3;
  v9 = 0;
  if ( *((int *)this + 26) > 0 )
  {
    while ( 1 )
    {
      *(_QWORD *)&v49.Data1 = 0LL;
      v45 = 0LL;
      GetId = a2->lpVtbl->GetId;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        &v45,
        0LL);
      v11 = ((__int64 (__fastcall *)(struct IMMDevice *, void **))GetId)(a2, &v45);
      v12 = v11;
      if ( v11 < 0 )
        break;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v49);
      v13 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)this + 96, v9);
      v54 = *((_DWORD *)this + 20);
      v48 = (__int64)v45;
      v11 = Microsoft::WRL::Details::MakeAndInitialize<CAPOWrapperClient,IAudioProcessingObject,unsigned short const * &,enum APO_TYPE &,_GUID const &>(
              &v49,
              &v48,
              (unsigned int *)&v54,
              v13);
      v12 = v11;
      if ( v11 < 0 )
      {
        v16 = 776LL;
        goto LABEL_10;
      }
      v14 = (char *)this + 112;
      if ( !(unsigned int)ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::Add(
                            (__int64)this + 112,
                            (__int64 *)&v49) )
      {
        v12 = -2147024882;
        v15 = 2147942414LL;
        v16 = 778LL;
        goto LABEL_11;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v45);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v49);
      if ( ++v9 >= *((_DWORD *)this + 26) )
        goto LABEL_14;
    }
    v16 = 774LL;
LABEL_10:
    v15 = (unsigned int)v11;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v15);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v45);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v49);
    return v12;
  }
  v14 = (char *)this + 112;
LABEL_14:
  v18 = 0;
  v54 = 0;
  v19 = a7;
  if ( *((int *)this + 30) > 0 )
  {
    v20 = a5;
    while ( 1 )
    {
      v47 = 0LL;
      v45 = 0LL;
      v21 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 **))ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
                                                                     (__int64)v14,
                                                                     v18);
      v22 = *v21;
      v23 = ***v21;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v47);
      LODWORD(v46) = v23(v22, &GUID_48d5d115_0037_423d_a1d7_f4be39ae9dd6, &v47);
      v24 = (_QWORD *)((char *)this + 96);
      v48 = (__int64)this + 96;
      if ( (int)v46 < 0 )
        break;
      v25 = *v47;
      v26 = v54;
      v27 = *v24 + 16LL * v54;
      v49 = *v55;
      LODWORD(v46) = (*(__int64 (__fastcall **)(__int64 *, struct IMMDevice *, __int64, struct _GUID *, int, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, unsigned __int64))(v25 + 24))(
                       v47,
                       a2,
                       v27,
                       &v49,
                       v56,
                       v20,
                       (unsigned __int64)&v45 & -(__int64)(v19 != 0LL));
      if ( (int)v46 < 0 )
        goto LABEL_36;
      if ( !(unsigned int)ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioSystemEffects2>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioSystemEffects2>>>::Add(
                            (__int64)this + 128,
                            &v45) )
      {
        v12 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x31A,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)0x8007000ELL);
        v33 = v45;
        if ( v45 )
        {
          v45 = 0LL;
          (*(void (__fastcall **)(void *))(*(_QWORD *)v33 + 16LL))(v33);
        }
        goto LABEL_38;
      }
      v28 = v45;
      if ( v45 )
      {
        v45 = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v28 + 16LL))(v28);
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v47);
      v18 = v26 + 1;
      v54 = v18;
      if ( v18 >= *((_DWORD *)this + 30) )
      {
        v14 = (char *)this + 112;
        goto LABEL_23;
      }
    }
    v26 = v54;
LABEL_36:
    v50 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                 (__int64)this + 96,
                                 v26)
                             + 15);
    v51 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                 (__int64)this + 96,
                                 v26)
                             + 14);
    v49.Data1 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                       (__int64)this + 96,
                                       v26)
                                   + 13);
    v34 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                 (__int64)this + 96,
                                 v26)
                             + 12);
    v35 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                 (__int64)this + 96,
                                 v26)
                             + 11);
    v36 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                 (__int64)this + 96,
                                 v26)
                             + 10);
    v37 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                 (__int64)this + 96,
                                 v26)
                             + 9);
    v38 = *(unsigned __int8 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                 (__int64)this + 96,
                                 v26)
                             + 8);
    v39 = *(unsigned __int16 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                  (__int64)v24,
                                  v26)
                              + 6);
    LODWORD(v44) = *(unsigned __int16 *)(ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                           v48,
                                           v26)
                                       + 4);
    LODWORD(v43) = *(_DWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v48, v54);
    v12 = (unsigned int)v46;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x31E,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v46,
      (__int64)"SysFxInitializationFailure{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
      v43,
      v44,
      v39,
      v38,
      v37,
      v36,
      v35,
      v34,
      v49.Data1,
      v51,
      v50);
    v40 = v45;
    if ( v45 )
    {
      v45 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v40 + 16LL))(v40);
    }
LABEL_38:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v47);
    return v12;
  }
LABEL_23:
  v52[0] = 0LL;
  if ( (**(int (__fastcall ***)(CCompositeSystemEffect *, GUID *, __int64 *))this)(
         this,
         &GUID_25385759_3236_4101_a943_25693dfb5d2d,
         v52) >= 0 )
    *((_DWORD *)this + 21) = 1;
  if ( *((_DWORD *)this + 30) == 1 )
  {
    v30 = a6;
    if ( a6 )
    {
      v31 = (__int64 *)ATL::CSimpleArray<Microsoft::WRL::ComPtr<IAudioProcessingObject>,ATL::CSimpleArrayEqualHelper<Microsoft::WRL::ComPtr<IAudioProcessingObject>>>::operator[](
                         (__int64)v14,
                         0);
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v31);
      *v30 = (struct IAudioProcessingObject *)*v31;
    }
    if ( v19 )
    {
      if ( *((int *)this + 34) <= 0 )
      {
        ATL::_AtlRaiseException(0xC000008C, v29);
        JUMPOUT(0x18008DEAFLL);
      }
      v32 = (__int64 *)*((_QWORD *)this + 16);
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v32);
      *v19 = (struct IAudioSystemEffects2 *)*v32;
    }
    goto LABEL_31;
  }
  if ( a6 )
  {
    v41 = (**(__int64 (__fastcall ***)(CCompositeSystemEffect *, GUID *))this)(
            this,
            &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10);
    v12 = v41;
    if ( v41 < 0 )
    {
      v42 = 820LL;
LABEL_45:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v42,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v41);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v52);
      return v12;
    }
  }
  if ( v19 )
  {
    v41 = (**(__int64 (__fastcall ***)(CCompositeSystemEffect *, GUID *, struct IAudioSystemEffects2 **))this)(
            this,
            &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
            v19);
    v12 = v41;
    if ( v41 < 0 )
    {
      v42 = 823LL;
      goto LABEL_45;
    }
  }
LABEL_31:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v52);
  return 0LL;
}
