/*
 * XREFs of ??$MakeAndInitialize@VBluetoothAudioResourceManagerTokenContext@CBluetoothAudioEndpointResourceManagerProvider@@V12@AEBQEAUIBtAudioResourceManager@@AEAPEAV2@@Details@WRL@Microsoft@@YAJPEAPEAVBluetoothAudioResourceManagerTokenContext@CBluetoothAudioEndpointResourceManagerProvider@@AEBQEAUIBtAudioResourceManager@@AEAPEAV4@@Z @ 0x1800EBDE4
 * Callers:
 *     ??$AcquireToken@PEAUIBtAudioResourceManager@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAJAEBQEAUIBtAudioResourceManager@@_NPEAPEAUIUnknown@@PEA_N@Z @ 0x1800EB4CC (--$AcquireToken@PEAUIBtAudioResourceManager@@@-$TokenManager@VCBluetoothAudioEndpointResourceMan.c)
 * Callees:
 *     ??4?$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIMuteControlHandler@@@Z @ 0x1800A4454 (--4-$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIMuteContro.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A6194 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CBluetoothAudioEndpointResourceManagerProvider::BluetoothAudioResourceManagerTokenContext,CBluetoothAudioEndpointResourceManagerProvider::BluetoothAudioResourceManagerTokenContext,IBtAudioResourceManager * const &,CBluetoothAudioEndpointResourceManagerProvider * &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned int v5; // ebx
  __int64 *v6; // rax
  __int64 *v7; // rdi
  __int64 *v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  v5 = 0;
  *a1 = 0LL;
  v6 = (__int64 *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v9 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 3) = 1;
    *v6 = (__int64)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IBluetoothAudioResourceManagerTokenContext>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v7 = (__int64)&CBluetoothAudioEndpointResourceManagerProvider::BluetoothAudioResourceManagerTokenContext::`vftable';
    v7[2] = 0LL;
    v9 = 0LL;
    wil::com_ptr_t<IMuteControlHandler,wil::err_exception_policy>::operator=(v7 + 2, *a2);
    (*(void (__fastcall **)(__int64 *))(*v7 + 8))(v7);
    *a1 = v7;
    (*(void (__fastcall **)(__int64 *))(*v7 + 16))(v7);
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>((void **)&v9);
  return v5;
}
