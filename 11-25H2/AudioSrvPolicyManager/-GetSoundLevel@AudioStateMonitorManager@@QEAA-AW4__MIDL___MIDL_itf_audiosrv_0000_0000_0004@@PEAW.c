/*
 * XREFs of ?GetSoundLevel@AudioStateMonitorManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x18000D2E4
 * Callers:
 *     ?GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18001EC10 (-GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL.c)
 * Callees:
 *     ?GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAKPEBG@Z @ 0x18000D3C0 (-GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA-AW4__MIDL___MIDL_itf_audio.c)
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18000D460 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ?DeriveAudioServerStreamCategory@@YAJW4_AUDIO_STREAM_CATEGORY@@KPEAK@Z @ 0x1800187E0 (-DeriveAudioServerStreamCategory@@YAJW4_AUDIO_STREAM_CATEGORY@@KPEAK@Z.c)
 *     ??0CStreamPolicyVolumeClient@@QEAA@PEAUIAudioProcess@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEBG@Z @ 0x18001F930 (--0CStreamPolicyVolumeClient@@QEAA@PEAUIAudioProcess@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_.c)
 */

__int64 __fastcall AudioStateMonitorManager::GetSoundLevel(
        __int64 a1,
        _DWORD *a2,
        enum _AUDIO_STREAM_CATEGORY *a3,
        const unsigned __int16 *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r10
  unsigned int v8; // edi
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v9; // r8d
  __int64 v10; // r10
  __int64 v11; // rcx
  __int64 v12; // r8
  _BYTE v14[56]; // [rsp+30h] [rbp-38h] BYREF
  float v15; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  v15 = 0.0;
  if ( a3 )
  {
    if ( (int)DeriveAudioServerStreamCategory(*a3, (unsigned int)a2, (unsigned int *)&v15) >= 0 )
      return (unsigned int)AudioStateMonitorManager::GetSoundLevelForExtendedAudioCategory(v7, v5, &v15, v6);
  }
  else
  {
    v8 = 2;
    if ( a2 )
      v9 = *a2 == 1;
    else
      v9 = eAll;
    CStreamPolicyVolumeClient::CStreamPolicyVolumeClient(
      (CStreamPolicyVolumeClient *)v14,
      *(struct IAudioProcess **)(a1 + 128),
      v9,
      0x18u,
      a4);
    v11 = *(_QWORD *)(v10 + 120);
    v15 = 1.0;
    GetPolicyVolumeForAudioStream(v11, v14, v12, &v15);
    if ( v15 < 1.0 )
    {
      v8 = 0;
      LOBYTE(v8) = v15 > 0.0;
    }
    return v8;
  }
  return v4;
}
