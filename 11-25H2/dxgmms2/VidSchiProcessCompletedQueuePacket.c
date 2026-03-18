/*
 * XREFs of VidSchiProcessCompletedQueuePacket @ 0x1400396D8
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1400AE500 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1400AE770 (VidSchiSubmitQueueCommand.c)
 *     VidSchiDiscardQueuePacket @ 0x1400B0048 (VidSchiDiscardQueuePacket.c)
 * Callees:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14001F0E0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiProcessCompletedQueuePacket(
        struct _VIDSCH_QUEUE_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  struct _VIDSCH_QUEUE_PACKET *result; // rax

  result = a1;
  do
    result = VidSchiProcessCompletedQueuePacketInternal(result, a2, a3);
  while ( result );
  return result;
}
