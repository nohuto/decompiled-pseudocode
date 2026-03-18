/*
 * XREFs of ?VidSchiSetupFlipQueueLogTrackingArray@@YAXPEAU_VIDSCH_GLOBAL@@QEAK@Z @ 0x140040E0C
 * Callers:
 *     ?VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVENT@@PEA_N@Z @ 0x14005488C (-VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVEN.c)
 * Callees:
 *     memset @ 0x140056780 (memset.c)
 */

void __fastcall VidSchiSetupFlipQueueLogTrackingArray(struct _VIDSCH_GLOBAL *a1, unsigned int *const a2)
{
  unsigned int v2; // eax

  v2 = *((_DWORD *)a1 + 38);
  if ( v2 )
    memset(a2, -1, 4LL * v2);
}
