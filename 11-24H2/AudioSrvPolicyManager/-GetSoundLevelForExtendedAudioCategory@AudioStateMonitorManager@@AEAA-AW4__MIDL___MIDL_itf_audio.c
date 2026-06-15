/*
 * XREFs of ?GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAKPEBG@Z @ 0x18000DB30
 * Callers:
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x18000C510 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?GetSoundLevel@AudioStateMonitorManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x18000DA54 (-GetSoundLevel@AudioStateMonitorManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW.c)
 *     ?RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x18004496C (-RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STRE.c)
 * Callees:
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18000DBD0 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ??0CStreamPolicyVolumeClient@@QEAA@PEAUIAudioProcess@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEBG@Z @ 0x18001F810 (--0CStreamPolicyVolumeClient@@QEAA@PEAUIAudioProcess@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_.c)
 */

__int64 __fastcall AudioStateMonitorManager::GetSoundLevelForExtendedAudioCategory(
        __int64 a1,
        _DWORD *a2,
        unsigned int *a3,
        const unsigned __int16 *a4)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v6; // r8d
  __int64 v7; // r10
  __int64 v8; // rcx
  __int64 v9; // r8
  _BYTE v11[56]; // [rsp+30h] [rbp-38h] BYREF
  float v12; // [rsp+70h] [rbp+8h] BYREF

  v4 = 24;
  if ( a3 )
    v4 = *a3;
  v5 = 0;
  if ( a2 )
    v6 = *a2 == 1;
  else
    v6 = eAll;
  CStreamPolicyVolumeClient::CStreamPolicyVolumeClient(
    (CStreamPolicyVolumeClient *)v11,
    *(struct IAudioProcess **)(a1 + 128),
    v6,
    v4,
    a4);
  v8 = *(_QWORD *)(v7 + 120);
  v12 = 1.0;
  GetPolicyVolumeForAudioStream(v8, v11, v9, &v12);
  if ( v12 >= 1.0 )
    return 2LL;
  LOBYTE(v5) = v12 > 0.0;
  return v5;
}
