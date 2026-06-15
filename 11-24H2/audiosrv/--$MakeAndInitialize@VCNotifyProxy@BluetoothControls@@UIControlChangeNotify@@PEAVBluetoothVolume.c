/*
 * XREFs of ??$MakeAndInitialize@VCNotifyProxy@BluetoothControls@@UIControlChangeNotify@@PEAVBluetoothVolumeAndMute@2@P842@EAAJKPEBU_GUID@@@Z@Details@WRL@Microsoft@@YAJPEAPEAUIControlChangeNotify@@$$QEAPEAVBluetoothVolumeAndMute@BluetoothControls@@$$QEAP845@EAAJKPEBU_GUID@@@Z@Z @ 0x1800D1A88
 * Callers:
 *     ?RuntimeClassInitialize@BluetoothVolumeAndMute@BluetoothControls@@QEAAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D72CC (-RuntimeClassInitialize@BluetoothVolumeAndMute@BluetoothControls@@QEAAJPEAUIMMDevice@@PEBGPEAUIC.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcessNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800441A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcessNot.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180044FA0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A25D0 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::CNotifyProxy,IControlChangeNotify,BluetoothControls::BluetoothVolumeAndMute *,long (BluetoothControls::BluetoothVolumeAndMute::*)(unsigned long,_GUID const *)>(
        __int64 *a1,
        _QWORD *a2,
        __int128 *a3)
{
  unsigned int v6; // ebx
  _DWORD *v7; // rax
  __int64 v8; // rdi
  __int128 v9; // xmm0
  volatile int *v10; // rdx
  const struct _GUID *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v14; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  *a1 = 0LL;
  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = (__int64)v7;
  v14 = v7;
  if ( v7 )
  {
    v7[3] = 1;
    *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IControlChangeNotify>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v8 = &BluetoothControls::CNotifyProxy::`vftable';
    v14 = 0LL;
    v9 = *a3;
    if ( *a2 )
    {
      *(_QWORD *)(v8 + 16) = *a2;
      *(_OWORD *)(v8 + 24) = v9;
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_a09513ed_c709_4d21_bd7b_5f34c47f3947, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v11, v11) )
      {
        *a1 = v8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      }
      else
      {
        v6 = -2147467262;
      }
    }
    else
    {
      v6 = -2147467261;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x38C,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)0x80004003LL);
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcessNotification>::Release(
      v8,
      v10);
  }
  else
  {
    v6 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v14);
  return v6;
}
