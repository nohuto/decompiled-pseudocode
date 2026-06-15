/*
 * XREFs of ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x1800202E8
 * Callers:
 *     ??$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeStrip@@AEAPEBG@Z @ 0x18001FE48 (--$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVol.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x180020B2C (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180060E88 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180065D1C (--0last_error_context@wil@@QEAA@XZ.c)
 *     ?Make@CMuteSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIMuteControlHandler@@@Z @ 0x18007BEBC (-Make@CMuteSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIMuteControlHandler@@@Z.c)
 *     ??0CMeterControlBase@@QEAA@XZ @ 0x180081730 (--0CMeterControlBase@@QEAA@XZ.c)
 *     ?ShouldUseBluetoothControls@BluetoothControls@@YAJPEAUIMMDevice@@PEA_N@Z @ 0x1800855F0 (-ShouldUseBluetoothControls@BluetoothControls@@YAJPEAUIMMDevice@@PEA_N@Z.c)
 *     ?Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteControlHandler@@@Z @ 0x18008B4A0 (-Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteCon.c)
 *     ?Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolumeControlHandler@@@Z @ 0x18008DC14 (-Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolum.c)
 *     ?GetPath@VolumeHelpers@@YAJPEAUIMMDevice@@PEAPEAUIPartsList@@@Z @ 0x18008DD44 (-GetPath@VolumeHelpers@@YAJPEAUIMMDevice@@PEAPEAUIPartsList@@@Z.c)
 *     ??$MakeAndInitialize@VBluetoothMute@BluetoothControls@@VIMuteControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVIMuteControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Z @ 0x1800A3514 (--$MakeAndInitialize@VBluetoothMute@BluetoothControls@@VIMuteControlHandler@@AEAPEAUIMMDevice@@A.c)
 *     ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x1800A5A48 (-Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x1800C17A4 (WPP_SF_S.c)
 *     ??$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@VIVolumeControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVIVolumeControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Z @ 0x1800D0228 (--$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@VIVolumeControlHandler@@AEAPEAUIMMDevic.c)
 *     ?Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIVolumeControlHandler@@@Z @ 0x18010CE88 (-Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIVolumeControlHandler@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CVolumeStrip::RuntimeClassInitialize(IMMDevice *this, const unsigned __int16 *a2)
{
  IMMDevice *v4; // rsi
  struct IMMDeviceVtbl *lpVtbl; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  struct IMMDeviceEnumeratorVtbl *v8; // rax
  int v9; // eax
  int ShouldUseBluetoothControls; // eax
  __int64 v11; // rdx
  bool *v12; // r8
  struct IPartsList **v13; // r8
  IMMDevice *v14; // rsi
  int Path; // eax
  struct IPartsList *v16; // r8
  __int64 v18; // rdx
  __int64 v19; // r9
  struct IMMDeviceVtbl *v20; // r14
  IMMDevice *v21; // rbx
  int v22; // eax
  unsigned int v23; // esi
  struct IMMDeviceVtbl *v24; // rax
  struct IMMDeviceVtbl *v25; // rbx
  char v26; // si
  int v27; // eax
  char *v28; // rcx
  struct IMMDeviceVtbl *v29; // rcx
  CMeterControlBase *v30; // rax
  CMeterControlBase *v31; // rbx
  int v32; // eax
  struct IMMDevice *v33; // [rsp+20h] [rbp-20h] BYREF
  struct IMMDeviceVtbl *v34; // [rsp+28h] [rbp-18h] BYREF
  struct IMMDevice *v35; // [rsp+30h] [rbp-10h] BYREF
  char v36; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  IMMDevice v38; // [rsp+80h] [rbp+40h] BYREF
  __int64 v39; // [rsp+90h] [rbp+50h] BYREF
  struct IMMDevice v40; // [rsp+98h] [rbp+58h] BYREF

  v4 = this + 19;
  lpVtbl = this[19].lpVtbl;
  if ( lpVtbl )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v38);
    CoTaskMemFree(lpVtbl);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v38);
  }
  v4->lpVtbl = 0LL;
  v6 = _AllocString<CTCoAllocPolicy>(this, a2, a2, v4);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x145,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  v33 = 0LL;
  v8 = g_DeviceEnumerator->lpVtbl;
  v33 = 0LL;
  v9 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, struct IMMDeviceVtbl *, struct IMMDevice **))v8->GetDevice)(
         g_DeviceEnumerator,
         v4->lpVtbl,
         &v33);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x148,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)v9);
LABEL_90:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v33);
    return v7;
  }
  v39 = 0LL;
  ShouldUseBluetoothControls = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v33->lpVtbl->QueryInterface)(
                                 v33,
                                 &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
                                 &v39);
  v7 = ShouldUseBluetoothControls;
  if ( ShouldUseBluetoothControls < 0 )
  {
    v11 = 331LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)(unsigned int)ShouldUseBluetoothControls);
LABEL_10:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v39);
    goto LABEL_90;
  }
  ShouldUseBluetoothControls = (*(__int64 (__fastcall **)(__int64, IMMDevice *))(*(_QWORD *)v39 + 64LL))(v39, this + 20);
  v7 = ShouldUseBluetoothControls;
  if ( ShouldUseBluetoothControls < 0 )
  {
    v11 = 333LL;
    goto LABEL_9;
  }
  LOBYTE(v38.lpVtbl) = 0;
  ShouldUseBluetoothControls = BluetoothControls::ShouldUseBluetoothControls((BluetoothControls *)v33, &v38, v12);
  v7 = ShouldUseBluetoothControls;
  if ( ShouldUseBluetoothControls < 0 )
  {
    v11 = 336LL;
    goto LABEL_9;
  }
  v14 = this + 21;
  if ( LOBYTE(v38.lpVtbl) )
  {
    v34 = (struct IMMDeviceVtbl *)&this[1];
    v35 = v33;
    ShouldUseBluetoothControls = Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::BluetoothVolume,IVolumeControlHandler,IMMDevice * &,IControlChangeNotify * &>(
                                   &this[21],
                                   &v35,
                                   &v34);
    v7 = ShouldUseBluetoothControls;
    if ( ShouldUseBluetoothControls < 0 )
    {
      v11 = 339LL;
      goto LABEL_9;
    }
  }
  v40.lpVtbl = 0LL;
  Path = VolumeHelpers::GetPath((VolumeHelpers *)v33, &v40, v13);
  v7 = Path;
  if ( Path < 0 )
  {
    if ( Path == -2004287484 )
    {
      if ( v40.lpVtbl )
        (*((void (__fastcall **)(struct IMMDeviceVtbl *))v40.lpVtbl->QueryInterface + 2))(v40.lpVtbl);
      if ( v39 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
      if ( v33 )
        ((void (__fastcall *)(struct IMMDevice *))v33->lpVtbl->Release)(v33);
      return 2290679812LL;
    }
    v18 = 344LL;
    goto LABEL_28;
  }
  if ( !v14->lpVtbl && v40.lpVtbl )
    CVolumeHardware::Make(
      v33,
      (struct IControlChangeNotify *)((unsigned __int64)&this[1] & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
      v16,
      (struct IVolumeControlHandler **)&this[21]);
  if ( v14->lpVtbl )
  {
    v20 = (struct IMMDeviceVtbl *)&this[1];
  }
  else
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_ffca69456fc43fc517c726147dcc355b_Traceguids);
    }
    v20 = (struct IMMDeviceVtbl *)&this[1];
    Path = CVolumeSoftware::Make(
             v33,
             (struct IControlChangeNotify *)((unsigned __int64)&this[1] & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
             (struct IVolumeControlHandler **)&this[21]);
    v7 = Path;
    if ( Path < 0 )
    {
      v18 = 358LL;
      goto LABEL_28;
    }
  }
  v21 = this + 22;
  if ( !LOBYTE(v38.lpVtbl)
    || (v38.lpVtbl = v20,
        v35 = v33,
        v22 = Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::BluetoothMute,IMuteControlHandler,IMMDevice * &,IControlChangeNotify * &>(
                &this[22],
                &v35,
                &v38),
        v23 = v22,
        v22 >= 0) )
  {
    if ( v21->lpVtbl )
      goto LABEL_60;
    if ( v40.lpVtbl )
      CMuteHardware::Make(
        v33,
        (struct IControlChangeNotify *)((unsigned __int64)&this[1] & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
        (struct IPartsList *)v40.lpVtbl,
        (struct IMuteControlHandler **)&this[22]);
    if ( v21->lpVtbl )
      goto LABEL_60;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_ffca69456fc43fc517c726147dcc355b_Traceguids);
    }
    Path = CMuteSoftware::Make(
             v33,
             (struct IControlChangeNotify *)((unsigned __int64)&this[1] & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
             (struct IMuteControlHandler **)&this[22]);
    v7 = Path;
    if ( Path >= 0 )
    {
LABEL_60:
      if ( v40.lpVtbl )
      {
        v24 = (struct IMMDeviceVtbl *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
        v25 = v24;
        v38.lpVtbl = v24;
        if ( !v24 )
        {
          v34 = 0LL;
          v7 = -2147024882;
          v19 = 2147942414LL;
          v18 = 394LL;
          goto LABEL_29;
        }
        CMeterControlBase::CMeterControlBase((CMeterControlBase *)v24);
        v25->QueryInterface = (HRESULT (__stdcall *)(IMMDevice *, const IID *const, void **))&CMeterHardware::`vftable';
        v25->OpenPropertyStore = 0LL;
        v25->GetId = 0LL;
        v34 = v25;
        v35 = (struct IMMDevice *)&v34;
        v26 = 1;
        v36 = 1;
        v27 = CMeterHardware::Initialize((CMeterHardware *)v25, v33, (struct IPartsList *)v40.lpVtbl);
        v28 = (char *)v34;
        if ( v27 >= 0 )
        {
          this[23].lpVtbl = v34;
          v26 = 0;
        }
        if ( v26 )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v28 + 16LL))(v28);
      }
      v29 = this[23].lpVtbl;
      if ( !v29 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_ffca69456fc43fc517c726147dcc355b_Traceguids);
        }
        v30 = (CMeterControlBase *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
        v31 = v30;
        v35 = (struct IMMDevice *)v30;
        if ( !v30 )
        {
          v38.lpVtbl = 0LL;
          v7 = -2147024882;
          v19 = 2147942414LL;
          v18 = 409LL;
          goto LABEL_29;
        }
        CMeterControlBase::CMeterControlBase(v30);
        *(_QWORD *)v31 = &CMeterSoftware::`vftable';
        *((_QWORD *)v31 + 4) = 0LL;
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)v31 + 1, 0, 0);
        v38.lpVtbl = (struct IMMDeviceVtbl *)v31;
        v35 = &v38;
        v36 = 1;
        v32 = (*(__int64 (__fastcall **)(CMeterControlBase *, struct IMMDevice *))(*(_QWORD *)v31 + 48LL))(v31, v33);
        v7 = v32;
        if ( v32 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x19C,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
            (const char *)(unsigned int)v32);
          (*((void (__fastcall **)(struct IMMDeviceVtbl *))v38.lpVtbl->QueryInterface + 2))(v38.lpVtbl);
          if ( v40.lpVtbl )
            (*((void (__fastcall **)(struct IMMDeviceVtbl *))v40.lpVtbl->QueryInterface + 2))(v40.lpVtbl);
          if ( v39 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
          if ( v33 )
            ((void (__fastcall *)(struct IMMDevice *))v33->lpVtbl->Release)(v33);
          return v7;
        }
        v29 = v38.lpVtbl;
        this[23].lpVtbl = v38.lpVtbl;
      }
      Path = (*((__int64 (__fastcall **)(struct IMMDeviceVtbl *))v29->QueryInterface + 12))(v29);
      v7 = Path;
      if ( Path >= 0 )
      {
        Path = (*((__int64 (__fastcall **)(struct IMMDeviceVtbl *))this[22].lpVtbl->QueryInterface + 7))(this[22].lpVtbl);
        v7 = Path;
        if ( Path >= 0 )
        {
          Path = (*((__int64 (__fastcall **)(struct IMMDeviceVtbl *))this[21].lpVtbl->QueryInterface + 25))(this[21].lpVtbl);
          v7 = Path;
          if ( Path >= 0 )
          {
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v39);
            v7 = 0;
            goto LABEL_90;
          }
          v18 = 430LL;
        }
        else
        {
          v18 = 429LL;
        }
      }
      else
      {
        v18 = 428LL;
      }
    }
    else
    {
      v18 = 383LL;
    }
LABEL_28:
    v19 = (unsigned int)Path;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
      (const char *)v19);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x172,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumestrip.cpp",
    (const char *)(unsigned int)v22);
  if ( v40.lpVtbl )
    (*((void (__fastcall **)(struct IMMDeviceVtbl *))v40.lpVtbl->QueryInterface + 2))(v40.lpVtbl);
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  if ( v33 )
    ((void (__fastcall *)(struct IMMDevice *))v33->lpVtbl->Release)(v33);
  return v23;
}
