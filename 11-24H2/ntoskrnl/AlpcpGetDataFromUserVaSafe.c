/*
 * XREFs of AlpcpGetDataFromUserVaSafe @ 0x1409908B4
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x14089A890 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x14089D780 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveMessage @ 0x1408A1800 (AlpcpReceiveMessage.c)
 *     AlpcpGetDataFromMessage @ 0x140990904 (AlpcpGetDataFromMessage.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *__fastcall AlpcpGetDataFromUserVaSafe(__int64 a1, void *a2)
{
  return memmove(a2, *(const void **)(a1 + 176), *(unsigned __int16 *)(a1 + 240));
}
