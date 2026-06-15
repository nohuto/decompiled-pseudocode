/*
 * XREFs of ??$MakeAndInitialize@VCCpuMemoryBufferFactory@@UIDeviceGraphBufferFactory@@AEB_KAEB_KAEB_K@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphBufferFactory@@AEB_K11@Z @ 0x140034558
 * Callers:
 *     ?CreateCpuMemoryBufferFactory@@YAJ_K00PEAPEAUIDeviceGraphBufferFactory@@@Z @ 0x1400344F8 (-CreateCpuMemoryBufferFactory@@YAJ_K00PEAPEAUIDeviceGraphBufferFactory@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffectsPropertyChangeNotificationClient@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400222B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffe.c)
 *     ?RuntimeClassInitialize@CCpuMemoryBufferFactory@@QEAAJ_K00@Z @ 0x14003461C (-RuntimeClassInitialize@CCpuMemoryBufferFactory@@QEAAJ_K00@Z.c)
 *     ??0CCpuMemoryBufferFactory@@QEAA@XZ @ 0x140034760 (--0CCpuMemoryBufferFactory@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCpuMemoryBufferFactory,IDeviceGraphBufferFactory,unsigned __int64 const &,unsigned __int64 const &,unsigned __int64 const &>(
        CCpuMemoryBufferFactory **a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  CCpuMemoryBufferFactory *v8; // rax
  CCpuMemoryBufferFactory *v9; // rbx
  volatile int *v10; // rdx
  int v11; // edi
  volatile int *v12; // rdx

  *a1 = 0LL;
  v8 = (CCpuMemoryBufferFactory *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v9 = CCpuMemoryBufferFactory::CCpuMemoryBufferFactory(v8);
    v11 = CCpuMemoryBufferFactory::RuntimeClassInitialize(v9, *a2, *a3, *a4);
    if ( v11 < 0 )
    {
      if ( v9 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSystemEffectsPropertyChangeNotificationClient>::Release(
          (__int64)v9,
          v10);
    }
    else
    {
      *a1 = v9;
      (*(void (__fastcall **)(CCpuMemoryBufferFactory *))(*(_QWORD *)v9 + 8LL))(v9);
      if ( v9 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSystemEffectsPropertyChangeNotificationClient>::Release(
          (__int64)v9,
          v12);
      return 0;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
