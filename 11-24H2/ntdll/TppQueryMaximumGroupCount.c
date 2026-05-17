/*
 * XREFs of TppQueryMaximumGroupCount @ 0x1800A5614
 * Callers:
 *     TpInitializePackage @ 0x1800A52A0 (TpInitializePackage.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     NtQuerySystemInformationEx @ 0x180164A40 (NtQuerySystemInformationEx.c)
 */

__int64 TppQueryMaximumGroupCount()
{
  unsigned __int16 v0; // di
  unsigned __int64 Heap; // rbx
  unsigned int i; // eax
  int v3; // eax
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  v0 = 0;
  Heap = 0LL;
  for ( i = 0; ; i = v5 )
  {
    v6 = 4;
    v3 = NtQuerySystemInformationEx(107LL, &v6, 4LL, Heap, i, &v5);
    if ( v3 >= 0 )
      break;
    if ( v3 != -1073741820 )
      goto LABEL_9;
    if ( Heap )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, v5);
    if ( !Heap )
      return v0;
  }
  v0 = *(_WORD *)(Heap + 8);
LABEL_9:
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
  return v0;
}
