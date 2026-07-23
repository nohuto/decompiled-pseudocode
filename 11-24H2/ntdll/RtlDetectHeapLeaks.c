/*
 * XREFs of RtlDetectHeapLeaks @ 0x180022B90
 * Callers:
 *     LdrShutdownProcess @ 0x1800ABBC0 (LdrShutdownProcess.c)
 * Callees:
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlpScanProcessVirtualMemory @ 0x180020D90 (RtlpScanProcessVirtualMemory.c)
 *     RtlpInitializeLeakDetection @ 0x180022D68 (RtlpInitializeLeakDetection.c)
 *     RtlpCreateHeap @ 0x1800248B0 (RtlpCreateHeap.c)
 *     RtlDestroyHeap @ 0x1800280C0 (RtlDestroyHeap.c)
 *     RtlpReadProcessHeaps @ 0x180112AC0 (RtlpReadProcessHeaps.c)
 */

void RtlDetectHeapLeaks(void)
{
  struct _PEB *v0; // rax

  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100) == 0
    && (NtCurrentPeb()->NtGlobalFlag & 0x2000000) == 0
    && (*((_QWORD *)&xmmword_1801D3000 + 1) || (RtlpShutdownProcessFlags & 3) != 0) )
  {
    RtlpLeaksCount = 0;
    RtlpLeakHeap = (PVOID)RtlpCreateHeap(3, 0, 0, 0, 0LL, 0LL, 0);
    if ( RtlpLeakHeap )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Inspecting leaks at process shutdown ...\n");
      if ( (unsigned __int8)RtlpInitializeLeakDetection() )
      {
        RtlpLeakHeapAddress = (__int64)RtlpLeakHeap;
        RtlpReadProcessHeaps();
        RtlpScanProcessVirtualMemory();
        RtlDestroyHeap(RtlpLeakHeap);
        RtlpLeakHeap = 0LL;
        v0 = NtCurrentPeb();
        if ( RtlpLeaksCount )
        {
          if ( v0->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("%ld leaks detected.\n", RtlpLeaksCount);
          if ( (RtlpShutdownProcessFlags & 2) != 0 )
            __debugbreak();
        }
        else
        {
          if ( v0->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("No leaks detected.\n");
        }
      }
      else
      {
        RtlDestroyHeap(RtlpLeakHeap);
      }
    }
  }
}
