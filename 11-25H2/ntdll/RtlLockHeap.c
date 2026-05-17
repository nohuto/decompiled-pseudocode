/*
 * XREFs of RtlLockHeap @ 0x180093AD0
 * Callers:
 *     RtlValidateHeap @ 0x1800931C0 (RtlValidateHeap.c)
 *     RtlpLockUlockAllHeapsCallback @ 0x1800938B0 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800983A4 (RtlpQueryExtendedHeapInformation.c)
 *     RtlLockProcessHeapOnProcessTerminate @ 0x18011008C (RtlLockProcessHeapOnProcessTerminate.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x18014D580 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlpLogHeapLockEvent @ 0x18011B7F8 (RtlpLogHeapLockEvent.c)
 */

char __fastcall RtlLockHeap(__int64 a1)
{
  __int64 v2; // rdi
  void *UniqueThread; // rsi
  _DWORD *SharedData; // rcx
  __int64 v6; // rcx

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v2 = *(_QWORD *)(a1 + 56);
    if ( (*(_BYTE *)(v2 + 24) & 2) == 0 )
    {
      UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
      if ( (_DWORD)UniqueThread == *(_DWORD *)(v2 + 36) )
      {
        ++*(_DWORD *)(v2 + 32);
      }
      else
      {
        RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v2 + 40));
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
        RtlpLogHeapLockEvent(a1);
    }
    return 1;
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_1801CE5D0)();
  if ( *(_DWORD *)(a1 + 152) == -285217025 )
  {
    if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      ++*(_WORD *)(a1 + 416);
    }
    goto LABEL_17;
  }
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Invalid heap signature for heap at %p", (const void *)a1);
  DbgPrint(", passed to %s", "RtlLockHeap");
  DbgPrint("\n");
  if ( NtCurrentPeb()->BeingDebugged )
  {
    __debugbreak();
    RtlpHeapInvalidBreakPoint = 0;
  }
  return 0;
}
