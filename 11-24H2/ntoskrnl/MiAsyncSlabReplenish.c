/*
 * XREFs of MiAsyncSlabReplenish @ 0x14026F604
 * Callers:
 *     MiAllocateSlabPageForMdl @ 0x14021CD30 (MiAllocateSlabPageForMdl.c)
 *     MiGetPageFromSlabAllocator @ 0x14021D5AC (MiGetPageFromSlabAllocator.c)
 *     MiMakeZeroedPageTablesEx @ 0x14026D5D0 (MiMakeZeroedPageTablesEx.c)
 *     MiFastReplenishWithAsync @ 0x14026F5B8 (MiFastReplenishWithAsync.c)
 *     MiDeleteSlabAllocator @ 0x140688620 (MiDeleteSlabAllocator.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x140279D60 (ExQueueWorkItemToPartition.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MiAsyncSlabReplenish(__int64 a1, LARGE_INTEGER *a2, char a3)
{
  int v5; // ebx
  volatile LONG *v6; // rdi
  unsigned int v7; // r15d
  KIRQL v8; // r13
  BOOL v9; // r14d
  volatile LONG *v10; // rcx
  __int64 v11; // rdx
  __int64 v13; // rsi
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  int v17; // [rsp+30h] [rbp-30h]
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  _QWORD *v19; // [rsp+40h] [rbp-20h]
  __int16 Object; // [rsp+48h] [rbp-18h] BYREF
  char v21; // [rsp+4Ah] [rbp-16h]
  char v22; // [rsp+4Bh] [rbp-15h]
  int v23; // [rsp+4Ch] [rbp-14h]
  _QWORD v24[2]; // [rsp+50h] [rbp-10h] BYREF
  KIRQL v26; // [rsp+B8h] [rbp+58h]

  v18 = 0LL;
  v19 = 0LL;
  v22 = 0;
  if ( ((unsigned __int8)MiFlags & 0x30u) >= 0x10 )
  {
    v5 = 1;
    Object = 0;
    v23 = 0;
    v24[1] = v24;
    v6 = (volatile LONG *)(a1 + 16);
    v21 = 6;
    v24[0] = v24;
    v7 = a3 & 1;
    v8 = 17;
    v9 = !(a3 & 1);
    v10 = (volatile LONG *)(a1 + 16);
    v17 = a3 & 4;
    if ( (a3 & 4) != 0 )
    {
      v26 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v10);
    }
    else
    {
      v26 = ExAcquireSpinLockExclusive(v10);
    }
    if ( !*(_QWORD *)(a1 + 208) )
    {
      if ( (a3 & 2) != 0 )
      {
        v9 = 0;
        goto LABEL_8;
      }
      *(_QWORD *)(a1 + 208) = a1;
      ExQueueWorkItemToPartition(a1 + 184);
    }
    if ( v9 )
    {
      v13 = a1 + 216;
      v14 = *(_QWORD **)(v13 + 8);
      if ( *v14 != v13 )
        goto LABEL_23;
      v19 = *(_QWORD **)(v13 + 8);
      v18 = v13;
      *v14 = &v18;
      *(_QWORD *)(v13 + 8) = &v18;
    }
LABEL_8:
    LOBYTE(v11) = v26;
    MiReleaseSpinLockExclusive(v6, v11);
    if ( !v9 )
      return v7;
    if ( KeWaitForSingleObject(&Object, WrKernel, 0, 0, a2) != 258 )
      v5 = v7;
    v7 = v5;
    if ( v17 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v6);
    else
      v8 = ExAcquireSpinLockExclusive(v6);
    v15 = v18;
    v16 = v19;
    if ( *(__int64 **)(v18 + 8) == &v18 && (__int64 *)*v19 == &v18 )
    {
      *v19 = v18;
      *(_QWORD *)(v15 + 8) = v16;
      LOBYTE(v15) = v8;
      MiReleaseSpinLockExclusive(v6, v15);
      return v7;
    }
LABEL_23:
    __fastfail(3u);
  }
  return 1LL;
}
