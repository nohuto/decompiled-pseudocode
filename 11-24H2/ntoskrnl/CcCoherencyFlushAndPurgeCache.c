/*
 * XREFs of CcCoherencyFlushAndPurgeCache @ 0x1404D6B50
 * Callers:
 *     <none>
 * Callees:
 *     CcPurgeCacheSection @ 0x1402070C0 (CcPurgeCacheSection.c)
 *     CcFlushCachePriv @ 0x1402771F0 (CcFlushCachePriv.c)
 *     MmTrimSection @ 0x1404724C4 (MmTrimSection.c)
 *     MmOnlySystemCacheViewsPresent @ 0x14047EE60 (MmOnlySystemCacheViewsPresent.c)
 */

void __stdcall CcCoherencyFlushAndPurgeCache(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PIO_STATUS_BLOCK IoStatus,
        ULONG Flags)
{
  char v5; // r14
  bool v7; // r15
  ULONG v11; // eax
  char v12; // r13
  NTSTATUS v13; // eax

  v5 = 0;
  v7 = 0;
  v11 = (Flags >> 1) & 1;
  v12 = v11 | 2;
  if ( (Flags & 1) != 0 )
  {
    if ( (Flags & 4) != 0 || MmOnlySystemCacheViewsPresent(SectionObjectPointer) )
    {
      IoStatus->Status = 0;
      goto LABEL_9;
    }
  }
  else
  {
    v12 = v11;
  }
  v13 = MmTrimSection((__int64 *)SectionObjectPointer, (__int64 *)FileOffset, Length, v12);
  IoStatus->Status = v13;
  if ( v13 == 277 || v13 < 0 )
    v5 = 1;
LABEL_9:
  CcFlushCachePriv(SectionObjectPointer, (__int64)FileOffset, Length, 0LL, 0, (__int128 *)&IoStatus->0, 0LL);
  if ( IoStatus->Status >= 0 )
  {
    if ( (Flags & 1) == 0 )
      v7 = CcPurgeCacheSection(SectionObjectPointer, FileOffset, Length, 4u) == 0;
    if ( IoStatus->Status >= 0 && (v5 || v7) )
      IoStatus->Status = 277;
  }
}
