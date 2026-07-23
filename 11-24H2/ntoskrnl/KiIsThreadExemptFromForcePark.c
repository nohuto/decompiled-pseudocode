/*
 * XREFs of KiIsThreadExemptFromForcePark @ 0x1402A968C
 * Callers:
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     ?KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KTHREAD@@PEAU_KPRCB@@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x1402A8B40 (-KiCanLocalReadyThreadBeScheduledToRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@.c)
 *     ?KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KTHREAD@@PEAU1@PEAU_KSHARED_READY_QUEUE@@PEAU_KSCB@@@Z @ 0x1402A8CA0 (-KiCanLocalReadyThreadBeScheduledToRescheduleContext@@YAPEAU_KPRCB@@PEAU_KI_RESCHEDULE_CONTEXT@@.c)
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 *     KiAddThreadToPrcbQueue @ 0x1402D7CF0 (KiAddThreadToPrcbQueue.c)
 *     KiAddThreadToReadyQueue @ 0x1403E7AA0 (KiAddThreadToReadyQueue.c)
 * Callees:
 *     <none>
 */

char __fastcall KiIsThreadExemptFromForcePark(__int64 a1)
{
  char v1; // dl
  char v2; // r8
  bool v3; // al

  v1 = 0;
  if ( !dword_140FC52E4 || (v2 = 1, (*(_DWORD *)(a1 + 116) & 8) == 0) )
    v2 = 0;
  v3 = dword_140FC52E8 && (*(_DWORD *)(a1 + 484) || *(_BYTE *)(a1 + 390) == 1);
  if ( v2 || v3 )
    return 1;
  return v1;
}
