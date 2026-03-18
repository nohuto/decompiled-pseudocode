/*
 * XREFs of VidMmUnreferencePrimaryAllocation @ 0x14004C960
 * Callers:
 *     <none>
 * Callees:
 *     ?DecrementPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAAXXZ @ 0x14003E120 (-DecrementPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAAXXZ.c)
 */

void __fastcall VidMmUnreferencePrimaryAllocation(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  VIDMM_GLOBAL_ALLOC_NONPAGED *v4; // rcx

  v4 = *(VIDMM_GLOBAL_ALLOC_NONPAGED **)(a3 + 96);
  _InterlockedDecrement((volatile signed __int32 *)(a3 + 104));
  if ( a4 )
    VIDMM_GLOBAL_ALLOC_NONPAGED::DecrementPresentReferences(v4);
}
