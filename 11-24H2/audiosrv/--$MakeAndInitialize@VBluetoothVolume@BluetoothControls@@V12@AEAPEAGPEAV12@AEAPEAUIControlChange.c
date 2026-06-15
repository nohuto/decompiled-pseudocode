/*
 * XREFs of ??$MakeAndInitialize@VBluetoothVolume@BluetoothControls@@V12@AEAPEAGPEAV12@AEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVBluetoothVolume@BluetoothControls@@AEAPEAG$$QEAPEAV34@AEAPEAUIControlChangeNotify@@@Z @ 0x1800D15C0
 * Callers:
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D6EA4 (-RuntimeClassInitialize@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothCon.c)
 * Callees:
 *     ?Attach@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z @ 0x180075F70 (-Attach@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A25D0 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0BluetoothVolume@BluetoothControls@@QEAA@XZ @ 0x1800D2300 (--0BluetoothVolume@BluetoothControls@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAAJPEBGPEAVBluetoothVolume@2@PEAUIControlChangeNotify@@@Z @ 0x1800D71D0 (-RuntimeClassInitialize@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume_ea_1800D71D0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::BluetoothVolume,BluetoothControls::BluetoothVolume,unsigned short * &,BluetoothControls::BluetoothVolume *,IControlChangeNotify * &>(
        struct IControlChangeNotify **a1,
        unsigned __int16 **a2)
{
  struct IControlChangeNotify *v4; // rax
  int v5; // edi
  __int64 v6; // rax
  struct IControlChangeNotify *v7; // rbx
  struct IControlChangeNotify *v9; // [rsp+20h] [rbp-18h] BYREF
  struct IControlChangeNotify *v10; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (struct IControlChangeNotify *)operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  v10 = v4;
  if ( v4 )
  {
    v6 = BluetoothControls::BluetoothVolume::BluetoothVolume((BluetoothControls::BluetoothVolume *)v4);
    v10 = 0LL;
    Microsoft::WRL::ComPtr<ISaDeviceProxy>::Attach((__int64 *)&v10, v6);
    v9 = 0LL;
    v7 = v10;
    v5 = BluetoothControls::BluetoothControl<IVolumeControlHandler,BluetoothControls::BluetoothVolume>::RuntimeClassInitialize(
           v10,
           *a2);
    if ( v5 >= 0 )
    {
      if ( v7 )
        ((void (__fastcall *)(struct IControlChangeNotify *))v7->lpVtbl->AddRef)(v7);
      *a1 = v7;
      if ( v7 )
        ((void (__fastcall *)(struct IControlChangeNotify *))v7->lpVtbl->Release)(v7);
      v5 = 0;
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
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>((void **)&v9);
  return (unsigned int)v5;
}
