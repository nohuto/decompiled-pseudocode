/*
 * XREFs of BluetoothControls::CreateRealControls @ 0x1800D3228
 * Callers:
 *     ?RuntimeClassInitialize@BluetoothVolumeAndMute@BluetoothControls@@QEAAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D72CC (-RuntimeClassInitialize@BluetoothVolumeAndMute@BluetoothControls@@QEAAJPEAUIMMDevice@@PEBGPEAUIC.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetPath@VolumeHelpers@@YAJPEAUIMMDevice@@PEAPEAUIPartsList@@@Z @ 0x18008701C (-GetPath@VolumeHelpers@@YAJPEAUIMMDevice@@PEAPEAUIPartsList@@@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D0C70 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Make@CMuteHardware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteControlHandler@@@Z @ 0x1801025B4 (-Make@CMuteHardware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMut.c)
 *     ?Make@CMuteSoftware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAPEAVIMuteControlHandler@@@Z @ 0x180102724 (-Make@CMuteSoftware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAPEAVIMuteControlHandler@.c)
 *     ?Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolumeControlHandler@@@Z @ 0x180114928 (-Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIV.c)
 *     ?Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAPEAVIVolumeControlHandler@@@Z @ 0x180114A60 (-Make@CVolumeSoftware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAPEAVIVolumeControlHand.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BluetoothControls::CreateRealControls(
        struct IMMDevice *a1,
        unsigned __int16 *a2,
        struct IPartsList **a3,
        struct IControlChangeNotify *a4,
        struct IVolumeControlHandler **a5,
        struct IMuteControlHandler **a6)
{
  struct IPartsList *v10; // r9
  struct IVolumeControlHandler *v11; // rcx
  int v12; // eax
  struct IMuteControlHandler *v13; // rcx
  int v14; // eax
  int v16; // [rsp+20h] [rbp-28h]
  struct IPartsList *v17[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v17[0] = 0LL;
  VolumeHelpers::GetPath((VolumeHelpers *)a1, (struct IMMDevice *)v17, a3);
  if ( v17[0] )
  {
    v11 = *a5;
    *a5 = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(struct IVolumeControlHandler *))(*(_QWORD *)v11 + 16LL))(v11);
    CVolumeHardware::Make(a1, a2, (struct IControlChangeNotify *)a3, v10, a5);
  }
  if ( !*a5 )
  {
    *a5 = 0LL;
    v12 = CVolumeSoftware::Make(a1, a2, (struct IControlChangeNotify *)a3, a5);
    if ( v12 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        1438LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)v12,
        v16);
  }
  if ( v17[0] )
  {
    v13 = *a6;
    *a6 = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(struct IMuteControlHandler *))(*(_QWORD *)v13 + 16LL))(v13);
    CMuteHardware::Make(a1, a2, a4, v17[0], a6);
  }
  if ( !*a6 )
  {
    *a6 = 0LL;
    v14 = CMuteSoftware::Make(a1, a2, a4, a6);
    if ( v14 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        1447LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)v14,
        v16);
  }
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v17);
}
