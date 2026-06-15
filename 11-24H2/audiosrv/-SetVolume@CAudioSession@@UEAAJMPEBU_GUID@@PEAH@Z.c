/*
 * XREFs of ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x180028110
 * Callers:
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z @ 0x180028010 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x180028798 (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     ?ResetPolicyGainStages@CAudioSession@@AEAAXXZ @ 0x18002888C (-ResetPolicyGainStages@CAudioSession@@AEAAXXZ.c)
 *     ?ValidateAudioLevel@@YA_NM@Z @ 0x1800A264C (-ValidateAudioLevel@@YA_NM@Z.c)
 *     WPP_SF_Sg @ 0x1800C32A0 (WPP_SF_Sg.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioSession::SetVolume(CAudioSession *this, float a2, const struct _GUID *a3, int *a4)
{
  int v7; // edi
  int v9; // xmm6_4
  float v10; // xmm6_4
  int v11; // [rsp+20h] [rbp-58h]
  double v12; // [rsp+20h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v12 = a2;
    WPP_SF_Sg(*((_QWORD *)WPP_GLOBAL_Control + 2), 17, (_DWORD)a3, *((_QWORD *)this + 82), SLOBYTE(v12));
  }
  v7 = 0;
  if ( ValidateAudioLevel(a2) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    v9 = *((_DWORD *)this + 194);
    AudioSrvVolumeTelemetry::Update((CAudioSession *)((char *)this + 792));
    *((_DWORD *)this + 219) = v9;
    *((float *)this + 220) = a2;
    v10 = *((float *)this + 194);
    *((float *)this + 194) = a2;
    if ( this != (CAudioSession *)-736LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    CAudioSession::ResetPolicyGainStages(this);
    LOBYTE(v11) = 0;
    (*(void (__fastcall **)(char *, _QWORD, const struct _GUID *, __int64, int, _QWORD))(*((_QWORD *)this + 1) + 152LL))(
      (char *)this + 8,
      0LL,
      a3,
      0xFFFFFFFFLL,
      v11,
      0LL);
    if ( a4 )
    {
      if ( v10 == a2 )
        v7 = 1;
      *a4 = v7;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32E,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
