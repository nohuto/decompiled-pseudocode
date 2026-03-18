/*
 * XREFs of AlpcpAvailableBufferSize @ 0x1408AC6E0
 * Callers:
 *     AlpcpCaptureMessageDataSafe @ 0x1408AA5A0 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpReceiveLegacyMessage @ 0x1408AC320 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14098D31C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1409F1EF0 (AlpcpReplyLegacySynchronousRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpAvailableBufferSize(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 96);
  if ( v1 )
    return *(_QWORD *)(v1 + 32) - 40LL;
  else
    return 512LL;
}
