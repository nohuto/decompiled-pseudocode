/*
 * XREFs of ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@HPEAH@Z @ 0x1800C2E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180027D5C (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z @ 0x180072FF0 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::SetMute(
        CPerStreamVolumeAudioSession *this,
        int a2,
        const struct _GUID *a3,
        int a4,
        int *a5)
{
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = CAudioSession::SetMute(this, a2, a3, a4, a5);
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
      (void *)0x380,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
