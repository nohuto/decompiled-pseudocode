/*
 * XREFs of MiFreePartitionPhysicalPages @ 0x1407FC86C
 * Callers:
 *     MiDeletePartitionResources @ 0x1407FC4B4 (MiDeletePartitionResources.c)
 * Callees:
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiIncreaseCommitLimits @ 0x14068733C (MiIncreaseCommitLimits.c)
 *     MiReturnPartitionPagesToParent @ 0x14068C3BC (MiReturnPartitionPagesToParent.c)
 */

void __fastcall MiFreePartitionPhysicalPages(_QWORD *a1, ULONG *a2)
{
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned int v5; // eax
  ULONG_PTR *v6; // r8
  ULONG_PTR v7; // r9
  unsigned __int64 v8; // rdx
  ULONG_PTR v9; // rcx
  ULONG_PTR v10; // r8
  __int64 v11; // r11
  unsigned __int64 v12; // rdx

  BugCheckParameter4 = a1[2314];
  MiReturnPartitionPagesToParent((ULONG_PTR)a1);
  v5 = 0;
  v6 = (ULONG_PTR *)(a1[2] + 15256LL);
  while ( v5 < (unsigned __int16)KeNumberNodes )
  {
    if ( *v6 )
      KeBugCheckEx(0x1Au, 0x41008uLL, *v6, 0LL, 0LL);
    v6 += 7152;
    ++v5;
  }
  v7 = a1[2336];
  v8 = a1[2344];
  v9 = a1[2314];
  if ( a1[880] )
    KeBugCheckEx(0x1Au, 0x41006uLL, BugCheckParameter4, v9, a1[2336]);
  if ( v9 )
    KeBugCheckEx(0x1Au, 0x41005uLL, BugCheckParameter4, v9, a1[2336]);
  if ( v7 )
    KeBugCheckEx(0x1Au, 0x41004uLL, BugCheckParameter4, v7, 0LL);
  v10 = a1[2408];
  if ( v10 )
    KeBugCheckEx(0x1Au, 0x41009uLL, v10, a1[2451], BugCheckParameter4);
  if ( v8 != BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x41003uLL, BugCheckParameter4, a1[2344], a1[2451]);
  MiReturnResident((__int64)a2, v8);
  v12 = a1[2451];
  if ( a2 == &MiSystemPartition )
    MiReturnCommit((__int64)a2, v12, 0);
  else
    MiIncreaseCommitLimits((__int64)a2, v12, v12, 0LL, v11, v11);
}
