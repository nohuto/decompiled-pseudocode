/*
 * XREFs of ??$MakeAndInitialize@VBluetoothMute@BluetoothControls@@VIMuteControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVIMuteControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Z @ 0x1800A3514
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x1800202E8 (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Attach@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z @ 0x180088A70 (-Attach@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A6194 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0BluetoothMute@BluetoothControls@@QEAA@XZ @ 0x1800D055C (--0BluetoothMute@BluetoothControls@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800D134C (-RuntimeClassInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::BluetoothMute,IMuteControlHandler,IMMDevice * &,IControlChangeNotify * &>(
        _QWORD *a1,
        struct IMMDevice **a2)
{
  struct IControlChangeNotify *v4; // rax
  __int64 v6; // rax
  struct IControlChangeNotify *v7; // rbx
  int v8; // edi
  struct IControlChangeNotify *v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  *a1 = 0LL;
  v4 = (struct IControlChangeNotify *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  if ( !v4 )
    return 2147942414LL;
  v6 = BluetoothControls::BluetoothMute::BluetoothMute((BluetoothControls::BluetoothMute *)v4);
  v9 = 0LL;
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::Attach((__int64 *)&v9, v6);
  v10 = 0LL;
  v7 = v9;
  v8 = BluetoothControls::BluetoothControl<IMuteControlHandler,BluetoothControls::BluetoothMute>::RuntimeClassInitialize(
         v9,
         *a2);
  if ( v8 >= 0 )
  {
    v8 = ((__int64 (__fastcall *)(struct IControlChangeNotify *, GUID *, _QWORD *))v7->lpVtbl->QueryInterface)(
           v7,
           &GUID_0de91f7a_b20c_48c4_9f1e_9289042885aa,
           a1);
    ((void (__fastcall *)(struct IControlChangeNotify *))v7->lpVtbl->Release)(v7);
  }
  else if ( v7 )
  {
    ((void (__fastcall *)(struct IControlChangeNotify *))v7->lpVtbl->Release)(v7);
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v10);
  return (unsigned int)v8;
}
