/*
 * XREFs of AlpcpUnlockMessage @ 0x1408AA9C0
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407358B0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     AlpcpPortQueryServerInfo @ 0x140735E84 (AlpcpPortQueryServerInfo.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140859580 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpReceiveMessagePort @ 0x1408A6F40 (AlpcpReceiveMessagePort.c)
 *     AlpcpReceiveMessage @ 0x1408A88E0 (AlpcpReceiveMessage.c)
 *     AlpcpDispatchNewMessage @ 0x1408A8F50 (AlpcpDispatchNewMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x1408A9370 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpLookupMessage @ 0x1408AAFC0 (AlpcpLookupMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x1408AB350 (AlpcpReceiveSynchronousReply.c)
 *     NtAlpcOpenSenderProcess @ 0x1408AB690 (NtAlpcOpenSenderProcess.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1408ABB08 (AlpcpReceiveDirectMessagePort.c)
 *     NtAlpcQueryInformationMessage @ 0x1408ABDF0 (NtAlpcQueryInformationMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x1408AC320 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCancelMessage @ 0x1408AC700 (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x1408ACCE0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpCreateReserve @ 0x1408AEE08 (AlpcpCreateReserve.c)
 *     AlpcpSendMessage @ 0x1408B0BA0 (AlpcpSendMessage.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1408B2D00 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpProcessConnectionRequest @ 0x140914AA0 (AlpcpProcessConnectionRequest.c)
 *     AlpcpCreateClientPort @ 0x140916890 (AlpcpCreateClientPort.c)
 *     AlpcpFlushMessagesByRequestor @ 0x14098AE9C (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpDisconnectPort @ 0x14098B448 (AlpcpDisconnectPort.c)
 *     AlpcpSendCloseMessage @ 0x14098BC2C (AlpcpSendCloseMessage.c)
 *     AlpcpFlushMessagesPort @ 0x14098BF34 (AlpcpFlushMessagesPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14098C750 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14098D31C (AlpcpSendLegacySynchronousRequest.c)
 *     NtSecureConnectPort @ 0x14098DB40 (NtSecureConnectPort.c)
 *     AlpcpFormatConnectionRequest @ 0x14098E160 (AlpcpFormatConnectionRequest.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x14098E768 (AlpcpReceiveLegacyConnectionReply.c)
 *     NtAlpcOpenSenderThread @ 0x1409CCE90 (NtAlpcOpenSenderThread.c)
 *     AlpcpProcessSynchronousRequest @ 0x1409CE020 (AlpcpProcessSynchronousRequest.c)
 *     AlpcReserveDestroyProcedure @ 0x1409EC530 (AlpcReserveDestroyProcedure.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1409F1EF0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpAcceptConnectPort @ 0x1409F5B30 (AlpcpAcceptConnectPort.c)
 *     NtAlpcCancelMessage @ 0x140A29A50 (NtAlpcCancelMessage.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExFreeToPagedLookasideList @ 0x1403D3020 (ExFreeToPagedLookasideList.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1408AABCC (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcMessageCleanupProcedure @ 0x1408B2BD0 (AlpcMessageCleanupProcedure.c)
 *     AlpcSecurityDestroyProcedure @ 0x1408B3330 (AlpcSecurityDestroyProcedure.c)
 *     AlpcMessageDestroyProcedure @ 0x1408B3500 (AlpcMessageDestroyProcedure.c)
 *     AlpcViewDestroyProcedure @ 0x1408B3AF0 (AlpcViewDestroyProcedure.c)
 *     AlpcpFreeMessageFunction @ 0x1408B4800 (AlpcpFreeMessageFunction.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpUnlockMessage(ULONG_PTR BugCheckParameter2)
{
  char v2; // cl
  int v3; // eax
  signed __int64 BugCheckParameter4; // rcx
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(_QWORD); // rax
  int v7; // eax
  void *v8; // rcx

  if ( AlpcpMessageLogEnabled )
    AlpcpEnterStateChangeEventMessageLog();
  v2 = *(_BYTE *)(BugCheckParameter2 - 32);
  if ( (v2 & 1) != 0
    && (v3 = *(__int16 *)(BugCheckParameter2 - 30),
        *(_BYTE *)(BugCheckParameter2 - 32) = v2 & 0xFE,
        *(_WORD *)(BugCheckParameter2 - 30) = 0,
        0x10000 - v3 > 0)
    && (BugCheckParameter4 = v3
                           - 0x10000
                           + _InterlockedExchangeAdd64(
                               (volatile signed __int64 *)(BugCheckParameter2 - 24),
                               v3 - 0x10000),
        BugCheckParameter4 <= 0) )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
    v5 = AlpcpRegisteredTypes[*(unsigned __int8 *)(BugCheckParameter2 - 31)];
    if ( *(__int64 (__fastcall **)(_QWORD))(v5 + 24) == AlpcMessageCleanupProcedure )
      AlpcMessageCleanupProcedure(BugCheckParameter2);
    else
      guard_dispatch_icall_no_overrides(BugCheckParameter2);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 - 16));
    KeAbPostRelease(BugCheckParameter2 - 16);
    v6 = *(__int64 (__fastcall **)(_QWORD))(v5 + 40);
    if ( v6 == AlpcSecurityDestroyProcedure )
    {
      v7 = AlpcSecurityDestroyProcedure(BugCheckParameter2);
    }
    else if ( v6 == AlpcMessageDestroyProcedure )
    {
      v7 = AlpcMessageDestroyProcedure(BugCheckParameter2);
    }
    else if ( v6 == AlpcViewDestroyProcedure )
    {
      v7 = AlpcViewDestroyProcedure(BugCheckParameter2);
    }
    else
    {
      v7 = guard_dispatch_icall_no_overrides(BugCheckParameter2);
    }
    if ( v7 >= 0 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 - 32) & 2) != 0 )
      {
        ExFreeToPagedLookasideList(&AlpcpLookasides + *(unsigned int *)(v5 + 8), (PVOID)(BugCheckParameter2 - 48));
      }
      else if ( *(_QWORD *)(v5 + 48) )
      {
        v8 = (void *)(BugCheckParameter2 - 48);
        if ( *((__int64 (__fastcall **)(PVOID))&AlpcpLookasides.L.FreeEx
             + 16 * (unsigned __int64)*(unsigned int *)(v5 + 8)) == AlpcpFreeMessageFunction )
          AlpcpFreeMessageFunction(v8);
        else
          guard_dispatch_icall_no_overrides(v8);
      }
      else
      {
        ExFreePoolWithTag((PVOID)(BugCheckParameter2 - 48), *(_DWORD *)(v5 + 4));
      }
    }
  }
  else if ( BugCheckParameter2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 - 16));
    KeAbPostRelease(BugCheckParameter2 - 16);
  }
}
