/*
 * XREFs of ObReferenceObjectSafe @ 0x140420490
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x140735E84 (AlpcpPortQueryServerInfo.c)
 *     CmUnRegisterCallback @ 0x1407C1E10 (CmUnRegisterCallback.c)
 *     AlpcpReferenceConnectedPort @ 0x1408A6120 (AlpcpReferenceConnectedPort.c)
 *     AlpcpDispatchNewMessage @ 0x1408A8F50 (AlpcpDispatchNewMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x1408AC320 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCancelMessage @ 0x1408AC700 (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x1408ACCE0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpDisconnectPort @ 0x14098B448 (AlpcpDisconnectPort.c)
 *     AlpcpFlushMessagesPort @ 0x14098BF34 (AlpcpFlushMessagesPort.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x14098CE00 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpDispatchConnectionRequest @ 0x14098D0EC (AlpcpDispatchConnectionRequest.c)
 *     AlpcpQueryRemoteView @ 0x14098EA38 (AlpcpQueryRemoteView.c)
 *     WmipProcessEvent @ 0x1409B3480 (WmipProcessEvent.c)
 *     AlpcpProcessSynchronousRequest @ 0x1409CE020 (AlpcpProcessSynchronousRequest.c)
 *     ObpCreateTypeArray @ 0x1409D8494 (ObpCreateTypeArray.c)
 *     AlpcpReferenceMessageByWaitingThread @ 0x140A3526C (AlpcpReferenceMessageByWaitingThread.c)
 *     IovpBuildDriverObjectList @ 0x140B72894 (IovpBuildDriverObjectList.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x14029B0E0 (ObpTraceObjectReferenceIfActive.c)
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
