/*
 * XREFs of ?IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1401026B0
 * Callers:
 *     VidMmIsAllocationInPresentQueue @ 0x140044120 (VidMmIsAllocationInPresentQueue.c)
 * Callees:
 *     ?HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ @ 0x140034050 (-HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ.c)
 */

char __fastcall VIDMM_GLOBAL::IsAllocationInPresentQueue(
        VIDMM_GLOBAL *this,
        VIDMM_GLOBAL_ALLOC_NONPAGED **a2,
        unsigned int *a3)
{
  VIDMM_GLOBAL_ALLOC_NONPAGED **v3; // r10
  bool HasOutstandingPresentReferences; // al
  char v5; // r11
  char v6; // cl
  char v7; // r9

  v3 = a2;
  if ( *((int *)a2 + 26) > 0 )
  {
    v7 = 1;
  }
  else
  {
    HasOutstandingPresentReferences = VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(a2[12]);
    v6 = v5;
    if ( HasOutstandingPresentReferences )
      v6 = v5 + 1;
    v7 = v6;
  }
  if ( a3 )
    *a3 = *((_DWORD *)v3[12] + 4);
  return v7;
}
