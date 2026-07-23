/*
 * XREFs of MmManagePartitionInitialAddMemory @ 0x1407FD584
 * Callers:
 *     NtManagePartition @ 0x1408F6B10 (NtManagePartition.c)
 * Callees:
 *     MiValidatePartitionInitialAddMemory @ 0x14068CBEC (MiValidatePartitionInitialAddMemory.c)
 *     MiHotAddPartitionMemory @ 0x1407FC9F4 (MiHotAddPartitionMemory.c)
 *     MiSpecialPurposeMemoryChangePrepare @ 0x1407FF310 (MiSpecialPurposeMemoryChangePrepare.c)
 *     MiSpecialPurposeMemoryTypeDereference @ 0x1407FF594 (MiSpecialPurposeMemoryTypeDereference.c)
 */

__int64 __fastcall MmManagePartitionInitialAddMemory(ULONG **a1, int *a2, __int64 a3, char a4)
{
  ULONG *v4; // rbp
  __int64 v5; // rbx
  int v6; // r14d
  ULONG *v9; // r15
  int v10; // esi
  int v11; // eax
  __int64 result; // rax
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1;
  v5 = 0LL;
  v6 = *a2;
  v13 = 0LL;
  v9 = 0LL;
  v10 = MiValidatePartitionInitialAddMemory((__int64)a1, a2, a3, a4);
  if ( v10 < 0 )
    goto LABEL_8;
  if ( (v6 & 0x10) != 0 )
  {
    *a2 = v6 & 0xFFFFFFEE | 1;
    v11 = MiSpecialPurposeMemoryChangePrepare(v4, a2 + 4, &v13);
    v5 = v13;
    v10 = v11;
    if ( v11 < 0 )
      goto LABEL_6;
    v9 = v4;
    v4 = *(ULONG **)(v13 + 64);
  }
  v10 = MiHotAddPartitionMemory(v4, (__int64 *)(a3 + 48), a2);
LABEL_6:
  if ( v5 )
    MiSpecialPurposeMemoryTypeDereference(v9, v5);
LABEL_8:
  result = (unsigned int)v10;
  *a2 = v6;
  return result;
}
