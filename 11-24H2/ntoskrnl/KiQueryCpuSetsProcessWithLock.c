/*
 * XREFs of KiQueryCpuSetsProcessWithLock @ 0x1404F2B60
 * Callers:
 *     KeQueryCpuSetsProcess @ 0x1404CD5EC (KeQueryCpuSetsProcess.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405BD680 (KiCpuPartitionCheckAffinitization.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiQueryCpuSetsProcessWithLock(__int64 a1, _QWORD *a2, unsigned int a3, int a4)
{
  unsigned int v4; // r10d
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r9

  if ( (*(_DWORD *)(a1 + 1532) & 0x80u) != 0 )
  {
    v4 = (unsigned __int16)KiMaximumGroups;
    if ( a4 )
      v5 = *(_QWORD *)(a1 + 1736);
    else
      v5 = *(_QWORD *)(a1 + 1744);
  }
  else
  {
    v4 = 1;
    v5 = a1 + (-(__int64)(a4 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 1744;
  }
  if ( a3 >= v4 )
    a3 = v4;
  if ( a3 )
  {
    v6 = v5 - (_QWORD)a2;
    v7 = a3;
    do
    {
      *a2 = *(_QWORD *)((char *)a2 + v6);
      ++a2;
      --v7;
    }
    while ( v7 );
  }
  return v4;
}
