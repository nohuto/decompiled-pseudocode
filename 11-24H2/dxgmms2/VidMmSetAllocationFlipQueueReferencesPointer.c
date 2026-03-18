/*
 * XREFs of VidMmSetAllocationFlipQueueReferencesPointer @ 0x140044210
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmSetAllocationFlipQueueReferencesPointer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_FLIP_QUEUE_REFERENCES@@@Z @ 0x14010A4D0 (-VidMmSetAllocationFlipQueueReferencesPointer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@PEAUVIDM.c)
 */

void __fastcall VidMmSetAllocationFlipQueueReferencesPointer(
        VIDMM_GLOBAL *a1,
        struct VIDMM_MULTI_ALLOC *a2,
        struct VIDMM_FLIP_QUEUE_REFERENCES *a3)
{
  VIDMM_GLOBAL::VidMmSetAllocationFlipQueueReferencesPointer(a1, a2, a3);
}
