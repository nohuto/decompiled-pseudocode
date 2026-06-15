/*
 * XREFs of ?MakeRealControl@BluetoothVolume@BluetoothControls@@SAPEAVIVolumeControlHandler@@PEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D581C
 * Callers:
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D6EA4 (-RuntimeClassInitialize@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothCon.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAAJPEBGPEAVBluetoothVolume@2@PEAUIControlChangeNotify@@@Z @ 0x1800D71D0 (-RuntimeClassInitialize@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume_ea_1800D71D0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetPath@VolumeHelpers@@YAJPEAUIMMDevice@@PEAPEAUIPartsList@@@Z @ 0x18008701C (-GetPath@VolumeHelpers@@YAJPEAUIMMDevice@@PEAPEAUIPartsList@@@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D0C70 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolumeControlHandler@@@Z @ 0x180114928 (-Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIV.c)
 *     ?Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAPEAVIVolumeControlHandler@@@Z @ 0x180114A60 (-Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAPEAVIVolumeControlHand.c)
 */

// Hidden C++ exception states: #wind=1
struct IVolumeControlHandler *__fastcall BluetoothControls::BluetoothVolume::MakeRealControl(
        struct IMMDevice *a1,
        const unsigned __int16 *a2,
        struct IPartsList **a3)
{
  struct IPartsList *v6; // r9
  struct IVolumeControlHandler *v7; // rbx
  int v8; // eax
  int v10; // [rsp+20h] [rbp-28h]
  struct IMMDevice v11[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IVolumeControlHandler *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v11[0].lpVtbl = 0LL;
  VolumeHelpers::GetPath((VolumeHelpers *)a1, v11, a3);
  if ( !v11[0].lpVtbl || (CVolumeHardware::Make(a1, a2, (struct IControlChangeNotify *)a3, v6, &v13), (v7 = v13) == 0LL) )
  {
    v8 = CVolumeSoftware::Make(a1, a2, (struct IControlChangeNotify *)a3, &v13);
    if ( v8 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        508LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)v8,
        v10);
    v7 = v13;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v11);
  return v7;
}
