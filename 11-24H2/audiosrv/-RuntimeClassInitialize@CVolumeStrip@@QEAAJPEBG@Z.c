/*
 * XREFs of ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18005213C
 * Callers:
 *     ??$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeStrip@@AEAPEBG@Z @ 0x180051FA0 (--$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVol.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x180029154 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A320 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0CMeterControlBase@@QEAA@XZ @ 0x18006EF50 (--0CMeterControlBase@@QEAA@XZ.c)
 *     ?ShouldUseBluetoothControls@BluetoothControls@@YAJPEAUIMMDevice@@PEA_N@Z @ 0x18007AA80 (-ShouldUseBluetoothControls@BluetoothControls@@YAJPEAUIMMDevice@@PEA_N@Z.c)
 *     ?GetPath@VolumeHelpers@@YAJPEAUIMMDevice@@PEAPEAUIPartsList@@@Z @ 0x18008701C (-GetPath@VolumeHelpers@@YAJPEAUIMMDevice@@PEAPEAUIPartsList@@@Z.c)
 *     ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x1800A1E58 (-Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x1800C033C (WPP_SF_S.c)
 *     ?MakeAndInitializeMute@BluetoothControls@@YAJPEAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D54D8 (-MakeAndInitializeMute@BluetoothControls@@YAJPEAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEBGPEAU.c)
 *     ?MakeAndInitializeVolume@BluetoothControls@@YAJPEAPEAVIVolumeControlHandler@@PEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D561C (-MakeAndInitializeVolume@BluetoothControls@@YAJPEAPEAVIVolumeControlHandler@@PEAUIMMDevice@@PEBG.c)
 *     ?Make@CMuteHardware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteControlHandler@@@Z @ 0x1801025B4 (-Make@CMuteHardware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMut.c)
 *     ?Make@CMuteSoftware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAPEAVIMuteControlHandler@@@Z @ 0x180102724 (-Make@CMuteSoftware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAPEAVIMuteControlHandler@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@@@details@wil@@QEAA_NXZ @ 0x180103030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@.c)
 *     ?Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolumeControlHandler@@@Z @ 0x180114928 (-Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIV.c)
 *     ?Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAPEAVIVolumeControlHandler@@@Z @ 0x180114A60 (-Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAPEAVIVolumeControlHand.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CVolumeStrip::RuntimeClassInitialize(IMMDevice *this, WCHAR *a2)
{
  IMMDevice *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  HRESULT (__stdcall *GetDevice)(IMMDeviceEnumerator *, LPCWSTR, IMMDevice **); // rbx
  int v10; // eax
  int ShouldUseBluetoothControls; // eax
  __int64 v12; // rdx
  bool *v13; // r8
  struct IPartsList **v14; // r8
  char lpVtbl; // r14
  IMMDevice *v16; // rsi
  int Path; // eax
  struct IPartsList *v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r9
  unsigned __int64 v21; // r15
  IMMDevice *v22; // rbx
  int v23; // eax
  unsigned int v24; // esi
  bool v25; // zf
  char v26; // al
  struct IMMDeviceVtbl *v27; // rax
  struct IMMDeviceVtbl *v28; // rbx
  char v29; // si
  int v30; // eax
  struct IMMDeviceVtbl *v31; // rcx
  struct IMMDeviceVtbl *v32; // rcx
  CMeterControlBase *v33; // rax
  CMeterControlBase *v34; // rbx
  int v35; // eax
  struct IControlChangeNotify *v37; // [rsp+20h] [rbp-30h]
  struct IMMDevice *v38; // [rsp+30h] [rbp-20h] BYREF
  struct IMMDeviceVtbl *v39; // [rsp+38h] [rbp-18h] BYREF
  IMMDevice *v40; // [rsp+40h] [rbp-10h]
  char v41; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  IMMDevice v43; // [rsp+90h] [rbp+40h] BYREF
  __int64 v44; // [rsp+A0h] [rbp+50h] BYREF
  struct IMMDevice v45; // [rsp+A8h] [rbp+58h] BYREF

  v4 = this + 19;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&this[19].lpVtbl,
    0LL);
  v7 = _AllocString<CTCoAllocPolicy>(v6, v5, a2, v4);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v38 = 0LL;
    GetDevice = g_DeviceEnumerator->lpVtbl->GetDevice;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v38);
    v10 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, struct IMMDeviceVtbl *, struct IMMDevice **))GetDevice)(
            g_DeviceEnumerator,
            v4->lpVtbl,
            &v38);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x166,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
        (const char *)(unsigned int)v10);
LABEL_78:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v38);
      return v8;
    }
    v44 = 0LL;
    ShouldUseBluetoothControls = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v38->lpVtbl->QueryInterface)(
                                   v38,
                                   &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
                                   &v44);
    v8 = ShouldUseBluetoothControls;
    if ( ShouldUseBluetoothControls < 0 )
    {
      v12 = 361LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
        (const char *)(unsigned int)ShouldUseBluetoothControls);
LABEL_8:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v44);
      goto LABEL_78;
    }
    ShouldUseBluetoothControls = (*(__int64 (__fastcall **)(__int64, IMMDevice *))(*(_QWORD *)v44 + 64LL))(
                                   v44,
                                   this + 20);
    v8 = ShouldUseBluetoothControls;
    if ( ShouldUseBluetoothControls < 0 )
    {
      v12 = 363LL;
      goto LABEL_7;
    }
    LOBYTE(v43.lpVtbl) = 0;
    ShouldUseBluetoothControls = BluetoothControls::ShouldUseBluetoothControls((BluetoothControls *)v38, &v43, v13);
    v8 = ShouldUseBluetoothControls;
    if ( ShouldUseBluetoothControls < 0 )
    {
      v12 = 366LL;
      goto LABEL_7;
    }
    lpVtbl = (char)v43.lpVtbl;
    v16 = this + 21;
    if ( LOBYTE(v43.lpVtbl) )
    {
      ShouldUseBluetoothControls = BluetoothControls::MakeAndInitializeVolume(
                                     (BluetoothControls *)&this[21],
                                     (struct IVolumeControlHandler **)v38,
                                     (struct IMMDevice *)a2,
                                     (const unsigned __int16 *)((unsigned __int64)&this[1] & -(__int64)(this != 0LL)),
                                     v37);
      v8 = ShouldUseBluetoothControls;
      if ( ShouldUseBluetoothControls < 0 )
      {
        v12 = 369LL;
        goto LABEL_7;
      }
    }
    v45.lpVtbl = 0LL;
    Path = VolumeHelpers::GetPath((VolumeHelpers *)v38, &v45, v14);
    v8 = Path;
    if ( Path < 0 )
    {
      if ( Path == -2004287484 )
      {
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v44);
        v8 = -2004287484;
        goto LABEL_78;
      }
      v19 = 374LL;
      goto LABEL_20;
    }
    if ( !v16->lpVtbl && v45.lpVtbl )
      CVolumeHardware::Make(
        v38,
        a2,
        (struct IControlChangeNotify *)((unsigned __int64)&this[1] & -(__int64)(this != 0LL)),
        v18,
        (struct IVolumeControlHandler **)&this[21]);
    if ( v16->lpVtbl )
    {
      v21 = (unsigned __int64)&this[1];
    }
    else
    {
      if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
        && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_ad74f306bfe33f421203cd208d411976_Traceguids, a2);
      }
      v21 = (unsigned __int64)&this[1];
      Path = CVolumeSoftware::Make(
               v38,
               a2,
               (struct IControlChangeNotify *)((unsigned __int64)&this[1] & -(__int64)(this != 0LL)),
               (struct IVolumeControlHandler **)&this[21]);
      v8 = Path;
      if ( Path < 0 )
      {
        v19 = 391LL;
        goto LABEL_20;
      }
    }
    v22 = this + 22;
    if ( lpVtbl )
    {
      v23 = BluetoothControls::MakeAndInitializeMute(
              (BluetoothControls *)&this[22],
              (struct IMuteControlHandler **)v38,
              (struct IMMDevice *)a2,
              (const unsigned __int16 *)(v21 & -(__int64)(this != 0LL)),
              v37);
      v24 = v23;
      if ( v23 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x193,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
          (const char *)(unsigned int)v23);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v44);
        v8 = v24;
        goto LABEL_78;
      }
    }
    if ( !v22->lpVtbl )
    {
      if ( v45.lpVtbl )
        CMuteHardware::Make(
          v38,
          a2,
          (struct IControlChangeNotify *)((unsigned __int64)&this[1] & -(__int64)(this != 0LL)),
          (struct IPartsList *)v45.lpVtbl,
          (struct IMuteControlHandler **)&this[22]);
      if ( !v22->lpVtbl )
      {
        if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_ad74f306bfe33f421203cd208d411976_Traceguids, a2);
        }
        Path = CMuteSoftware::Make(
                 v38,
                 a2,
                 (struct IControlChangeNotify *)((unsigned __int64)&this[1] & -(__int64)(this != 0LL)),
                 (struct IMuteControlHandler **)&this[22]);
        v8 = Path;
        if ( Path < 0 )
        {
          v19 = 419LL;
          goto LABEL_20;
        }
        v22 = this + 22;
      }
    }
    if ( (*((unsigned __int8 (__fastcall **)(struct IMMDeviceVtbl *))this[21].lpVtbl->QueryInterface + 12))(this[21].lpVtbl)
      || (v25 = (*((unsigned __int8 (__fastcall **)(struct IMMDeviceVtbl *))v22->lpVtbl->QueryInterface + 7))(v22->lpVtbl) == 0,
          v26 = 0,
          !v25) )
    {
      v26 = 1;
    }
    LOBYTE(this[24].lpVtbl) = v26;
    if ( v45.lpVtbl )
    {
      v27 = (struct IMMDeviceVtbl *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
      v28 = v27;
      v43.lpVtbl = v27;
      if ( !v27 )
      {
        v39 = 0LL;
        v8 = -2147024882;
        v20 = 2147942414LL;
        v19 = 435LL;
        goto LABEL_21;
      }
      CMeterControlBase::CMeterControlBase((CMeterControlBase *)v27);
      v28->QueryInterface = (HRESULT (__stdcall *)(IMMDevice *, const IID *const, void **))&CMeterHardware::`vftable';
      v28->OpenPropertyStore = 0LL;
      v28->GetId = 0LL;
      v39 = v28;
      v40 = (IMMDevice *)&v39;
      v29 = 1;
      v41 = 1;
      v30 = CMeterHardware::Initialize((CMeterHardware *)v28, v38, (struct IPartsList *)v45.lpVtbl);
      v31 = v39;
      if ( v30 >= 0 )
      {
        this[23].lpVtbl = v39;
        v29 = 0;
      }
      if ( v29 )
        (*((void (__fastcall **)(struct IMMDeviceVtbl *))v31->QueryInterface + 2))(v31);
    }
    v32 = this[23].lpVtbl;
    if ( !v32 )
    {
      if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl)
        && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_ad74f306bfe33f421203cd208d411976_Traceguids, a2);
      }
      v33 = (CMeterControlBase *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
      v34 = v33;
      v40 = (IMMDevice *)v33;
      if ( !v33 )
      {
        v43.lpVtbl = 0LL;
        v8 = -2147024882;
        v20 = 2147942414LL;
        v19 = 453LL;
        goto LABEL_21;
      }
      CMeterControlBase::CMeterControlBase(v33);
      *(_QWORD *)v34 = &CMeterSoftware::`vftable';
      *((_QWORD *)v34 + 4) = 0LL;
      InitializeCriticalSectionEx((LPCRITICAL_SECTION)v34 + 1, 0, 0);
      v43.lpVtbl = (struct IMMDeviceVtbl *)v34;
      v40 = &v43;
      v41 = 1;
      v35 = (*(__int64 (__fastcall **)(CMeterControlBase *, struct IMMDevice *))(*(_QWORD *)v34 + 48LL))(v34, v38);
      v8 = v35;
      if ( v35 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1C8,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
          (const char *)(unsigned int)v35);
        (*((void (__fastcall **)(struct IMMDeviceVtbl *))v43.lpVtbl->QueryInterface + 2))(v43.lpVtbl);
        goto LABEL_22;
      }
      v32 = v43.lpVtbl;
      this[23].lpVtbl = v43.lpVtbl;
    }
    Path = (*((__int64 (__fastcall **)(struct IMMDeviceVtbl *))v32->QueryInterface + 12))(v32);
    v8 = Path;
    if ( Path >= 0 )
    {
      Path = (*((__int64 (__fastcall **)(struct IMMDeviceVtbl *))this[22].lpVtbl->QueryInterface + 9))(this[22].lpVtbl);
      v8 = Path;
      if ( Path >= 0 )
      {
        Path = (*((__int64 (__fastcall **)(struct IMMDeviceVtbl *))this[21].lpVtbl->QueryInterface + 27))(this[21].lpVtbl);
        v8 = Path;
        if ( Path >= 0 )
        {
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v44);
          v8 = 0;
          goto LABEL_78;
        }
        v19 = 474LL;
      }
      else
      {
        v19 = 473LL;
      }
    }
    else
    {
      v19 = 472LL;
    }
LABEL_20:
    v20 = (unsigned int)Path;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)v20);
LABEL_22:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x163,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
