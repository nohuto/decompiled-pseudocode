/*
 * XREFs of RtlUnlockHeap @ 0x1800938E0
 * Callers:
 *     RtlValidateHeap @ 0x1800931C0 (RtlValidateHeap.c)
 *     RtlpLockUlockAllHeapsCallback @ 0x1800938B0 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x1800950E0 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800983A4 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x18014D580 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x18005A8C0 (RtlpBreakPointHeap.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlpReleaseDescriptorPseudoGlobalLock @ 0x180093A38 (RtlpReleaseDescriptorPseudoGlobalLock.c)
 *     RtlpLogHeapUnlockEvent @ 0x18014DD20 (RtlpLogHeapUnlockEvent.c)
 */

char __fastcall RtlUnlockHeap(__int64 a1)
{
  _DWORD *SharedData; // rcx
  __int64 v3; // rcx

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    RtlpReleaseDescriptorPseudoGlobalLock(*(_QWORD *)(a1 + 56), 0LL);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_1801CE5D8)();
    if ( *(_DWORD *)(a1 + 152) != -285217025 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Invalid heap signature for heap at %p", (const void *)a1);
      DbgPrint(", passed to %s", "RtlUnlockHeap");
      DbgPrint("\n");
      RtlpBreakPointHeap();
      return 0;
    }
    if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
    {
      --*(_WORD *)(a1 + 416);
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
    }
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v3 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v3 = 2147353472LL;
  if ( *(_BYTE *)v3 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapUnlockEvent(a1);
  }
  return 1;
}
