/*
 * XREFs of ??$MakeAndInitialize@VAudioStateMonitorManager@@V1@AEAPEAVCWindowsPolicyManager@@PEAVCProcess@@@Details@WRL@Microsoft@@YAJPEAPEAVAudioStateMonitorManager@@AEAPEAVCWindowsPolicyManager@@$$QEAPEAVCProcess@@@Z @ 0x18002F9B4
 * Callers:
 *     ?GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18001EA70 (-GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL.c)
 *     ?RegisterAudioStateMonitor@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x1800336B0 (-RegisterAudioStateMonitor@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEB.c)
 * Callees:
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001F850 (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800206BC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0AudioStateMonitorManager@@QEAA@XZ @ 0x1800304B4 (--0AudioStateMonitorManager@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AudioStateMonitorManager,AudioStateMonitorManager,CWindowsPolicyManager * &,CProcess *>(
        AudioStateMonitorManager **a1,
        void *a2,
        _QWORD *a3)
{
  unsigned int v5; // edi
  void *v6; // rax
  AudioStateMonitorManager *v7; // rbx
  CWindowsPolicyManager *v8; // rcx
  void *v10; // [rsp+48h] [rbp+10h] BYREF
  void *v11; // [rsp+58h] [rbp+20h]

  v10 = a2;
  v5 = 0;
  *a1 = 0LL;
  v6 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  if ( v6 )
  {
    v11 = v6;
    v7 = AudioStateMonitorManager::AudioStateMonitorManager((AudioStateMonitorManager *)v6);
    v10 = 0LL;
    v8 = g_PolicyManager;
    *((_QWORD *)v7 + 16) = *a3;
    *((_QWORD *)v7 + 15) = v8;
    (*(void (__fastcall **)(AudioStateMonitorManager *))(*(_QWORD *)v7 + 8LL))(v7);
    *a1 = v7;
    (*(void (__fastcall **)(AudioStateMonitorManager *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v10);
  return v5;
}
