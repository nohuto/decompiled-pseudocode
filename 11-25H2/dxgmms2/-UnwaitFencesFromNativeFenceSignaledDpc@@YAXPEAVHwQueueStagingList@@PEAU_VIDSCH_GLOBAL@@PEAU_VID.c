/*
 * XREFs of ?UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_NODE@@PEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x140051E5C
 * Callers:
 *     VidSchiProcessNativeFenceSignaledDpc @ 0x1400469A0 (VidSchiProcessNativeFenceSignaledDpc.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x140019940 (VidSchiUnwaitMonitoredFences.c)
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x140033960 (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x14003DA1C (VidSchiPropagateCrossAdapterSignal.c)
 *     VidSchiUnwaitNativeFenceWaiters @ 0x1400476A8 (VidSchiUnwaitNativeFenceWaiters.c)
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
