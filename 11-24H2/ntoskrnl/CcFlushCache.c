/*
 * XREFs of CcFlushCache @ 0x140476B40
 * Callers:
 *     <none>
 * Callees:
 *     CcFlushCachePriv @ 0x1402771F0 (CcFlushCachePriv.c)
 */

void __stdcall CcFlushCache(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PIO_STATUS_BLOCK IoStatus)
{
  CcFlushCachePriv(SectionObjectPointer, (__int64)FileOffset, Length, 0LL, 0, (__int128 *)&IoStatus->0, 0LL);
}
