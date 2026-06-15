/*
 * XREFs of ??$MakeAndInitialize@VAudioEffectsWatcher@@UIAudioEffectsWatcher@@AEAPEBGAEAKAEAHAEAW4DiscoverySettings@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioEffectsWatcher@@AEAPEBGAEAKAEAHAEAW4DiscoverySettings@@@Z @ 0x1800B414C
 * Callers:
 *     ?GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatcher@@@Z @ 0x1800B47C8 (-GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatche.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800525F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioRenderEndpo.c)
 *     ?RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z @ 0x1800580B0 (-RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A6194 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEffectsWatcher@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEffectsWatcher@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800B3FA4 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEffectsWat.c)
 *     ??0AudioEffectsWatcher@@QEAA@XZ @ 0x1800B4240 (--0AudioEffectsWatcher@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AudioEffectsWatcher,IAudioEffectsWatcher,unsigned short const * &,unsigned long &,int &,enum DiscoverySettings &>(
        _QWORD *a1,
        const WCHAR **a2,
        int *a3,
        int *a4,
        int *a5)
{
  void *v9; // rax
  int v10; // edi
  AudioEffectsWatcher *v11; // rbx
  void *v13; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v9;
  if ( v9 )
  {
    v11 = AudioEffectsWatcher::AudioEffectsWatcher((AudioEffectsWatcher *)v9);
    v13 = 0LL;
    v10 = AudioEffectsWatcher::RuntimeClassInitialize((__int64)v11, *a2, *a3, *a4, *a5);
    if ( v10 >= 0 )
      v10 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEffectsWatcher>>(
              (__int64)v11,
              &GUID_48da5782_9a1d_444b_b5d2_aa2dee616db4,
              a1);
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioRenderEndpointChangeDelegator>::Release((__int64)v11);
  }
  else
  {
    v10 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v13);
  return (unsigned int)v10;
}
