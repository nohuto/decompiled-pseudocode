/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffectsPropertyChangeNotificationClient@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400225B0
 * Callers:
 *     ??1?$com_ptr_t@VCCpuMemoryBufferFactory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14002269C (--1-$com_ptr_t@VCCpuMemoryBufferFactory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCCpuMemoryBufferFactory@@UIDeviceGraphBufferFactory@@AEB_KAEB_KAEB_K@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphBufferFactory@@AEB_K11@Z @ 0x140034858 (--$MakeAndInitialize@VCCpuMemoryBufferFactory@@UIDeviceGraphBufferFactory@@AEB_KAEB_KAEB_K@Detai.c)
 *     ??1?$ComPtr@VCCpuMemoryBufferFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x14004B1DC (--1-$ComPtr@VCCpuMemoryBufferFactory@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x14001CA2C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSystemEffectsPropertyChangeNotificationClient>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r10

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 12), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 32LL))(v3, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
