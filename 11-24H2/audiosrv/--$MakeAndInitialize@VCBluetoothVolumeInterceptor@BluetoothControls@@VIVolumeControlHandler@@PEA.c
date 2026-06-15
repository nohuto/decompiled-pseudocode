/*
 * XREFs of ??$MakeAndInitialize@VCBluetoothVolumeInterceptor@BluetoothControls@@VIVolumeControlHandler@@PEAVBluetoothVolumeAndMute@2@@Details@WRL@Microsoft@@YAJPEAPEAVIVolumeControlHandler@@$$QEAPEAVBluetoothVolumeAndMute@BluetoothControls@@@Z @ 0x1800D1984
 * Callers:
 *     ?MakeAndInitializeVolume@BluetoothControls@@YAJPEAPEAVIVolumeControlHandler@@PEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@@Z @ 0x1800D561C (-MakeAndInitializeVolume@BluetoothControls@@YAJPEAPEAVIVolumeControlHandler@@PEAUIMMDevice@@PEBG.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VIVolumeControlHandler@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800440E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VIVolumeControlHa.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180044FA0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A25D0 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VIVolumeControlHandler@@@WRL@Microsoft@@QEAA@XZ @ 0x1800D21A4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VIVolumeControlHandler@@@WRL@Microsoft.c)
 *     ??4?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVBluetoothVolumeAndMute@BluetoothControls@@@Z @ 0x1800D286C (--4-$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@QEAAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<BluetoothControls::CBluetoothVolumeInterceptor,IVolumeControlHandler,BluetoothControls::BluetoothVolumeAndMute *>(
        _QWORD *a1,
        _QWORD *a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  volatile int *v7; // rdx
  const struct _GUID *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  v11 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVolumeControlHandler>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVolumeControlHandler>(v5);
    *v6 = &BluetoothControls::CBluetoothVolumeInterceptor::`vftable';
    v6[2] = 0LL;
    v11 = 0LL;
    if ( *a2 )
    {
      wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>::operator=(v6 + 2, *a2);
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_54b307ed_12d5_4a84_919b_f3ec616b3716, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v8, v8) )
      {
        *a1 = v6;
        (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
      }
      else
      {
        v4 = -2147467262;
      }
    }
    else
    {
      v4 = -2147467261;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A3,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\bluetoothcontrols.cpp",
        (const char *)0x80004003LL);
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVolumeControlHandler>::Release(
      (__int64)v6,
      v7);
  }
  else
  {
    v4 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v11);
  return v4;
}
