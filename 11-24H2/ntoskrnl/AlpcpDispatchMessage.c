/*
 * XREFs of AlpcpDispatchMessage @ 0x14089BE90
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140A1ED20 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     AlpcpDispatchReplyToWaitingThread @ 0x140899F40 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x14089A470 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x14089BF40 (AlpcpDispatchReplyToPort.c)
 */

__int64 __fastcall AlpcpDispatchMessage(__int64 *a1)
{
  __int64 v1; // rax

  v1 = a1[1];
  if ( !*(_QWORD *)(v1 + 24) )
    return AlpcpDispatchNewMessage(a1);
  if ( *(_QWORD *)(v1 + 32) )
    return AlpcpDispatchReplyToWaitingThread((__int64)a1);
  return AlpcpDispatchReplyToPort();
}
