/*
 * XREFs of ??$Make@VAudioDeviceModule@Devices@Media@Windows@@PEAUHSTRING__@@AEAKPEAU5@AEAKAEAKPEAVAudioDeviceBrokerDevice@Internal@234@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModule@Devices@Media@Windows@@@12@$$QEAPEAUHSTRING__@@AEAK011$$QEAPEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Z @ 0x140078528
 * Callers:
 *     ?GetAudioModules@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x14001BF40 (-GetAudioModules@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAU-$IVector@PEAV.c)
 * Callees:
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005562C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0AudioDeviceModule@Devices@Media@Windows@@QEAA@PEAUHSTRING__@@I0IIPEAUIAudioDeviceBrokerDevice@Internal@123@@Z @ 0x140078C4C (--0AudioDeviceModule@Devices@Media@Windows@@QEAA@PEAUHSTRING__@@I0IIPEAUIAudioDeviceBrokerDevice.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Microsoft::WRL::Details::Make<Windows::Media::Devices::AudioDeviceModule,HSTRING__ *,unsigned long &,HSTRING__ *,unsigned long &,unsigned long &,Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>(
        __int64 *a1,
        HSTRING *a2,
        unsigned int *a3,
        HSTRING *a4,
        unsigned int *a5,
        unsigned int *a6,
        struct Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice **a7)
{
  void *v11; // rcx
  __int64 v12; // rdi
  void *v14; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v11;
  if ( v11 )
  {
    v12 = Windows::Media::Devices::AudioDeviceModule::AudioDeviceModule(
            (Windows::Media::Devices::AudioDeviceModule *)v11,
            *a2,
            *a3,
            *a4,
            *a5,
            *a6,
            *a7);
    if ( *a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v12;
    v14 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v14);
  return a1;
}
