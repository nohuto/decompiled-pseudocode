/*
 * XREFs of ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18000C9E8
 * Callers:
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18000B950 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18001DA20 (-Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z @ 0x180028010 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@std@@QEAAXPEAU_RecurringTask@@@Z @ 0x18000CA44 (-reset@-$unique_ptr@U_RecurringTask@@U-$default_delete@U_RecurringTask@@@std@@@std@@QEAAXPEAU_Re.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::StopSessionPersistanceTimer(CPerStreamVolumeAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 936);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 936));
  std::unique_ptr<_RecurringTask>::reset((char *)this + 984, 0LL);
  if ( v1 )
    LeaveCriticalSection(v1);
  return 0LL;
}
