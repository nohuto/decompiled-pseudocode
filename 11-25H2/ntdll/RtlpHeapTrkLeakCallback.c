/*
 * XREFs of RtlpHeapTrkLeakCallback @ 0x180092440
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlpHeapTrkFindStack @ 0x1800923B0 (RtlpHeapTrkFindStack.c)
 *     RtlpHeapTrkReportResult @ 0x180092648 (RtlpHeapTrkReportResult.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x180092DD0 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlpHeapTrkDumpStacks @ 0x180110764 (RtlpHeapTrkDumpStacks.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x1801162B0 (RtlpHeapTrkSyncWithDiagnoser.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 */

__int64 __fastcall RtlpHeapTrkLeakCallback(__int64 a1, __int64 a2, unsigned __int64 a3, const void *a4)
{
  __int64 Stack; // rbx
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-18h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+58h] [rbp-10h] BYREF
  const void *Src; // [rsp+80h] [rbp+18h] BYREF

  Src = (const void *)a3;
  ViewSize = 0x10000LL;
  SectionOffset.QuadPart = 0LL;
  if ( !byte_1801D0868 )
  {
    if ( byte_1801CF0C8 )
    {
      byte_1801CF0C8 = 0;
      _InterlockedExchange(&dword_1801D0878, 1);
      if ( ZwMapViewOfSection(
             SectionHandle,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &TrkContext,
             0LL,
             0LL,
             &SectionOffset,
             &ViewSize,
             ViewShare,
             0,
             4u) < 0 )
        return 0LL;
      if ( !TrkContext )
        return 0LL;
      *((_DWORD *)TrkContext + 12) = NtCurrentTeb()->ClientId.UniqueProcess;
      if ( !(unsigned __int8)RtlpHeapTrkDumpStacks() )
        return 0LL;
      a3 = (unsigned __int64)Src;
    }
    if ( TrkContext )
    {
      if ( a2 )
      {
        Stack = RtlpHeapTrkFindStack((a3 >> 3) | 0xE000000000000000uLL);
        if ( (unsigned __int8)RtlpHeapTrkReportResult(0x20uLL, &Src, 8uLL) && Stack )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint(
            " Leaked Block 0x%p size 0x%p (stack %p depth %u)\n",
            Src,
            a4,
            (const void *)(Stack + 24),
            *(unsigned __int16 *)(Stack + 16));
        }
      }
      else
      {
        RtlpHeapTrkDumpOutstandingAllocs();
        if ( *((_DWORD *)TrkContext + 15) )
        {
          if ( !(unsigned __int8)RtlpHeapTrkSyncWithDiagnoser() )
            return 0LL;
          *((_DWORD *)TrkContext + 15) = 0;
          dword_1801CF0CC = 0;
        }
        RtlpHeapTrkSyncWithDiagnoser();
      }
    }
  }
  return 0LL;
}
