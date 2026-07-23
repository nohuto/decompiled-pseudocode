/*
 * XREFs of MiInsertPteTracker @ 0x1406924A4
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x14034B0DC (MiMapContiguousMemory.c)
 *     MmAllocateMappingAddressEx @ 0x140A531F0 (MmAllocateMappingAddressEx.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetInstructionPointer @ 0x14066CD98 (MiGetInstructionPointer.c)
 *     MiCaptureStackTraceEx @ 0x14069195C (MiCaptureStackTraceEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1406B48B0 (RtlpInterlockedFlushSList.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInsertPteTracker(__int64 a1, int a2, char a3, char a4)
{
  PSLIST_ENTRY v8; // rdi
  __int64 result; // rax
  PSLIST_ENTRY v10; // rax
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY *v12; // rbx
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rbp
  _SLIST_ENTRY *v20; // rdx
  unsigned __int64 v21; // rbx
  KIRQL v22; // si
  char *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rax
  _OWORD v26[3]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+50h] [rbp-88h]
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h]

  memset_0(v26, 0, 0xA0uLL);
  if ( LOWORD(ListHead.Alignment) >= 0xAu )
  {
    v10 = RtlpInterlockedFlushSList(&ListHead);
    v8 = v10;
    if ( v10 )
    {
      Next = v10->Next;
      if ( v10->Next )
      {
        do
        {
          v12 = Next->Next;
          ExFreePoolWithTag(Next, 0);
          Next = v12;
        }
        while ( v12 );
      }
      goto LABEL_8;
    }
  }
  else
  {
    v8 = RtlpInterlockedPopEntrySList(&ListHead);
    if ( v8 )
      goto LABEL_8;
  }
  result = MiAllocatePool(0x40uLL, 0x80uLL, 2035510605);
  v8 = (PSLIST_ENTRY)result;
  if ( !result )
  {
    byte_140E35FE5 = 1;
    return result;
  }
LABEL_8:
  if ( !a2 )
  {
    v17 = (*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 32)) & 0xFFF;
    v18 = *(unsigned int *)(a1 + 40) + 4095LL;
    v8[1].Next = (_SLIST_ENTRY *)a1;
    v16 = v18 + v17;
    *((_QWORD *)&v8[2].Next + 1) = *(_QWORD *)(a1 + 32);
    LODWORD(v8[3].Next) = *(_DWORD *)(a1 + 44);
    HIDWORD(v8[3].Next) = *(_DWORD *)(a1 + 40);
    goto LABEL_13;
  }
  if ( a2 == 1 )
  {
    v14 = (*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF;
    v15 = *(_QWORD *)(a1 + 16) + 4095LL;
    v8[1].Next = (_SLIST_ENTRY *)1;
    v16 = v15 + v14;
LABEL_13:
    v13 = v16 >> 12;
    goto LABEL_14;
  }
  v13 = *(_QWORD *)(a1 + 16) >> 12;
  v8[1].Next = 0LL;
LABEL_14:
  v19 = v13 + 1;
  if ( (a3 & 2) == 0 )
    v19 = v13;
  *((_QWORD *)&v8[1].Next + 1) = v19;
  if ( !MiCaptureStackTraceEx(v26, 7u) )
  {
    *(_QWORD *)&v26[0] = MiGetInstructionPointer();
    *((_QWORD *)&v26[0] + 1) = retaddr;
  }
  *(_OWORD *)((char *)v8 + 72) = v26[0];
  *(_OWORD *)((char *)v8 + 88) = v26[1];
  *(_OWORD *)((char *)v8 + 104) = v26[2];
  *((_QWORD *)&v8[7].Next + 1) = v27;
  v20 = *(_SLIST_ENTRY **)(a1 + 24);
  v8[2].Next = v20;
  *((_QWORD *)&v8[3].Next + 1) = *(_QWORD *)(a1 + 48);
  LODWORD(v8[4].Next) = ((a3 & 2) != 0 ? 0x10 : 0) | a3 & 1 ^ (LODWORD(v8[4].Next) ^ ((unsigned __int8)LODWORD(v8[4].Next) ^ (unsigned __int8)(4 * a4)) & 0xC) & 0xFFFFFFEC;
  v21 = (40543 * ((unsigned __int64)v20 >> 12)) ^ ((40543 * ((unsigned __int64)v20 >> 12)) >> 32);
  if ( KeGetCurrentIrql() == 2 )
  {
    v22 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E35E50);
  }
  else
  {
    v22 = ExAcquireSpinLockExclusive(&dword_140E35E50);
  }
  v23 = (char *)&unk_140E38930 + 16 * (v21 & 0xF);
  v24 = *(_QWORD *)v23;
  if ( *(char **)(*(_QWORD *)v23 + 8LL) != v23 )
    __fastfail(3u);
  v8->Next = (_SLIST_ENTRY *)v24;
  *((_QWORD *)&v8->Next + 1) = v23;
  *(_QWORD *)(v24 + 8) = v8;
  *(_QWORD *)v23 = v8;
  qword_140E38A30 += v19;
  v25 = ++qword_140E38A38;
  if ( qword_140E38A38 > (unsigned __int64)qword_140E38A40 )
    qword_140E38A40 = v25;
  return MiReleaseSpinLockExclusive(&dword_140E35E50, v22);
}
