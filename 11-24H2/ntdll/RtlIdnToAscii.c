/*
 * XREFs of RtlIdnToAscii @ 0x1800B1ED0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlpNameprepAsciiRealWorker @ 0x1800B2E50 (RtlpNameprepAsciiRealWorker.c)
 */

NTSTATUS __cdecl RtlIdnToAscii(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  PVOID Heap; // rbx
  PVOID v10; // rax
  void *v11; // rdi
  NTSTATUS v12; // esi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x3FEuLL);
  v10 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x406uLL);
  v11 = v10;
  if ( Heap && v10 )
  {
    v12 = RtlpNameprepAsciiRealWorker(
            Flags,
            SourceString,
            (unsigned int)SourceStringLength,
            DestinationString,
            DestinationStringLength,
            1,
            Heap);
LABEL_4:
    RtlpSysVolFree(Heap);
    goto LABEL_5;
  }
  v12 = -1073741801;
  if ( Heap )
    goto LABEL_4;
LABEL_5:
  if ( v11 )
    RtlpSysVolFree(v11);
  return v12;
}
