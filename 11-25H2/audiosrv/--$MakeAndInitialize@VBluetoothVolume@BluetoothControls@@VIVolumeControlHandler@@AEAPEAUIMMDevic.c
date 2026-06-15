/*
 * XREFs of ??$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@VIVolumeControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVIVolumeControlHandler@@AEAPEAUIMMDevice@@AEAPEAUIControlChangeNotify@@@Z @ 0x1800D0228
 * Callers:
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x1800202E8 (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?Attach@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z @ 0x180088A70 (-Attach@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A6194 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0BluetoothVolume@BluetoothControls@@QEAA@XZ @ 0x1800D0594 (--0BluetoothVolume@BluetoothControls@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800D16B8 (-RuntimeClassInitialize@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothCon.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::BluetoothVolume,IVolumeControlHandler,IMMDevice * &,IControlChangeNotify * &>(
        _QWORD *a1,
        struct IMMDevice **a2)
{
  struct IControlChangeNotify *v4; // rax
  int v5; // edi
  __int64 v6; // rax
  struct IControlChangeNotify *v7; // rbx
  struct IControlChangeNotify *v9; // [rsp+30h] [rbp+8h] BYREF
  struct IControlChangeNotify *v10; // [rsp+48h] [rbp+20h] BYREF

  *a1 = 0LL;
  v4 = (struct IControlChangeNotify *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v4;
  v9 = v4;
  if ( v4 )
  {
    v6 = BluetoothControls::BluetoothVolume::BluetoothVolume((BluetoothControls::BluetoothVolume *)v4);
    v9 = 0LL;
    Microsoft::WRL::ComPtr<ISaDeviceProxy>::Attach((__int64 *)&v9, v6);
    v10 = 0LL;
    v7 = v9;
    v5 = BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::RuntimeClassInitialize(
           v9,
           *a2);
    if ( v5 >= 0 )
    {
      v5 = ((__int64 (__fastcall *)(struct IControlChangeNotify *, GUID *, _QWORD *))v7->lpVtbl->QueryInterface)(
             v7,
             &GUID_52b4411a_db00_4d9c_8797_992d2de2cf2d,
             a1);
      ((void (__fastcall *)(struct IControlChangeNotify *))v7->lpVtbl->Release)(v7);
    }
    else if ( v7 )
    {
      ((void (__fastcall *)(struct IControlChangeNotify *))v7->lpVtbl->Release)(v7);
    }
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>((void **)&v10);
  return (unsigned int)v5;
}
