/*
 * XREFs of TppQueryMaximumGroupCount @ 0x180034454
 * Callers:
 *     TpInitializePackage @ 0x1800340DC (TpInitializePackage.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtQuerySystemInformationEx @ 0x180165FD0 (NtQuerySystemInformationEx.c)
 */

__int64 TppQueryMaximumGroupCount()
{
  unsigned __int16 v0; // di
  _WORD *Heap; // rbx
  ULONG SystemInformationLength; // eax
  NTSTATUS v3; // eax
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF
  int InputBuffer; // [rsp+48h] [rbp+10h] BYREF

  ReturnLength = 0;
  v0 = 0;
  Heap = 0LL;
  for ( SystemInformationLength = 0; ; SystemInformationLength = ReturnLength )
  {
    InputBuffer = 4;
    v3 = NtQuerySystemInformationEx(
           SystemLogicalProcessorAndGroupInformation,
           &InputBuffer,
           4u,
           Heap,
           SystemInformationLength,
           &ReturnLength);
    if ( v3 >= 0 )
      break;
    if ( v3 != -1073741820 )
      goto LABEL_9;
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, ReturnLength);
    if ( !Heap )
      return v0;
  }
  v0 = Heap[4];
LABEL_9:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
  return v0;
}
