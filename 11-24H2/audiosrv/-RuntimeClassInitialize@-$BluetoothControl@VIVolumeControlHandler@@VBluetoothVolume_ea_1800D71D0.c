/*
 * XREFs of ?RuntimeClassInitialize@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAAJPEBGPEAVBluetoothVolume@2@PEAUIControlChangeNotify@@@Z @ 0x1800D71D0
 * Callers:
 *     ??$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVBluetoothVolume@BluetoothControls@@AEAPEAG$$QEAPEAV34@AEAPEAUIControlChangeNotify@@@Z @ 0x1800D15C0 (--$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChange.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??4?$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIMuteControlHandler@@@Z @ 0x1800A0888 (--4-$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIMuteContro.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D0C70 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CommonInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAXPEAUIMMDevice@@@Z @ 0x1800D2FD8 (-CommonInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@Bl.c)
 *     ?MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D581C (-MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::RuntimeClassInitialize(
        struct IPartsList **a1,
        unsigned __int16 *a2,
        struct IControlChangeNotifyVtbl *a3,
        __int64 a4)
{
  struct IMMDeviceEnumeratorVtbl *lpVtbl; // rax
  int v9; // eax
  struct IControlChangeNotifyVtbl *v10; // rsi
  struct IVolumeControlHandler *RealControl; // rax
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IMMDevice *v15; // [rsp+40h] [rbp+8h] BYREF

  *((_BYTE *)a1 + 112) = 0;
  v15 = 0LL;
  lpVtbl = g_DeviceEnumerator->lpVtbl;
  v15 = 0LL;
  v9 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, unsigned __int16 *, struct IMMDevice **))lpVtbl->GetDevice)(
         g_DeviceEnumerator,
         a2,
         &v15);
  if ( v9 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      281LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
      (const char *)(unsigned int)v9,
      v13);
  v10 = (struct IControlChangeNotifyVtbl *)a1[13];
  a1[13] = (struct IPartsList *)a3;
  if ( a3 )
    (*((void (__fastcall **)(struct IControlChangeNotifyVtbl *))a3->QueryInterface + 1))(a3);
  if ( v10 )
    (*((void (__fastcall **)(struct IControlChangeNotifyVtbl *))v10->QueryInterface + 2))(v10);
  BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::CommonInitialize(
    (__int64)a1,
    (__int64 *)v15);
  RealControl = BluetoothControls::BluetoothVolume::MakeRealControl(v15, a2, a1);
  wil::com_ptr_t<IMuteControlHandler,wil::err_exception_policy>::operator=((__int64 *)a1 + 15, (__int64)RealControl);
  wil::com_ptr_t<IMuteControlHandler,wil::err_exception_policy>::operator=((__int64 *)a1 + 16, a4);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
  return 0LL;
}
