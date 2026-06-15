/*
 * XREFs of ?RuntimeClassInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAAJPEBGPEAVBluetoothMute@2@PEAUIControlChangeNotify@@@Z @ 0x1800D6DA8
 * Callers:
 *     ??$MakeAndInitialize@VBluetoothMute@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVBluetoothMute@BluetoothControls@@AEAPEAG$$QEAPEAV34@AEAPEAUIControlChangeNotify@@@Z @ 0x1800D13D0 (--$MakeAndInitialize@VBluetoothMute@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNo.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??4?$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIMuteControlHandler@@@Z @ 0x1800A0888 (--4-$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIMuteContro.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D0C70 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CommonInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAXPEAUIMMDevice@@@Z @ 0x1800D2FD8 (-CommonInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@Bl.c)
 *     ?MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D5760 (-MakeRealControl@BluetoothMute@BluetoothControls@@SAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEBG.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::RuntimeClassInitialize(
        struct IPartsList **a1,
        unsigned __int16 *a2,
        struct IControlChangeNotifyVtbl *a3,
        __int64 a4)
{
  struct IMMDeviceEnumeratorVtbl *lpVtbl; // rax
  __int64 (*GetDevice)(void); // rax
  int v10; // eax
  struct IControlChangeNotifyVtbl *v11; // rsi
  struct IMuteControlHandler *RealControl; // rax
  const char *v13; // r9
  __int64 result; // rax
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IMMDevice *v17; // [rsp+40h] [rbp+8h] BYREF

  *((_BYTE *)a1 + 112) = 0;
  v17 = 0LL;
  lpVtbl = g_DeviceEnumerator->lpVtbl;
  v17 = 0LL;
  GetDevice = (__int64 (*)(void))lpVtbl->GetDevice;
  try
  {
    v10 = GetDevice();
    if ( v10 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        281LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)(unsigned int)v10,
        v15);
    v11 = (struct IControlChangeNotifyVtbl *)a1[13];
    a1[13] = (struct IPartsList *)a3;
    if ( a3 )
      (*((void (__fastcall **)(struct IControlChangeNotifyVtbl *))a3->QueryInterface + 1))(a3);
    if ( v11 )
      (*((void (__fastcall **)(struct IControlChangeNotifyVtbl *))v11->QueryInterface + 2))(v11);
    BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::CommonInitialize(
      (__int64)a1,
      (__int64 *)v17);
    RealControl = BluetoothControls::BluetoothMute::MakeRealControl(v17, a2, a1);
    wil::com_ptr_t<IMuteControlHandler,wil::err_exception_policy>::operator=((__int64 *)a1 + 15, (__int64)RealControl);
    wil::com_ptr_t<IMuteControlHandler,wil::err_exception_policy>::operator=((__int64 *)a1 + 16, a4);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x122,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
                           v13);
  }
  return result;
}
