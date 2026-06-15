/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180074F3C
 * Callers:
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x18001D98C (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x18006643C (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?DisconnectFromRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@H@Z @ 0x180067750 (-DisconnectFromRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@H@Z.c)
 *     ?OnMfxEffectsChanged@CAudioStream@@QEAAXXZ @ 0x18006C030 (-OnMfxEffectsChanged@CAudioStream@@QEAAXXZ.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18007BAA0 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?OnPropertyValueChanged@CMMNotificationDelegator@AudioEffectsWatcher@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x1800B4B20 (-OnPropertyValueChanged@CMMNotificationDelegator@AudioEffectsWatcher@@UEAAJPEBGU_tagpropertykey@.c)
 *     ?ProcessWorkItem@CWorkFifo@@AEAAXXZ @ 0x180119ACC (-ProcessWorkItem@CWorkFifo@@AEAAXXZ.c)
 *     ?Shutdown@CWorkFifo@@QEAAXXZ @ 0x18011A914 (-Shutdown@CWorkFifo@@QEAAXXZ.c)
 *     ?TimerCallback@CWorkFifo@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18011A950 (-TimerCallback@CWorkFifo@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800ADE38 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  unsigned int v2; // r8d
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x9C3, v2, v3);
}
