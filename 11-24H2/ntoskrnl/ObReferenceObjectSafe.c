/*
 * XREFs of ObReferenceObjectSafe @ 0x14041D310
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x140741EA4 (AlpcpPortQueryServerInfo.c)
 *     CmUnRegisterCallback @ 0x1407D1530 (CmUnRegisterCallback.c)
 *     AlpcpQueryRemoteView @ 0x14088A6E4 (AlpcpQueryRemoteView.c)
 *     AlpcpFlushMessagesPort @ 0x14088BE6C (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x14088C638 (AlpcpDisconnectPort.c)
 *     AlpcpDispatchConnectionRequest @ 0x14088D0AC (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchNewMessage @ 0x140890E80 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140892910 (AlpcpDispatchReplyToPort.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x140892EE0 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpCancelMessage @ 0x140894410 (AlpcpCancelMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x1408952E0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReferenceConnectedPort @ 0x140911260 (AlpcpReferenceConnectedPort.c)
 *     WmipProcessEvent @ 0x1409CB800 (WmipProcessEvent.c)
 *     ObpCreateTypeArray @ 0x1409D6624 (ObpCreateTypeArray.c)
 *     AlpcpProcessSynchronousRequest @ 0x140A304CC (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x140A3A07C (AlpcpReferenceMessageByWaitingThread.c)
 *     IovpBuildDriverObjectList @ 0x140B82894 (IovpBuildDriverObjectList.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x140340450 (ObpTraceObjectReferenceIfActive.c)
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
