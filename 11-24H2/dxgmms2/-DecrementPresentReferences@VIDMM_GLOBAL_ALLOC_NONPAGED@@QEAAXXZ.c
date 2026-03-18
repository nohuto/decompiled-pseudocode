/*
 * XREFs of ?DecrementPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAAXXZ @ 0x14003C230
 * Callers:
 *     VidMmUnreferencePrimaryAllocation @ 0x14004C070 (VidMmUnreferencePrimaryAllocation.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL_ALLOC_NONPAGED::DecrementPresentReferences(VIDMM_GLOBAL_ALLOC_NONPAGED *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 3);
  if ( v1 )
    _InterlockedDecrement((volatile signed __int32 *)(v1 + 8));
}
