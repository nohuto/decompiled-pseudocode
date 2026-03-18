/*
 * XREFs of IopProbeAndLockPages_0 @ 0x1402D55C4
 * Callers:
 *     IopAllocateAndPopulateWriteIrp @ 0x1402D4D60 (IopAllocateAndPopulateWriteIrp.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x1402D5878 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages_0(struct _MDL *a1, KPROCESSOR_MODE a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax

  MmProbeAndLockPages(a1, a2, IoReadAccess);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
