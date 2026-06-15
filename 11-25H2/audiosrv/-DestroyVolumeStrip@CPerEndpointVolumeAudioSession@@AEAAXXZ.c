/*
 * XREFs of ?DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ @ 0x1800859DC
 * Callers:
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800806F0 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800C2DD0 (-Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     WPP_SF_qq @ 0x1800A5DA4 (WPP_SF_qq.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPerEndpointVolumeAudioSession::DestroyVolumeStrip(CPerEndpointVolumeAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 928);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 928));
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 35LL, &WPP_6681b08aa41435022487e8d1ae4eb6cc_Traceguids, this);
  }
  v3 = (__int64 *)((char *)this + 968);
  v4 = *((_QWORD *)this + 121);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v4 + 240LL))(
      v4,
      ((unsigned __int64)this + 920) & -(__int64)(this != 0LL));
    v5 = *v3;
    if ( *v3 )
    {
      *v3 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
