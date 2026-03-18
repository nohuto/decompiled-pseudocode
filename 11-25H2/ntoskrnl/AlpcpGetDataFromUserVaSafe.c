/*
 * XREFs of AlpcpGetDataFromUserVaSafe @ 0x14098E8E8
 * Callers:
 *     AlpcpReceiveMessage @ 0x1408A88E0 (AlpcpReceiveMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x1408A9370 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x1408AC320 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpGetDataFromMessage @ 0x14098E938 (AlpcpGetDataFromMessage.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void *__fastcall AlpcpGetDataFromUserVaSafe(__int64 a1, void *a2)
{
  return memmove(a2, *(const void **)(a1 + 176), *(unsigned __int16 *)(a1 + 240));
}
