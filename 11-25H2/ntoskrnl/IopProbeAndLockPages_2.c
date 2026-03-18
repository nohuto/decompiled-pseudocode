/*
 * XREFs of IopProbeAndLockPages_2 @ 0x1404A69A4
 * Callers:
 *     BuildQueryDirectoryIrp @ 0x1408C6A20 (BuildQueryDirectoryIrp.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x14098A4B0 (NtNotifyChangeDirectoryFileEx.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     MmUpdateMdlTracker @ 0x1402D5878 (MmUpdateMdlTracker.c)
 */

__int64 __fastcall IopProbeAndLockPages_2(
        struct _MDL *a1,
        KPROCESSOR_MODE a2,
        __int64 a3,
        struct _LIST_ENTRY *a4,
        unsigned int a5)
{
  __int64 result; // rax

  MmProbeAndLockPages(a1, a2, IoWriteAccess);
  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) != 0 )
    return MmUpdateMdlTracker((unsigned __int64)a1, *(&a4->Blink[7].Flink + a5), a4);
  return result;
}
