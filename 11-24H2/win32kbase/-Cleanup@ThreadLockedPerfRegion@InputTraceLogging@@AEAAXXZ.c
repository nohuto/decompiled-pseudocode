/*
 * XREFs of ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1400626B8
 * Callers:
 *     ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x140054BC0 (-OnRemoteCloseNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnTimerNotification@CBaseInput@@AEAAJXZ @ 0x140058F50 (-OnTimerNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1400602F0 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 *     NtMITDispatchCompletion @ 0x140060480 (NtMITDispatchCompletion.c)
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1400607D0 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 *     ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x140061410 (-OnPnpNotification@CBaseInput@@AEAAJXZ.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140062674 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x140063C00 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnRawMouseThrottlingTimer@CMouseSensor@@EEAAJXZ @ 0x1400641B0 (-OnRawMouseThrottlingTimer@CMouseSensor@@EEAAJXZ.c)
 *     ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1400642B0 (-OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnAsyncWorkItemNotification@CBaseInput@@AEAAJXZ @ 0x140197260 (-OnAsyncWorkItemNotification@CBaseInput@@AEAAJXZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_d164783eb83be554e1610dcbf87b8416_@@CA@PEAX@Z @ 0x1401B7160 (-_lambda_invoker_cdecl_@_lambda_d164783eb83be554e1610dcbf87b8416_@@CA@PEAX@Z.c)
 * Callees:
 *     ?Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z @ 0x1400280F8 (-Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1400B1ED0 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

void __fastcall InputTraceLogging::ThreadLockedPerfRegion::Cleanup(char **this)
{
  unsigned int v2; // r8d
  __int64 v3; // r9
  char *v4; // rbx
  __int64 UserSessionState; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned int)dword_14029AE30 > 6 && (qword_14029AE40 & 1) != 0 && (qword_14029AE48 & 1) == qword_14029AE48 )
  {
    v2 = (unsigned int)*this + 8;
    v3 = *((_QWORD *)*this + 5);
    v6 = *(_QWORD *)*this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (unsigned int)&dword_14029AE30,
      (unsigned int)&unk_140275A8B,
      v2,
      v3,
      (__int64)&v6);
  }
  v4 = *this;
  UserSessionState = W32GetUserSessionState(this);
  Win32FreeToPagedLookasideListImpl(*(char **)(UserSessionState + 19400), v4);
}
