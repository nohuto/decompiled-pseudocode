/*
 * XREFs of ?UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_NODE@@PEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400518DC
 * Callers:
 *     VidSchiProcessNativeFenceSignaledDpc @ 0x140044BE0 (VidSchiProcessNativeFenceSignaledDpc.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x14000E4E0 (VidSchiUnwaitMonitoredFences.c)
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x140026FB0 (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x14003BB2C (VidSchiPropagateCrossAdapterSignal.c)
 *     VidSchiUnwaitNativeFenceWaiters @ 0x1400458E8 (VidSchiUnwaitNativeFenceWaiters.c)
 */

void __fastcall UnwaitFencesFromNativeFenceSignaledDpc(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        struct _VIDSCH_NODE *a3,
        struct _VIDSCH_SYNC_OBJECT *a4)
{
  struct _VIDSCH_NODE *v5; // rbp

  v5 = a3;
  if ( a4 )
  {
    if ( *((_BYTE *)a4 + 28) )
      VidSchiPropagateCrossAdapterSignal((__int64)a2, a4);
    LOBYTE(a3) = 1;
    VidSchiUnwaitNativeFenceWaiters(a1, (__int64)a4, (__int64)a3, 0LL);
  }
  else
  {
    VidSchiPropagateCrossAdapterSignal((__int64)a2, 0LL);
    VidSchiUnwaitNodeHwQueueProgress(a1, v5);
    VidSchiUnwaitMonitoredFences(a1, (__int64)a2);
  }
}
