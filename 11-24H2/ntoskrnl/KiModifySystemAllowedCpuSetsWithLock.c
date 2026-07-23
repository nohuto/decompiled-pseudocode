/*
 * XREFs of KiModifySystemAllowedCpuSetsWithLock @ 0x14048B680
 * Callers:
 *     KeModifySystemAllowedCpuSets @ 0x14048B4B0 (KeModifySystemAllowedCpuSets.c)
 *     KeCpuPartitionMoveCpus @ 0x1405BCCE0 (KeCpuPartitionMoveCpus.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KeIsSubsetAffinityEx @ 0x1403A1D00 (KeIsSubsetAffinityEx.c)
 *     KeCpuSetReportParkedProcessors @ 0x1403A35A0 (KeCpuSetReportParkedProcessors.c)
 *     KiValidateCpuSetMasks @ 0x14048B8AC (KiValidateCpuSetMasks.c)
 */

__int64 __fastcall KiModifySystemAllowedCpuSetsWithLock(
        unsigned int a1,
        char *a2,
        unsigned __int16 *a3,
        int a4,
        int a5)
{
  char *v5; // r14
  __int64 v6; // rbp
  __int64 v9; // rbx
  __int64 result; // rax
  unsigned int v11; // r15d
  int v12; // edi
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  unsigned int v15; // r8d
  __int64 v16; // r11
  char *v17; // r10
  char *v18; // r13
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 *v23; // [rsp+20h] [rbp-38h]

  v5 = a2;
  v6 = a4;
  v9 = 0LL;
  result = KiValidateCpuSetMasks(a2);
  if ( (int)result < 0 )
    return result;
  if ( a3 && !(unsigned int)KeIsSubsetAffinityEx(a3, &KeActiveProcessors.Count) )
    return 3221225485LL;
  v11 = 32;
  if ( a1 < 0x20 )
    v11 = a1;
  v12 = 0;
  KxAcquireSpinLock(&KiCpuSetLock);
  _m_prefetchw(&KiCpuSetSequence);
  v13 = KiCpuSetSequence;
  while ( (v13 & 1) != 0 )
  {
    v13 = KiCpuSetSequence;
LABEL_25:
    _mm_pause();
  }
  v14 = v13;
  v13 = _InterlockedCompareExchange64(&KiCpuSetSequence, v13 + 1, v13);
  if ( v14 != v13 )
    goto LABEL_25;
  v15 = 0;
  v16 = 0LL;
  v17 = (char *)((char *)&KeActiveProcessors.8 - v5);
  v23 = &KiSystemAllowedCpuSets[v6];
  v18 = (char *)(&KiReservedCpuSets - (_UNKNOWN *)v5);
  do
  {
    v19 = *(_QWORD *)&v5[(_QWORD)v17];
    if ( a3 )
    {
      if ( (unsigned __int16)v15 >= *a3 )
        v20 = 0LL;
      else
        v20 = *(_QWORD *)&a3[4 * (unsigned __int16)v15 + 4];
    }
    else if ( v15 < v11 )
    {
      v20 = *(_QWORD *)v5;
    }
    else
    {
      v20 = 0LL;
      if ( !(_DWORD)v6 )
        v20 = *(_QWORD *)&v5[(_QWORD)v17];
    }
    if ( a5 )
    {
      if ( a5 == 1 )
      {
        v9 = KiSystemAllowedCpuSets[v16 + v6] | v20;
      }
      else if ( a5 == 2 )
      {
        v9 = *v23 & ~v20;
      }
    }
    else
    {
      v9 = v20;
    }
    v21 = ~*(_QWORD *)&v18[(_QWORD)v5] & v9;
    if ( (unsigned __int16)v15 >= **(_WORD **)KiSystemCpuPartition )
      v22 = 0LL;
    else
      v22 = *(_QWORD *)(*(_QWORD *)KiSystemCpuPartition + 8LL * (unsigned __int16)v15 + 8);
    v9 = v22 & v21;
    KiSystemAllowedCpuSets[v16 + v6] = v9;
    if ( (v19 & v9) != v19 )
      v12 = 1;
    v23 += 2;
    ++v15;
    v5 += 8;
    v16 += 2LL;
  }
  while ( v15 < 0x20 );
  if ( !(_DWORD)v6 )
    KiRestrictedSystemCpuSetsActive = v12;
  ++KiCpuSetSequence;
  KeCpuSetReportParkedProcessors(0LL);
  return 0LL;
}
