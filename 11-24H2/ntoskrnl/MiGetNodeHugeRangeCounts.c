/*
 * XREFs of MiGetNodeHugeRangeCounts @ 0x1404F7484
 * Callers:
 *     MmFillEtwHugeIoSpaceInformation @ 0x14066A234 (MmFillEtwHugeIoSpaceInformation.c)
 *     MmManagePartitionMemoryInformation @ 0x1408F7014 (MmManagePartitionMemoryInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetNodeHugeRangeCounts(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // rbx
  unsigned int i; // edi
  __int64 v7; // r10
  unsigned __int64 result; // rax

  v4 = 0LL;
  v5 = 0LL;
  for ( i = 0; i < (unsigned __int8)MmNumberOfChannels; v5 += *(_QWORD *)(a1 + 8 * v7 + 15016) )
  {
    v7 = i++;
    v4 += *(_QWORD *)(a1 + 8 * v7 + 15000);
  }
  result = *(_QWORD *)(a1 + 14992);
  *a2 = result;
  if ( v4 <= result )
  {
    result -= v4;
    if ( v5 > result )
      v5 = result;
  }
  else
  {
    v4 = result;
  }
  *a4 = v5;
  *a3 = v4;
  return result;
}
