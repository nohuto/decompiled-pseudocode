/*
 * XREFs of RtlEnableThreadProfiling @ 0x1801343A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlEnableThreadProfiling(
        HANDLE ThreadHandle,
        ULONG Flags,
        ULONG64 HardwareCounters,
        PVOID *PerformanceDataHandle)
{
  _QWORD *Heap; // rax
  _QWORD *v10; // rbx
  int v11; // edi
  ULONG64 ThreadInformation; // [rsp+20h] [rbp-38h] BYREF
  ULONG v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+2Ch] [rbp-2Ch]
  _QWORD *v15; // [rsp+30h] [rbp-28h]

  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741584;
  if ( (HardwareCounters & 0xFFFFFFFFFFFF0000uLL) != 0 )
    return -1073741583;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x1C0uLL);
  v10 = Heap;
  if ( !Heap )
    return -1073741801;
  memset_thunk_772440563353939046(Heap, 0, 0x1C0uLL);
  *(_DWORD *)v10 = 65984;
  v10[4] = HardwareCounters;
  v14 = 1;
  v13 = Flags;
  ThreadInformation = HardwareCounters;
  v15 = v10;
  v11 = NtSetInformationThread(ThreadHandle, ThreadCounterProfiling, &ThreadInformation, 0x18u);
  if ( v11 < 0 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  else
    *PerformanceDataHandle = v10;
  return v11;
}
