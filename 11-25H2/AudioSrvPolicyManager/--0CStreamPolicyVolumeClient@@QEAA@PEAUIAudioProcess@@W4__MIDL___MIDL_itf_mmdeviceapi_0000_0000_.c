/*
 * XREFs of ??0CStreamPolicyVolumeClient@@QEAA@PEAUIAudioProcess@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEBG@Z @ 0x18001F930
 * Callers:
 *     ?GetSoundLevel@AudioStateMonitorManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x18000D2E4 (-GetSoundLevel@AudioStateMonitorManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW.c)
 *     ?GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAKPEBG@Z @ 0x18000D3C0 (-GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA-AW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     <none>
 */

CStreamPolicyVolumeClient *__fastcall CStreamPolicyVolumeClient::CStreamPolicyVolumeClient(
        CStreamPolicyVolumeClient *this,
        struct IAudioProcess *a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a3,
        int a4,
        const unsigned __int16 *a5)
{
  CStreamPolicyVolumeClient *result; // rax

  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &CStreamPolicyVolumeClient::`vftable';
  *((_QWORD *)this + 3) = a5;
  result = this;
  *((_DWORD *)this + 4) = a3;
  *((_DWORD *)this + 5) = a4;
  *((_BYTE *)this + 32) = 0;
  return result;
}
