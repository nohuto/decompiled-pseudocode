/*
 * XREFs of ??$MakeAndInitialize@VBluetoothVolumeAndMute@BluetoothControls@@V12@AEAPEAUIMMDevice@@AEAPEBGAEAPEAUIControlChangeNotify@@@Details@WRL@Microsoft@@YAJPEAPEAVBluetoothVolumeAndMute@BluetoothControls@@AEAPEAUIMMDevice@@AEAPEBGAEAPEAUIControlChangeNotify@@@Z @ 0x1800D17B0
 * Callers:
 *     BluetoothControls::GetOrCreateBluetoothVolumeAndMute @ 0x1800D466C (BluetoothControls--GetOrCreateBluetoothVolumeAndMute.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000D600 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000F870 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A25D0 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0BluetoothVolumeAndMute@BluetoothControls@@QEAA@XZ @ 0x1800D2338 (--0BluetoothVolumeAndMute@BluetoothControls@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@BluetoothVolumeAndMute@BluetoothControls@@QEAAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D72CC (-RuntimeClassInitialize@BluetoothVolumeAndMute@BluetoothControls@@QEAAJPEAUIMMDevice@@PEBGPEAUIC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::BluetoothVolumeAndMute,BluetoothControls::BluetoothVolumeAndMute,IMMDevice * &,unsigned short const * &,IControlChangeNotify * &>(
        __int64 *a1,
        struct IMMDevice **a2,
        const unsigned __int16 **a3,
        struct IControlChangeNotify **a4)
{
  void *v8; // rax
  int v9; // edi
  __int64 v10; // rbx
  volatile int *v11; // rdx
  void *v13; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = operator new(0x120uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v8;
  if ( v8 )
  {
    v10 = BluetoothControls::BluetoothVolumeAndMute::BluetoothVolumeAndMute((BluetoothControls::BluetoothVolumeAndMute *)v8);
    v13 = 0LL;
    v9 = BluetoothControls::BluetoothVolumeAndMute::RuntimeClassInitialize(
           (BluetoothControls::BluetoothVolumeAndMute *)v10,
           *a2,
           *a3,
           *a4);
    if ( v9 >= 0 )
    {
      if ( v10 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v10 + 12), v11);
      *a1 = v10;
      if ( v10 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v10);
      v9 = 0;
    }
    else if ( v10 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v10);
    }
  }
  else
  {
    v9 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v13);
  return (unsigned int)v9;
}
