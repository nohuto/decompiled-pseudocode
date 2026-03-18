/*
 * XREFs of VidSchiCleanupPacket_PriorityTable @ 0x1400A801C
 * Callers:
 *     VidSchiCleanupQueuedCommand @ 0x140053090 (VidSchiCleanupQueuedCommand.c)
 * Callees:
 *     VidSchiSelectContext @ 0x1400159F0 (VidSchiSelectContext.c)
 *     VidSchiProcessPrimariesTerminationList @ 0x140033250 (VidSchiProcessPrimariesTerminationList.c)
 *     VidSchiDrainContextFromWorkerThread @ 0x14004F700 (VidSchiDrainContextFromWorkerThread.c)
 */

struct _VIDSCH_CONTEXT *__fastcall VidSchiCleanupPacket_PriorityTable(KSPIN_LOCK *a1)
{
  struct _VIDSCH_CONTEXT *result; // rax

  VidSchiProcessPrimariesTerminationList((__int64)a1);
  while ( 1 )
  {
    result = VidSchiSelectContext(a1, 0);
    if ( !result )
      break;
    VidSchiDrainContextFromWorkerThread((__int64)result);
  }
  return result;
}
