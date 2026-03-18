/*
 * XREFs of ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14005081C (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 *     ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x140054BC0 (-OnRemoteCloseNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnTimerNotification@CBaseInput@@AEAAJXZ @ 0x140058F50 (-OnTimerNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1400602F0 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 *     NtMITDispatchCompletion @ 0x140060480 (NtMITDispatchCompletion.c)
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1400607D0 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 *     ?HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x140060938 (-HandleSensorDispatcherSignal@IOCPDispatcher@@AEAAXI@Z.c)
 *     ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x140061410 (-OnPnpNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x140063C00 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnRawMouseThrottlingTimer@CMouseSensor@@EEAAJXZ @ 0x1400641B0 (-OnRawMouseThrottlingTimer@CMouseSensor@@EEAAJXZ.c)
 *     ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1400642B0 (-OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ.c)
 *     UserKSTWait @ 0x1400BB4AC (UserKSTWait.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1400D6DC8 (rimDoProcessAnyPointerDeviceInput.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1400EB910 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     HandleMITWakeSignal @ 0x1400EFF98 (HandleMITWakeSignal.c)
 *     ?ProcessMouseQueue@CPTPProcessor@@SAXXZ @ 0x140109410 (-ProcessMouseQueue@CPTPProcessor@@SAXXZ.c)
 *     NtUserInjectGenericHidInput @ 0x14011CB70 (NtUserInjectGenericHidInput.c)
 *     NtUserDownlevelTouchpad @ 0x140121600 (NtUserDownlevelTouchpad.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x14012E3E0 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     NtUserInjectDeviceInput @ 0x140139390 (NtUserInjectDeviceInput.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x140148E60 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     NtUserInjectKeyboardInput @ 0x14016E210 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x14016EBE0 (NtUserInjectMouseInput.c)
 *     rimInputApc @ 0x14017F8E0 (rimInputApc.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1401853C0 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x140187370 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x140189330 (-OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ.c)
 *     InvokeMouseCursorPositionCallout @ 0x140189720 (InvokeMouseCursorPositionCallout.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x14018D338 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 *     ApiSetClientCallDitThread @ 0x140191210 (ApiSetClientCallDitThread.c)
 *     ?OnAsyncWorkItemNotification@CBaseInput@@AEAAJXZ @ 0x140197260 (-OnAsyncWorkItemNotification@CBaseInput@@AEAAJXZ.c)
 *     NtMITSynthesizeMouseInput @ 0x1401B8CC0 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1401B8EC0 (NtMITSynthesizeTouchInput.c)
 *     NtUserInjectPointerInput @ 0x1401BB770 (NtUserInjectPointerInput.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1401FCB24 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x140204F50 (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x14020CDA0 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x14020F380 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPDeferredMouseInputTimer@CHidInput@@EEAAJXZ @ 0x14020F3E0 (-OnPTPDeferredMouseInputTimer@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ @ 0x14020F420 (-OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPMarshalNotification@CHidInput@@EEAAJXZ @ 0x14020F470 (-OnPTPMarshalNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ @ 0x14020F5D0 (-OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x14021EC54 (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x14021F008 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z @ 0x14005264C (-Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z.c)
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1400B1ED0 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

InputTraceLogging::ThreadLockedPerfRegion *__fastcall InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        __int64 **this,
        const char *a2,
        const struct InputTraceLogging::ThreadLockedPerfRegion *a3)
{
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  char *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rbx
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  *this = 0LL;
  if ( (unsigned int)dword_14029AE30 > 6 && (qword_14029AE40 & 1) != 0 && (qword_14029AE48 & 1) == qword_14029AE48 )
  {
    if ( PtiCurrent() )
    {
      UserSessionState = W32GetUserSessionState(v7);
      v9 = Win32AllocateFromPagedLookasideListImpl(*(char **)(UserSessionState + 19400));
      *this = (__int64 *)v9;
      if ( v9 )
      {
        *(_QWORD *)v9 = a2;
        (*this)[5] = 0LL;
        if ( a3 && *(_QWORD *)a3 )
        {
          *(_OWORD *)(*this + 3) = *(_OWORD *)(*(_QWORD *)a3 + 8LL);
          (*this)[5] = (__int64)(*this + 3);
        }
        EtwActivityIdControl(3u, (LPGUID)(*this + 1));
        if ( (unsigned int)dword_14029AE30 > 6 && (unsigned __int8)tlgKeywordOn(&dword_14029AE30, 1LL) )
        {
          v10 = (__int64)(*this + 1);
          v11 = (*this)[5];
          v14 = **this;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (unsigned int)&dword_14029AE30,
            (unsigned int)&unk_140275AAD,
            v10,
            v11,
            (__int64)&v14);
        }
        v12 = *this + 6;
        v13 = PtiCurrent();
        *v12 = *((_QWORD *)v13 + 48);
        *((_QWORD *)v13 + 48) = v12;
        v12[2] = _lambda_d164783eb83be554e1610dcbf87b8416_::_lambda_invoker_cdecl_;
        v12[1] = this;
      }
    }
  }
  return (InputTraceLogging::ThreadLockedPerfRegion *)this;
}
