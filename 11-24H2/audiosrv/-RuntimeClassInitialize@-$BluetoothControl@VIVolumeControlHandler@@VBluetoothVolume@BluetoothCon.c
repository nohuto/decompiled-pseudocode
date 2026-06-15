/*
 * XREFs of ?RuntimeClassInitialize@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D6EA4
 * Callers:
 *     ??$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@VIVolumeControlHandler@@AEAPEAUIMMDevice@@AEAPEBGAEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVIVolumeControlHandler@@AEAPEAUIMMDevice@@AEAPEBGAEAPEAUIControlChangeNotify@@@Z @ 0x1800D16BC (--$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@VIVolumeControlHandler@@AEAPEAUIMMDevic.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180052E14 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ??4?$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIMuteControlHandler@@@Z @ 0x1800A0888 (--4-$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIMuteContro.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D0C70 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVBluetoothVolume@BluetoothControls@@AEAPEAG$$QEAPEAV34@AEAPEAUIControlChangeNotify@@@Z @ 0x1800D15C0 (--$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChange.c)
 *     ?CommonInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAXPEAUIMMDevice@@@Z @ 0x1800D2FD8 (-CommonInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@Bl.c)
 *     ?MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D581C (-MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@.c)
 *     ?TryGetResourceManager@BluetoothControls@@YAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800D82A8 (-TryGetResourceManager@BluetoothControls@@YAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification@@@details@wil@@QEAA_NXZ @ 0x1800D9720 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotif.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::RuntimeClassInitialize(
        struct IPartsList **a1,
        struct IMMDevice *a2,
        unsigned __int16 *a3,
        __int64 a4)
{
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v9; // eax
  int v10; // eax
  char IsEnabled; // al
  struct IControlChangeNotify *v12; // rdx
  __int64 (__fastcall *v13)(__int64, void ***, struct IControlChangeNotifyVtbl **); // r9
  __int64 v14; // r10
  int v15; // eax
  __int64 (__fastcall *v16)(__int64, void ***, struct IControlChangeNotifyVtbl **); // r9
  __int64 v17; // r10
  int v18; // eax
  int v19; // eax
  struct IVolumeControlHandler *RealControl; // rax
  int v22; // [rsp+20h] [rbp-A8h]
  __int128 v23; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v24[2]; // [rsp+38h] [rbp-90h] BYREF
  char v25; // [rsp+48h] [rbp-80h]
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v27; // [rsp+60h] [rbp-68h]
  void **v28; // [rsp+68h] [rbp-60h] BYREF
  struct IPartsList **v29; // [rsp+70h] [rbp-58h]
  __int128 v30; // [rsp+78h] [rbp-50h]
  void ***v31; // [rsp+A0h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  struct IControlChangeNotifyVtbl *v33; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v34; // [rsp+E8h] [rbp+20h]

  v34 = a4;
  *((_BYTE *)a1 + 112) = 1;
  BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::CommonInitialize(
    (__int64)a1,
    (__int64 *)a2);
  *(_OWORD *)pvar = 0LL;
  v27 = 0LL;
  lpVtbl = a2->lpVtbl;
  v24[0] = 0LL;
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))lpVtbl->OpenPropertyStore)(a2, 0LL, v24);
  if ( v9 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      205LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v9,
      v22);
  v10 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v24[0] + 40LL))(
          v24[0],
          &PKEY_Endpoint_LinkedBluetoothEndpoint,
          pvar);
  if ( v10 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      206LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v10,
      v22);
  if ( (int)BluetoothControls::TryGetResourceManager(a1 + 6, a1 + 17) >= 0 )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableNewHfpSwitchNotification>::GetImpl'::`2'::impl);
    v12 = (struct IControlChangeNotify *)(a1 + 19);
    LODWORD(v33) = 0;
    v22 = (int)a1;
    if ( IsEnabled )
    {
      std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v23, v12);
      v28 = &std::_Func_impl_no_alloc<_lambda_f54142638d21adc8792a19c40bc87039_,void,>::`vftable';
      v29 = a1;
      v30 = v23;
      v23 = 0LL;
      v31 = &v28;
      v15 = v13(v14, &v28, &v33);
      if ( v15 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          219LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
          (const char *)(unsigned int)v15,
          (int)a1);
    }
    else
    {
      std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v23, v12);
      v28 = &std::_Func_impl_no_alloc<_lambda_0d7505061d5fe897f28fc80eab3d553f_,void,bool>::`vftable';
      v29 = a1;
      v30 = v23;
      v23 = 0LL;
      v31 = &v28;
      v18 = v16(v17, &v28, &v33);
      if ( v18 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          231LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
          (const char *)(unsigned int)v18,
          (int)a1);
    }
    BYTE4(v33) = 1;
    a1[18] = (struct IPartsList *)v33;
  }
  v24[1] = (__int64)a1;
  v25 = 1;
  if ( LOWORD(pvar[0]) == 31 )
  {
    v33 = (struct IControlChangeNotifyVtbl *)a1;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)a1 + 13);
    v19 = Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::BluetoothVolume,BluetoothControls::BluetoothVolume,unsigned short * &,BluetoothControls::BluetoothVolume *,IControlChangeNotify * &>(
            (struct IControlChangeNotify **)a1 + 13,
            (unsigned __int16 **)&pvar[1]);
    if ( v19 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        254LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)v19,
        v22);
  }
  LOBYTE(v23) = 1;
  RealControl = BluetoothControls::BluetoothVolume::MakeRealControl(a2, a3, a1);
  wil::com_ptr_t<IMuteControlHandler,wil::err_exception_policy>::operator=((__int64 *)a1 + 15, (__int64)RealControl);
  wil::com_ptr_t<IMuteControlHandler,wil::err_exception_policy>::operator=((__int64 *)a1 + 16, a4);
  PropVariantClear(pvar);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v24);
  return 0LL;
}
