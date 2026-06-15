/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18006521C
 * Callers:
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180021B50 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x180026484 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x180059DCC (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?DisconnectFromRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@H@Z @ 0x18005AA70 (-DisconnectFromRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@H@Z.c)
 *     ?OnMfxEffectsChanged@CAudioStream@@QEAAXXZ @ 0x18005E130 (-OnMfxEffectsChanged@CAudioStream@@QEAAXXZ.c)
 *     ?OnPropertyValueChanged@CMMNotificationDelegator@AudioEffectsWatcher@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x1800B36E0 (-OnPropertyValueChanged@CMMNotificationDelegator@AudioEffectsWatcher@@UEAAJPEBGU_tagpropertykey@.c)
 *     ?HandleSetMasterVolumeLevelScalar@BluetoothVolumeAndMute@BluetoothControls@@QEAAJMPEBU_GUID@@PEAH@Z @ 0x1800D4BDC (-HandleSetMasterVolumeLevelScalar@BluetoothVolumeAndMute@BluetoothControls@@QEAAJMPEBU_GUID@@PEA.c)
 *     ?HandleSetMute@BluetoothVolumeAndMute@BluetoothControls@@QEAAJHPEBU_GUID@@PEAH@Z @ 0x1800D4DC0 (-HandleSetMute@BluetoothVolumeAndMute@BluetoothControls@@QEAAJHPEBU_GUID@@PEAH@Z.c)
 *     ?SyncVolumeAndMuteState@BluetoothVolumeAndMute@BluetoothControls@@AEAAJKPEBU_GUID@@@Z @ 0x1800D8148 (-SyncVolumeAndMuteState@BluetoothVolumeAndMute@BluetoothControls@@AEAAJKPEBU_GUID@@@Z.c)
 *     ?ProcessWorkItem@CWorkFifo@@AEAAXXZ @ 0x18012174C (-ProcessWorkItem@CWorkFifo@@AEAAXXZ.c)
 *     ?Shutdown@CWorkFifo@@QEAAXXZ @ 0x180122594 (-Shutdown@CWorkFifo@@QEAAXXZ.c)
 *     ?TimerCallback@CWorkFifo@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1801225D0 (-TimerCallback@CWorkFifo@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800AA568 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  unsigned int v2; // r8d
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x9D3, v2, v3);
}
