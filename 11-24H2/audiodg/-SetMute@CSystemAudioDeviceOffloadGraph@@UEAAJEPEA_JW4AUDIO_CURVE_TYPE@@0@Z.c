/*
 * XREFs of ?SetMute@CSystemAudioDeviceOffloadGraph@@UEAAJEPEA_JW4AUDIO_CURVE_TYPE@@0@Z @ 0x140071140
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     WPP_SF_D @ 0x1400659FC (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065CDC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemAudioDeviceOffloadGraph::SetMute(
        CSystemAudioDeviceOffloadGraph *this,
        char a2,
        __int64 *a3,
        enum AUDIO_CURVE_TYPE a4)
{
  __int64 v6; // rdx
  int v7; // ebx
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF

  v9 = *((_OWORD *)this - 8);
  EtwEventActivityIdControl(4LL, &v9);
  LOBYTE(v6) = a2;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10), v6);
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, (__int64)&WPP_73715f9ee22d38db1d35d5de395f8c05_Traceguids, v7);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffloadGraph::SetMute", 341, v7);
  }
  EtwEventActivityIdControl(4LL, &v9);
  return (unsigned int)v7;
}
