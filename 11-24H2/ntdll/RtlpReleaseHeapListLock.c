/*
 * XREFs of RtlpReleaseHeapListLock @ 0x18002AA6C
 * Callers:
 *     RtlpProcessHeapsInsert @ 0x180025F8C (RtlpProcessHeapsInsert.c)
 *     RtlpProcessHeapsRemove @ 0x180028028 (RtlpProcessHeapsRemove.c)
 *     RtlProtectHeap @ 0x180028BA0 (RtlProtectHeap.c)
 *     RtlQueryProcessHeapInformation @ 0x18002A340 (RtlQueryProcessHeapInformation.c)
 *     RtlpEnumProcessHeaps @ 0x18002A930 (RtlpEnumProcessHeaps.c)
 *     RtlpHpHeapWalk @ 0x18002B340 (RtlpHpHeapWalk.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x18002B720 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlSetHeapInformation @ 0x18002BE70 (RtlSetHeapInformation.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x1800ACAD4 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlSetHeapDebuggingInformation @ 0x1801126FC (RtlSetHeapDebuggingInformation.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1801144DC (RtlpQueryExtendedHeapInformation.c)
 *     RtlLockHeapManagerForCloning @ 0x18013FB40 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x18013FE80 (RtlUnlockHeapManagerForCloning.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RtlpReleaseHeapListLock(int a1)
{
  void *UniqueThread; // rcx

  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    RtlpProcessHeapsLock.LockSemaphore = 0LL;
    RtlpProcessHeapsLock.OwningThread = UniqueThread;
    RtlpProcessHeapsLock.LockCount = -2;
    RtlpProcessHeapsLock.RecursionCount = 1;
  }
  return RtlLeaveCriticalSection(&RtlpProcessHeapsLock);
}
