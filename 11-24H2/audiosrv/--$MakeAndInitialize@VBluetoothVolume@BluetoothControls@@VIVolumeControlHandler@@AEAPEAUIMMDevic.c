/*
 * XREFs of ??$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@VIVolumeControlHandler@@AEAPEAUIMMDevice@@AEAPEBGAEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVIVolumeControlHandler@@AEAPEAUIMMDevice@@AEAPEBGAEAPEAUIControlChangeNotify@@@Z @ 0x1800D16BC
 * Callers:
 *     ?MakeAndInitializeVolume@BluetoothControls@@YAJPEAPEAVIVolumeControlHandler@@PEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D561C (-MakeAndInitializeVolume@BluetoothControls@@YAJPEAPEAVIVolumeControlHandler@@PEAUIMMDevice@@PEBG.c)
 * Callees:
 *     ?Attach@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z @ 0x180075F70 (-Attach@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A25D0 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0BluetoothVolume@BluetoothControls@@QEAA@XZ @ 0x1800D2300 (--0BluetoothVolume@BluetoothControls@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D6EA4 (-RuntimeClassInitialize@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothCon.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::BluetoothVolume,IVolumeControlHandler,IMMDevice * &,unsigned short const * &,IControlChangeNotify * &>(
        _QWORD *a1,
        struct IMMDevice **a2,
        unsigned __int16 **a3)
{
  struct IControlChangeNotify *v6; // rax
  int v7; // edi
  __int64 v8; // rax
  struct IControlChangeNotify *v9; // rbx
  struct IControlChangeNotify *v11; // [rsp+20h] [rbp-18h] BYREF
  struct IControlChangeNotify *v12; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (struct IControlChangeNotify *)operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v6;
  v12 = v6;
  if ( v6 )
  {
    v8 = BluetoothControls::BluetoothVolume::BluetoothVolume((BluetoothControls::BluetoothVolume *)v6);
    v12 = 0LL;
    Microsoft::WRL::ComPtr<ISaDeviceProxy>::Attach((__int64 *)&v12, v8);
    v11 = 0LL;
    v9 = v12;
    v7 = BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::RuntimeClassInitialize(
           v12,
           *a2,
           *a3);
    if ( v7 >= 0 )
    {
      v7 = ((__int64 (__fastcall *)(struct IControlChangeNotify *, GUID *, _QWORD *))v9->lpVtbl->QueryInterface)(
             v9,
             &GUID_54b307ed_12d5_4a84_919b_f3ec616b3716,
             a1);
      ((void (__fastcall *)(struct IControlChangeNotify *))v9->lpVtbl->Release)(v9);
    }
    else if ( v9 )
    {
      ((void (__fastcall *)(struct IControlChangeNotify *))v9->lpVtbl->Release)(v9);
    }
  }
  else
  {
    v7 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>((void **)&v11);
  return (unsigned int)v7;
}
