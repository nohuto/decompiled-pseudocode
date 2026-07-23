/*
 * XREFs of RtlLockHeap @ 0x180020A10
 * Callers:
 *     RtlValidateHeap @ 0x180020100 (RtlValidateHeap.c)
 *     RtlpLockUlockAllHeapsCallback @ 0x1800207F0 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlLockProcessHeapOnProcessTerminate @ 0x1800AB850 (RtlLockProcessHeapOnProcessTerminate.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1801144DC (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x18014A380 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpLogHeapLockEvent @ 0x1801136E8 (RtlpLogHeapLockEvent.c)
 */

BOOLEAN __cdecl RtlLockHeap(PVOID HeapHandle)
{
  __int64 v2; // rdi
  void *UniqueThread; // rsi
  _DWORD *SharedData; // rcx
  __int64 v6; // rcx

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    v2 = *((_QWORD *)HeapHandle + 7);
    if ( (*(_BYTE *)(v2 + 24) & 2) == 0 )
    {
      UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
      if ( (_DWORD)UniqueThread == *(_DWORD *)(v2 + 36) )
      {
        ++*(_DWORD *)(v2 + 32);
      }
      else
      {
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v2 + 40));
        *(_DWORD *)(v2 + 32) = 1;
        *(_DWORD *)(v2 + 36) = (_DWORD)UniqueThread;
      }
    }
LABEL_17:
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v6 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v6 = 2147353472LL;
    if ( *(_BYTE *)v6 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapLockEvent(HeapHandle);
    }
    return 1;
  }
  if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_1801CB5D0)();
  if ( *((_DWORD *)HeapHandle + 38) == -285217025 )
  {
    if ( (*((_BYTE *)HeapHandle + 112) & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      ++*((_WORD *)HeapHandle + 208);
    }
    goto LABEL_17;
  }
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Invalid heap signature for heap at %p", HeapHandle);
  DbgPrint(", passed to %s", "RtlLockHeap");
  DbgPrint("\n");
  if ( NtCurrentPeb()->BeingDebugged )
  {
    __debugbreak();
    RtlpHeapInvalidBreakPoint = 0;
  }
  return 0;
}
