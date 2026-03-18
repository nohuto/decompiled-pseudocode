/*
 * XREFs of MiAsyncSlabReplenish @ 0x140390EF4
 * Callers:
 *     MiAllocateSlabPageForMdl @ 0x14022AE68 (MiAllocateSlabPageForMdl.c)
 *     MiMakeZeroedPageTablesEx @ 0x14038F57C (MiMakeZeroedPageTablesEx.c)
 *     MiFastReplenishWithAsync @ 0x140390EA8 (MiFastReplenishWithAsync.c)
 *     MiGetPageFromSlabAllocator @ 0x1403B7FAC (MiGetPageFromSlabAllocator.c)
 *     MiDeleteSlabAllocator @ 0x14067BC60 (MiDeleteSlabAllocator.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     ExQueueWorkItemToPartition @ 0x1403AC7C0 (ExQueueWorkItemToPartition.c)
 */

__int64 __fastcall MiAsyncSlabReplenish(__int64 a1, LARGE_INTEGER *a2, char a3)
{
  int v5; // ebx
  volatile LONG *v6; // rdi
  unsigned int v7; // r15d
  KIRQL v8; // r13
  BOOL v9; // r14d
  volatile LONG *v10; // rcx
  __int64 v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  int v16; // [rsp+30h] [rbp-30h]
  __int64 v17; // [rsp+38h] [rbp-28h] BYREF
  _QWORD *v18; // [rsp+40h] [rbp-20h]
  __int16 Object; // [rsp+48h] [rbp-18h] BYREF
  char v20; // [rsp+4Ah] [rbp-16h]
  char v21; // [rsp+4Bh] [rbp-15h]
  int v22; // [rsp+4Ch] [rbp-14h]
  _QWORD v23[2]; // [rsp+50h] [rbp-10h] BYREF
  KIRQL v25; // [rsp+B8h] [rbp+58h]

  v17 = 0LL;
  v18 = 0LL;
  v21 = 0;
  if ( ((unsigned __int8)MiFlags & 0x30u) >= 0x10 )
  {
    v5 = 1;
    Object = 0;
    v22 = 0;
    v23[1] = v23;
    v6 = (volatile LONG *)(a1 + 16);
    v20 = 6;
    v23[0] = v23;
    v7 = a3 & 1;
    v8 = 17;
    v9 = !(a3 & 1);
    v10 = (volatile LONG *)(a1 + 16);
    v16 = a3 & 4;
    if ( (a3 & 4) != 0 )
    {
      v25 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v10);
    }
    else
    {
      v25 = ExAcquireSpinLockExclusive(v10);
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
      v12 = a1 + 216;
      v13 = *(_QWORD **)(v12 + 8);
      if ( *v13 != v12 )
        goto LABEL_23;
      v18 = *(_QWORD **)(v12 + 8);
      v17 = v12;
      *v13 = &v17;
      *(_QWORD *)(v12 + 8) = &v17;
    }
LABEL_8:
    MiReleaseSpinLockExclusive(v6, v25);
    if ( !v9 )
      return v7;
    if ( KeWaitForSingleObject(&Object, WrKernel, 0, 0, a2) != 258 )
      v5 = v7;
    v7 = v5;
    if ( v16 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v6);
    else
      v8 = ExAcquireSpinLockExclusive(v6);
    v14 = v17;
    v15 = v18;
    if ( *(__int64 **)(v17 + 8) == &v17 && (__int64 *)*v18 == &v17 )
    {
      *v18 = v17;
      *(_QWORD *)(v14 + 8) = v15;
      MiReleaseSpinLockExclusive(v6, v8);
      return v7;
    }
LABEL_23:
    __fastfail(3u);
  }
  return 1LL;
}
