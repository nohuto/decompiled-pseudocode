/*
 * XREFs of IopProbeAndLockPages_1 @ 0x14046E260
 * Callers:
 *     IopAllocateAndPopulateWriteIrp @ 0x140401030 (IopAllocateAndPopulateWriteIrp.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x140282330 (MmProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x1404384E4 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages_1(
        struct _MDL *a1,
        KPROCESSOR_MODE a2,
        __int64 a3,
        struct _LIST_ENTRY *a4,
        unsigned int a5)
{
  __int64 result; // rax

  MmProbeAndLockPages(a1, a2, IoReadAccess);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker((unsigned __int64)a1, *(&a4->Blink[7].Flink + a5), a4);
  return result;
}
