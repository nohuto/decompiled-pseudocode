/*
 * XREFs of RtlpAcquireHeapListLock @ 0x18002AAB4
 * Callers:
 *     RtlpProcessHeapsInsert @ 0x180025F8C (RtlpProcessHeapsInsert.c)
 *     RtlpProcessHeapsRemove @ 0x180028028 (RtlpProcessHeapsRemove.c)
 *     RtlProtectHeap @ 0x180028BA0 (RtlProtectHeap.c)
 *     RtlQueryProcessHeapInformation @ 0x18002A340 (RtlQueryProcessHeapInformation.c)
 *     RtlpEnumProcessHeaps @ 0x18002A930 (RtlpEnumProcessHeaps.c)
 *     RtlpHpHeapWalk @ 0x18002B340 (RtlpHpHeapWalk.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x18002B720 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlSetHeapInformation @ 0x18002BE70 (RtlSetHeapInformation.c)
 *     RtlSetHeapDebuggingInformation @ 0x1801126FC (RtlSetHeapDebuggingInformation.c)
 *     RtlLockHeapManagerForCloning @ 0x18013FB40 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlpAcquireHeapListLock()
{
  return RtlEnterCriticalSection(&RtlpProcessHeapsLock);
}
