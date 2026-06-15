/*
 * XREFs of ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x14001AADC
 * Callers:
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140050178 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 * Callees:
 *     ??0AudioDeviceModulesManager@Devices@Media@Windows@@QEAA@XZ @ 0x14001ABA4 (--0AudioDeviceModulesManager@Devices@Media@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x14001AC28 (-RuntimeClassInitialize@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005562C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::AudioDeviceModulesManager,Windows::Media::Devices::IAudioDeviceModulesManager,void *>(
        _QWORD *a1,
        void **a2)
{
  Windows::Media::Devices::AudioDeviceModulesManager *v4; // rax
  Windows::Media::Devices::AudioDeviceModulesManager *v5; // rdi
  int v6; // ebx
  Windows::Media::Devices::AudioDeviceModulesManager *v8; // [rsp+30h] [rbp+8h] BYREF
  Windows::Media::Devices::AudioDeviceModulesManager *v9; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = (Windows::Media::Devices::AudioDeviceModulesManager *)operator new(
                                                               0x88uLL,
                                                               (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  if ( !v4 )
    return 2147942414LL;
  v5 = (Windows::Media::Devices::AudioDeviceModulesManager *)Windows::Media::Devices::AudioDeviceModulesManager::AudioDeviceModulesManager(v4);
  v9 = v5;
  v8 = 0LL;
  v6 = Windows::Media::Devices::AudioDeviceModulesManager::RuntimeClassInitialize(v5, *a2);
  if ( v6 < 0 )
  {
    if ( v5 )
      (*(void (__fastcall **)(Windows::Media::Devices::AudioDeviceModulesManager *))(*(_QWORD *)v5 + 16LL))(v5);
    Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v8);
  }
  else
  {
    v6 = (**(__int64 (__fastcall ***)(Windows::Media::Devices::AudioDeviceModulesManager *, GUID *, _QWORD *))v5)(
           v5,
           &GUID_6aa40c4d_960a_4d1c_b318_0022604547ed,
           a1);
    (*(void (__fastcall **)(Windows::Media::Devices::AudioDeviceModulesManager *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (unsigned int)v6;
}
