/*
 * XREFs of VidMmETWAllocationHandle @ 0x14003AC50
 * Callers:
 *     <none>
 * Callees:
 *     ?ETWAllocationHandle@VIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1400F0560 (-ETWAllocationHandle@VIDMM_GLOBAL@@QEAAPEAXI@Z.c)
 */

void *__fastcall VidMmETWAllocationHandle(VIDMM_GLOBAL *a1, unsigned int a2)
{
  return VIDMM_GLOBAL::ETWAllocationHandle(a1, a2);
}
