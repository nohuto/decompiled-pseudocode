/*
 * XREFs of SepAddLuidToIndexEntry @ 0x140A330CC
 * Callers:
 *     SepSetProcessUniqueAttribute @ 0x140A32FD4 (SepSetProcessUniqueAttribute.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14024B8D0 (RtlFindClearBitsAndSet.c)
 *     RtlSetBits @ 0x14024BCC0 (RtlSetBits.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x140356E98 (SepCleanupMarkedForDeletionEntries.c)
 *     SepInitSingletonEntry @ 0x140357184 (SepInitSingletonEntry.c)
 *     RtlNumberOfSetBits @ 0x14042B480 (RtlNumberOfSetBits.c)
 *     RtlInsertEntryHashTable @ 0x140430180 (RtlInsertEntryHashTable.c)
 *     RtlClearAllBits @ 0x140448960 (RtlClearAllBits.c)
 *     SepExpandSingletonArrays @ 0x1404B520C (SepExpandSingletonArrays.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepAddLuidToIndexEntry(__int64 *a1, _QWORD *a2, __int64 *a3)
{
  __int64 Pool2; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  ULONG_PTR v9; // r15
  RTL_BITMAP *v10; // r12
  ULONG ClearBitsAndSet; // esi
  int v12; // edi
  __int64 v13; // rax
  volatile signed __int64 *v14; // rsi
  ULONG v16; // r14d
  void *v17; // rsi
  _BYTE *v18; // r14
  struct _RTL_DYNAMIC_HASH_TABLE *HashTable; // [rsp+70h] [rbp+18h]

  *a3 = 0LL;
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (unsigned __int64 *)SeLuidToIndexMapping;
  v7 = KeAbPreAcquire(SeLuidToIndexMapping, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, (__int64)v7, (__int64)v6);
  v9 = 1LL;
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  v10 = (RTL_BITMAP *)(SeLuidToIndexMapping + 16);
  HashTable = *(struct _RTL_DYNAMIC_HASH_TABLE **)(SeLuidToIndexMapping + 8);
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(SeLuidToIndexMapping + 16), 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    SepCleanupMarkedForDeletionEntries();
    ClearBitsAndSet = RtlFindClearBitsAndSet(v10, 1u, 0);
    if ( ClearBitsAndSet == -1 )
    {
      v16 = RtlNumberOfSetBits(v10);
      v17 = (void *)ExAllocatePool2(0x100uLL);
      if ( !v17 )
      {
LABEL_20:
        v12 = -1073741801;
LABEL_21:
        ExFreePoolWithTag((PVOID)Pool2, 0);
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
        goto LABEL_12;
      }
      v12 = SepExpandSingletonArrays();
      if ( v12 < 0 )
        goto LABEL_21;
      ExFreePoolWithTag(v10->Buffer, 0);
      v10->Buffer = (unsigned int *)v17;
      v10->SizeOfBitMap = v16 + 64;
      RtlClearAllBits(v10);
      RtlSetBits(v10, 0, v16);
      ClearBitsAndSet = RtlFindClearBitsAndSet(v10, 1u, 0);
    }
  }
  *(_QWORD *)(Pool2 + 24) = 1LL;
  *(_QWORD *)(Pool2 + 40) = ClearBitsAndSet;
  *(_QWORD *)(Pool2 + 32) = *a1;
  *(_BYTE *)(Pool2 + 48) = 0;
  if ( *a1 )
    v9 = *a1;
  if ( !RtlInsertEntryHashTable(HashTable, (PRTL_DYNAMIC_HASH_TABLE_ENTRY)Pool2, v9, 0LL) )
  {
    v18 = (char *)v10->Buffer + ((unsigned __int64)ClearBitsAndSet >> 3);
    *v18 &= ~(1 << (ClearBitsAndSet & 7));
    v17 = 0LL;
    goto LABEL_20;
  }
  v12 = 0;
  SepInitSingletonEntry(ClearBitsAndSet, *a1);
  v13 = *(_QWORD *)(Pool2 + 40);
  *a3 = Pool2;
  *a2 = v13;
LABEL_12:
  v14 = (volatile signed __int64 *)SeLuidToIndexMapping;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SeLuidToIndexMapping, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v14);
  KeAbPostRelease((ULONG_PTR)v14);
  KeLeaveCriticalRegion();
  return (unsigned int)v12;
}
