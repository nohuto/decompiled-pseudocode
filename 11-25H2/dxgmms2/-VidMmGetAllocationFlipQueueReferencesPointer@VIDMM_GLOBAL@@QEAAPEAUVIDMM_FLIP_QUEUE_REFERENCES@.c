/*
 * XREFs of ?VidMmGetAllocationFlipQueueReferencesPointer@VIDMM_GLOBAL@@QEAAPEAUVIDMM_FLIP_QUEUE_REFERENCES@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x1401108D0
 * Callers:
 *     VidMmGetAllocationFlipQueueReferencesPointer @ 0x1400462D0 (VidMmGetAllocationFlipQueueReferencesPointer.c)
 * Callees:
 *     <none>
 */

struct VIDMM_FLIP_QUEUE_REFERENCES *__fastcall VIDMM_GLOBAL::VidMmGetAllocationFlipQueueReferencesPointer(
        VIDMM_GLOBAL *this,
        struct VIDMM_MULTI_ALLOC *a2)
{
  struct VIDMM_FLIP_QUEUE_REFERENCES *result; // rax

  result = *(struct VIDMM_FLIP_QUEUE_REFERENCES **)(*(_QWORD *)(**(_QWORD **)a2 + 376LL) + 24LL);
  if ( result )
    _InterlockedIncrement((volatile signed __int32 *)result);
  return result;
}
