/*
 * XREFs of AlpcpAvailableBufferSize @ 0x140896380
 * Callers:
 *     AlpcpSendLegacySynchronousRequest @ 0x14088D3F8 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpCaptureMessageDataSafe @ 0x140892480 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpReceiveLegacyMessage @ 0x1408952E0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1409EC9B0 (AlpcpReplyLegacySynchronousRequest.c)
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
