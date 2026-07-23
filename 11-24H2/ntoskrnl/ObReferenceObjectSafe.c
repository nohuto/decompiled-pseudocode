/*
 * XREFs of ObReferenceObjectSafe @ 0x140411C00
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x140740094 (AlpcpPortQueryServerInfo.c)
 *     CmUnRegisterCallback @ 0x1407D1A20 (CmUnRegisterCallback.c)
 *     AlpcpFlushMessagesPort @ 0x14088EE5C (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x14088F628 (AlpcpDisconnectPort.c)
 *     AlpcpDispatchConnectionRequest @ 0x14089032C (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x14089A470 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x14089BF40 (AlpcpDispatchReplyToPort.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x14089C510 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpCancelMessage @ 0x14089C73C (AlpcpCancelMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x14089D780 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReferenceConnectedPort @ 0x1408E89B0 (AlpcpReferenceConnectedPort.c)
 *     WmipProcessEvent @ 0x1409B1F20 (WmipProcessEvent.c)
 *     ObpCreateTypeArray @ 0x1409C6454 (ObpCreateTypeArray.c)
 *     AlpcpProcessSynchronousRequest @ 0x140A24FBC (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x140A2F6A8 (AlpcpReferenceMessageByWaitingThread.c)
 *     AlpcpQueryRemoteView @ 0x140A320FC (AlpcpQueryRemoteView.c)
 *     IovpBuildDriverObjectList @ 0x140B84894 (IovpBuildDriverObjectList.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x14031F930 (ObpTraceObjectReferenceIfActive.c)
 */

char __fastcall ObReferenceObjectSafe(__int64 a1)
{
  volatile signed __int64 *v1; // r9
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v1 = (volatile signed __int64 *)(a1 - 48);
  _m_prefetchw((const void *)(a1 - 48));
  v2 = *(_QWORD *)(a1 - 48);
  while ( v2 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64(v1, v2 + 1, v2);
    if ( v3 == v2 )
    {
      ObpTraceObjectReferenceIfActive((int)v1);
      LOBYTE(v2) = 1;
      return v2;
    }
  }
  return v2;
}
