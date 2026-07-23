/*
 * XREFs of AlpcpAvailableBufferSize @ 0x14089E820
 * Callers:
 *     AlpcpSendLegacySynchronousRequest @ 0x14089055C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14089BA70 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpReceiveLegacyMessage @ 0x14089D780 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1409E5CE0 (AlpcpReplyLegacySynchronousRequest.c)
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
