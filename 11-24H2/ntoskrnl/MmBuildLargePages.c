/*
 * XREFs of MmBuildLargePages @ 0x1409F091C
 * Callers:
 *     VmpAccessFaultBatchResolve @ 0x1409F0524 (VmpAccessFaultBatchResolve.c)
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     MiPartitionObjectToPartition @ 0x1403945BC (MiPartitionObjectToPartition.c)
 *     MiRebuildLargePage @ 0x1403F7120 (MiRebuildLargePage.c)
 *     MiGetLargestPageIndex @ 0x14048F5E0 (MiGetLargestPageIndex.c)
 */

unsigned __int64 __fastcall MmBuildLargePages(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rsi
  unsigned int LargestPageIndex; // eax
  unsigned int v5; // ebx
  __int64 *v6; // rcx
  ULONG *v7; // rax
  ULONG *v8; // rdi
  char v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0;
  v2 = 0LL;
  if ( a2 < (unsigned __int16)KeNumberNodes )
  {
    LargestPageIndex = MiGetLargestPageIndex();
    v5 = LargestPageIndex;
    if ( LargestPageIndex >= 3 )
    {
LABEL_6:
      if ( v5 == 3 )
        return v2;
    }
    else
    {
      v6 = &MiPageSizes[LargestPageIndex];
      while ( *v6 != 512 )
      {
        ++v5;
        ++v6;
        if ( v5 >= 3 )
          goto LABEL_6;
      }
    }
    v7 = MiPartitionObjectToPartition((ULONG **)0xFFFFFFFFFFFFFFFFLL, 0, &v10);
    v8 = v7;
    if ( v7 )
      v2 = MiRebuildLargePage((unsigned __int64)v7, a2, v5, 0x200uLL, 1) >> 9;
    if ( v10 )
      PsDereferencePartition(*((_QWORD *)v8 + 23));
  }
  return v2;
}
