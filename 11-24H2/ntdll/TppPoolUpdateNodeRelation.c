/*
 * XREFs of TppPoolUpdateNodeRelation @ 0x1800ABAAC
 * Callers:
 *     TppAdjustRunningThreadGoalWithLock @ 0x1800252B4 (TppAdjustRunningThreadGoalWithLock.c)
 *     TpAllocPoolInternal @ 0x1800AB494 (TpAllocPoolInternal.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     NtQuerySystemInformationEx @ 0x180164A40 (NtQuerySystemInformationEx.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall TppPoolUpdateNodeRelation(__int64 a1)
{
  unsigned __int64 Heap; // rbx
  unsigned int i; // esi
  int v4; // eax
  unsigned int v5; // edi
  int v6; // edi
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r11
  unsigned __int16 j; // r10
  __int64 v10; // rax
  unsigned int v12; // [rsp+58h] [rbp+10h] BYREF
  int v13; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0;
  Heap = 0LL;
  for ( i = 0; ; i = v12 )
  {
    v13 = 6;
    v4 = NtQuerySystemInformationEx(107LL, &v13, 4LL, Heap, i, &v12);
    v5 = v4;
    if ( v4 >= 0 )
      break;
    if ( v4 != -1073741820 )
      goto LABEL_13;
    if ( Heap )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, v12);
    if ( !Heap )
      return (unsigned int)-1073741801;
  }
  v6 = TppMaximumGroups;
  memset_thunk_772440563353939046(
    *(void **)(a1 + 48),
    0,
    16 * (unsigned int)TppNumberNodes * (unsigned __int64)(unsigned int)TppMaximumGroups);
  v7 = Heap;
  v8 = Heap + i;
  if ( Heap < v8 )
  {
    do
    {
      for ( j = 0;
            j < *(_WORD *)(v7 + 30);
            *(_OWORD *)(*(_QWORD *)(a1 + 48)
                      + 16LL * (v6 * *(_DWORD *)(v7 + 8) + (unsigned int)*(unsigned __int16 *)(v7 + 16 * (v10 + 2) + 8))) = *(_OWORD *)(v7 + 16LL * (unsigned int)v10 + 32) )
      {
        v10 = j++;
      }
      v7 += *(unsigned int *)(v7 + 4);
    }
    while ( v7 < v8 );
  }
  v5 = 0;
LABEL_13:
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
  return v5;
}
