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
  __int64 Heap; // rbx
  int i; // eax
  int v3; // eax
  int v5; // [rsp+30h] [rbp-8h]
  int v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  v0 = 0;
  Heap = 0LL;
  for ( i = 0; ; i = v6 )
  {
    v7 = 4;
    v3 = NtQuerySystemInformationEx(107LL, &v7, 4LL, Heap, i, &v6, v5);
    if ( v3 >= 0 )
      break;
    if ( v3 != -1073741820 )
      goto LABEL_9;
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 786432), Heap);
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap);
    if ( !Heap )
      return v0;
  }
  v0 = *(_WORD *)(Heap + 8);
LABEL_9:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 786432), Heap);
  return v0;
}
