/*
 * XREFs of BluetoothControls::IsCaptureEndpoint @ 0x1800D52E0
 * Callers:
 *     ?ShouldUseBluetoothControls@BluetoothControls@@YAJPEAUIMMDevice@@PEA_N@Z @ 0x18007AA80 (-ShouldUseBluetoothControls@BluetoothControls@@YAJPEAUIMMDevice@@PEA_N@Z.c)
 *     ?MakeAndInitializeMute@BluetoothControls@@YAJPEAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D54D8 (-MakeAndInitializeMute@BluetoothControls@@YAJPEAPEAVIMuteControlHandler@@PEAUIMMDevice@@PEBGPEAU.c)
 *     ?MakeAndInitializeVolume@BluetoothControls@@YAJPEAPEAVIVolumeControlHandler@@PEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D561C (-MakeAndInitializeVolume@BluetoothControls@@YAJPEAPEAVIVolumeControlHandler@@PEAUIMMDevice@@PEBG.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BluetoothControls::IsCaptureEndpoint(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        bool *a2)
{
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  v4 = **a1;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v11);
  v5 = v4(a1, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5, &v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v10 = 0;
    v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 24LL))(v11, &v10);
    v6 = v5;
    if ( v5 >= 0 )
    {
      *a2 = v10 == 1;
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 32LL;
  }
  else
  {
    v7 = 29LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
    (const char *)(unsigned int)v5);
LABEL_7:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
  return v6;
}
