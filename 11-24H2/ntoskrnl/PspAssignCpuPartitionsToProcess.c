/*
 * XREFs of PspAssignCpuPartitionsToProcess @ 0x140776B84
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405BCA40 (KeAssignCpuPartitionsToProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x1405BD2D8 (KeRecomputeCpuSetAffinityProcess.c)
 *     PspReferenceCpuPartitionByHandle @ 0x140777110 (PspReferenceCpuPartitionByHandle.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspAssignCpuPartitionsToProcess(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v6; // rdi
  PVOID *Pool2; // r15
  __int64 v9; // rax
  _QWORD *v10; // rsi
  int v11; // ebx
  PVOID *v12; // r14

  v6 = 0LL;
  if ( a4 - 1 > 0x7FF )
    return (unsigned int)-1073741811;
  Pool2 = (PVOID *)ExAllocatePool2(0x100uLL, 8LL * a4, 0x50707350u);
  v9 = ExAllocatePool2(0x40uLL, 8LL * a4, 0x50707350u);
  v10 = (_QWORD *)v9;
  if ( Pool2 && v9 )
  {
    while ( (unsigned int)v6 < a4 )
    {
      v11 = PspReferenceCpuPartitionByHandle(*(_QWORD *)(a3 + 8 * v6), (__int64)&Pool2[v6]);
      if ( v11 < 0 )
        goto LABEL_11;
      v10[v6] = *(_QWORD *)Pool2[v6];
      v6 = (unsigned int)(v6 + 1);
    }
    v11 = KeAssignCpuPartitionsToProcess((__int64)v10, a4, a1, a5);
    if ( v11 >= 0 && (*(_DWORD *)(a1 + 496) & 0x8000000) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 496), 0x8000000u);
      KeRecomputeCpuSetAffinityProcess(a1);
    }
    goto LABEL_11;
  }
  v11 = -1073741670;
  if ( Pool2 )
  {
LABEL_11:
    if ( (_DWORD)v6 )
    {
      v12 = Pool2;
      do
      {
        ObfDereferenceObjectWithTag(*v12++, 0x50707350u);
        --v6;
      }
      while ( v6 );
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v11;
}
