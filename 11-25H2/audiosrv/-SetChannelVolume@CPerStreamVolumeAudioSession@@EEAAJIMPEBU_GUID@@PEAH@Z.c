/*
 * XREFs of ?SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800C3F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18001DE30 (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?SetChannelVolume@CAudioSession@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800C3E10 (-SetChannelVolume@CAudioSession@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::SetChannelVolume(
        CPerStreamVolumeAudioSession *this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4,
        int *a5)
{
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = CAudioSession::SetChannelVolume(this, a2, a3, a4, a5);
  v7 = v6;
  if ( v6 >= 0 )
  {
    _InterlockedExchange((volatile __int32 *)this + 244, 1);
    CPerStreamVolumeAudioSession::StartSessionPersistanceTimer(this);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x414,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
