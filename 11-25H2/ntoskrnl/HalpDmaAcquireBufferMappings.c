/*
 * XREFs of HalpDmaAcquireBufferMappings @ 0x1403368EC
 * Callers:
 *     HalpDmaSyncMapBuffers @ 0x140336530 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaFreeMapRegisters @ 0x140336C24 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaZeroMapBuffers @ 0x14054CFBC (HalpDmaZeroMapBuffers.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140300F20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x140433470 (MmMapLockedPagesWithReservedMapping.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 */

__int64 __fastcall HalpDmaAcquireBufferMappings(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rsi
  unsigned int v6; // ecx
  __int64 v8; // r14
  _QWORD *v9; // rdx
  __int64 Number; // rcx
  __int64 v11; // r10
  struct _MDL *v12; // rbp
  int v13; // ecx
  struct _MDL *v14; // r8
  __int64 v15; // r9
  PSLIST_ENTRY v16; // rbx
  char v17; // r15
  bool v18; // zf
  PSLIST_ENTRY v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned int v23; // r9d
  int v24; // edx
  __int64 *v25; // r10
  __int64 v26; // rax
  int v27; // ecx
  unsigned int v28; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  result = 0LL;
  v5 = a3;
  v6 = 0;
  v8 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a3 )
  {
    do
    {
      if ( (*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        break;
      a2 = *(_QWORD *)(a2 + 8);
      ++v6;
    }
    while ( v6 < a3 );
  }
  if ( v6 == a3 )
  {
    *(_QWORD *)a4 = 0LL;
    return result;
  }
  v9 = (_QWORD *)v8;
  Number = KeGetCurrentPrcb()->Number;
  v11 = (unsigned int)Number;
  v12 = *(struct _MDL **)(qword_140E3E928 + 8 * Number);
  v13 = 0;
  v14 = v12 + 1;
  if ( (_DWORD)v5 )
  {
    v15 = v5;
    do
    {
      if ( (v9[6] & 0xFFFFFFFFFFFFF000uLL) == 0 )
      {
        ++v13;
        v14->Next = (struct _MDL *)(*v9 >> 12);
        v14 = (struct _MDL *)((char *)v14 + 8);
      }
      v9 = (_QWORD *)v9[1];
      --v15;
    }
    while ( v15 );
  }
  v16 = 0LL;
  v12->StartVa = 0LL;
  v17 = 1;
  v12->ByteOffset = 0;
  v18 = byte_140E3E8F8 == 0;
  v12->ByteCount = v13 << 12;
  if ( !v18 )
  {
    v16 = *(PSLIST_ENTRY *)(qword_140E3E930 + 8 * v11);
    goto LABEL_32;
  }
  v19 = RtlpInterlockedPopEntrySList(&stru_140E3E900);
  if ( v19 )
  {
    *((_DWORD *)&v19[1].Next + 3) = 0;
    v16 = v19;
LABEL_31:
    _InterlockedIncrement((volatile signed __int32 *)&v16[1].Next + 2);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)&v16[2], (PKLOCK_QUEUE_HANDLE)(a4 + 24));
LABEL_32:
    result = (__int64)MmMapLockedPagesWithReservedMapping(v16[1].Next, 0x446C6148u, v12, MmCached);
    v20 = result;
    if ( !result )
      KeBugCheckEx(0xACu, 0x1000uLL, 0xEF02uLL, 0LL, 0LL);
    goto LABEL_16;
  }
  result = (__int64)MmMapLockedPagesSpecifyCache(v12, 0, MmCached, 0LL, 0, 0x40000020u);
  v20 = result;
  if ( !result )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140E3E8E8, &LockHandle);
    v23 = 1;
    v24 = *(_DWORD *)(*(_QWORD *)qword_140E3E930 + 24LL);
    if ( (unsigned int)dword_140E3E938 > 1 )
    {
      v25 = (__int64 *)(qword_140E3E930 + 8);
      do
      {
        v26 = *v25;
        v27 = v24;
        ++v25;
        v24 = *(_DWORD *)(v26 + 24);
        v28 = v23;
        if ( v24 >= v27 )
          v28 = (unsigned int)v16;
        ++v23;
        LODWORD(v16) = v28;
        if ( v24 >= v27 )
          v24 = v27;
      }
      while ( v23 < dword_140E3E938 );
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v16 = *(PSLIST_ENTRY *)(qword_140E3E930 + 8LL * (unsigned int)v16);
    goto LABEL_31;
  }
  v17 = 0;
LABEL_16:
  v21 = v20;
  if ( (_DWORD)v5 )
  {
    v22 = v5;
    do
    {
      if ( (*(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFF000uLL) == 0 )
      {
        result = v21 | *(_DWORD *)(v8 + 48) & 0xFEF | 0x10;
        *(_QWORD *)(v8 + 48) = result;
        v21 += 4096LL;
      }
      v8 = *(_QWORD *)(v8 + 8);
      --v22;
    }
    while ( v22 );
  }
  *(_QWORD *)a4 = v12;
  *(_QWORD *)(a4 + 8) = v20;
  *(_QWORD *)(a4 + 16) = v16;
  *(_BYTE *)(a4 + 48) = v17;
  return result;
}
