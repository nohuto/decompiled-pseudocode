/*
 * XREFs of IopProbeAndLockPages_1 @ 0x140468A3C
 * Callers:
 *     IopAllocateAndPopulateWriteIrp @ 0x1403FB9B0 (IopAllocateAndPopulateWriteIrp.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x14042B0A4 (MmUpdateMdlTracker.c)
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
