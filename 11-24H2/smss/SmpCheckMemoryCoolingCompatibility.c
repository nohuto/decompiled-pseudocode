/*
 * XREFs of SmpCheckMemoryCoolingCompatibility @ 0x14000D9C4
 * Callers:
 *     SmpAsyncMemoryConfiguration @ 0x14000F110 (SmpAsyncMemoryConfiguration.c)
 * Callees:
 *     <none>
 */

char SmpCheckMemoryCoolingCompatibility()
{
  _UNKNOWN **Heap; // rax
  _DWORD *v1; // rbx
  int v2; // esi
  unsigned int v3; // edi
  unsigned int i; // ebp
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  ULONG ReturnLength; // [rsp+50h] [rbp+8h] BYREF

  Heap = &retaddr;
  v1 = 0LL;
  ReturnLength = 0;
  v2 = 0;
  v3 = (SmpMaximumNodeCount << 13) + 48;
  for ( i = 0; i < 2; ++i )
  {
    Heap = (_UNKNOWN **)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v3);
    v1 = Heap;
    if ( !Heap )
      return (char)Heap;
    LODWORD(Heap) = NtQuerySystemInformation(SystemCallTimeInformation|0x80, Heap, v3, &ReturnLength);
    v2 = (int)Heap;
    if ( (int)Heap < 0 )
    {
      if ( (_DWORD)Heap != -1073741789 )
        goto LABEL_12;
      LOBYTE(Heap) = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v1);
      v3 = ReturnLength;
      v1 = 0LL;
    }
  }
  if ( v2 >= 0 && v1[3] > 1u )
    LOBYTE(Heap) = NtUpdateWnfStateData(&WNF_SMSS_MEMORY_COOLING_COMPATIBLE, 0LL, 0LL, 0LL, 0LL, 0, 0);
  if ( v1 )
LABEL_12:
    LOBYTE(Heap) = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v1);
  return (char)Heap;
}
