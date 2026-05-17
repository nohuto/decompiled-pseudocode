/*
 * XREFs of RtlUnlockHeap @ 0x18003FEF0
 * Callers:
 *     RtlValidateHeap @ 0x18003F7D0 (RtlValidateHeap.c)
 *     RtlpLockUlockAllHeapsCallback @ 0x18003FEC0 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x1800416F0 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800446C4 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x18014BFD0 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x180031DF0 (RtlpBreakPointHeap.c)
 *     RtlpReleaseDescriptorPseudoGlobalLock @ 0x180040048 (RtlpReleaseDescriptorPseudoGlobalLock.c)
 *     RtlpLogHeapUnlockEvent @ 0x18014C770 (RtlpLogHeapUnlockEvent.c)
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
      return ((__int64 (*)(void))qword_1801CC5D8)();
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
