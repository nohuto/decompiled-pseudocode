/*
 * XREFs of AlpcpGetDataFromUserVaSafe @ 0x14088AE18
 * Callers:
 *     AlpcpGetDataFromMessage @ 0x14088AE68 (AlpcpGetDataFromMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x1408912A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x1408952E0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveMessage @ 0x140899160 (AlpcpReceiveMessage.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void *__fastcall AlpcpGetDataFromUserVaSafe(__int64 a1, void *a2)
{
  return memmove(a2, *(const void **)(a1 + 176), *(unsigned __int16 *)(a1 + 240));
}
