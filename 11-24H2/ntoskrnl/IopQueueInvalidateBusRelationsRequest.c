/*
 * XREFs of IopQueueInvalidateBusRelationsRequest @ 0x14048DC2C
 * Callers:
 *     IoInvalidateDeviceRelations @ 0x14048DB00 (IoInvalidateDeviceRelations.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void __fastcall IopQueueInvalidateBusRelationsRequest(_QWORD *Object, int a2)
{
  __int64 v4; // rax
  unsigned __int8 v5; // bp
  __int64 Pool2; // rsi
  __int64 v7; // rdx
  __int64 CurrentIrql; // rcx
  char v9; // bl
  __int64 *v10; // rax
  __int64 *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  _WORD *v14; // rcx
  __int64 v15; // rcx
  unsigned __int16 *v16; // rsi
  _WORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx

  if ( !Object )
    goto LABEL_2;
  v4 = *(_QWORD *)(Object[39] + 40LL);
  if ( !v4 || (*(_DWORD *)(v4 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((ULONG)Object, (PVOID)*((unsigned __int16 *)Object + 1));
    v13 = Object[1];
    if ( v13 )
    {
      IoAddTriageDumpDataBlock(v13, (PVOID)(unsigned int)*(__int16 *)(v13 + 2));
      v14 = (_WORD *)(Object[1] + 56LL);
      if ( *v14 )
      {
        IoAddTriageDumpDataBlock((ULONG)v14, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(Object[1] + 64LL), (PVOID)*(unsigned __int16 *)(Object[1] + 56LL));
      }
    }
    v15 = *(_QWORD *)(Object[39] + 40LL);
    if ( v15 )
    {
      v16 = (unsigned __int16 *)(v15 + 40);
      IoAddTriageDumpDataBlock(v15, (PVOID)0x388);
      if ( *v16 )
      {
        IoAddTriageDumpDataBlock((ULONG)v16, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v16 + 1), (PVOID)*v16);
      }
      v17 = (_WORD *)(*(_QWORD *)(Object[39] + 40LL) + 56LL);
      if ( *v17 )
      {
        IoAddTriageDumpDataBlock((ULONG)v17, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(Object[39] + 40LL) + 56LL));
      }
      v18 = *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 16LL);
      if ( v18 && *(_WORD *)(v18 + 56) )
      {
        IoAddTriageDumpDataBlock(v18 + 56, (PVOID)2);
        v19 = *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 16LL);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v19 + 64), (PVOID)*(unsigned __int16 *)(v19 + 56));
      }
    }
LABEL_2:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)Object, 0LL, 0LL);
  }
  v5 = 0;
  Pool2 = ExAllocatePool2(0x40uLL, 0x20uLL, 0x6F697050u);
  if ( Pool2 )
  {
    ObfReferenceObjectWithTag(Object, 0x65706E50u);
    *(_QWORD *)(Pool2 + 16) = Object;
    *(_DWORD *)(Pool2 + 24) = a2;
    CurrentIrql = KeGetCurrentIrql();
    if ( (unsigned __int8)CurrentIrql < 2u )
    {
      v9 = 1;
      v5 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v7) = 2;
        LOBYTE(CurrentIrql) = v5;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v7);
      }
    }
    else
    {
      v9 = 0;
    }
    KxAcquireSpinLock(&IoInvalidateBusRelationsLock);
    v10 = (__int64 *)qword_140F8C2D8;
    v11 = (__int64 *)IoInvalidateBusRelationsQueue;
    if ( *(__int64 **)qword_140F8C2D8 != &IoInvalidateBusRelationsQueue )
      __fastfail(3u);
    *(_QWORD *)Pool2 = &IoInvalidateBusRelationsQueue;
    *(_QWORD *)(Pool2 + 8) = v10;
    *v10 = Pool2;
    qword_140F8C2D8 = Pool2;
    KxReleaseSpinLock((volatile signed __int64 *)&IoInvalidateBusRelationsLock);
    if ( v9 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v12) = v5;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
      }
      __writecr8(v5);
    }
    if ( v11 == &IoInvalidateBusRelationsQueue )
      ExQueueWorkItem(&IoInvalidateBusRelationsWorkItem, DelayedWorkQueue);
  }
}
