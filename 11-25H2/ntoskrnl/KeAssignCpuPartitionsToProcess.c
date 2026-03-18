/*
 * XREFs of KeAssignCpuPartitionsToProcess @ 0x1405BB5D0
 * Callers:
 *     PspAssignCpuPartitionsToProcess @ 0x140766F94 (PspAssignCpuPartitionsToProcess.c)
 * Callees:
 *     KiUpdateProcessAvailableCpuState @ 0x140267998 (KiUpdateProcessAvailableCpuState.c)
 *     KiAcquireCpuPartitionAssignmentLock @ 0x14036D244 (KiAcquireCpuPartitionAssignmentLock.c)
 *     KiReleaseCpuPartitionAssignmentLock @ 0x14036D290 (KiReleaseCpuPartitionAssignmentLock.c)
 *     KiRemoveCpuPartitionAssignmentProcess @ 0x14036D2CC (KiRemoveCpuPartitionAssignmentProcess.c)
 *     KiNotifyAvailableCpusChangeProcess @ 0x1404F8BC0 (KiNotifyAvailableCpusChangeProcess.c)
 *     KiAdjustProcessCpuSetsAfterCpuPartitionChange @ 0x1405BBFDC (KiAdjustProcessCpuSetsAfterCpuPartitionChange.c)
 *     PsDereferenceCpuPartition @ 0x140766C9C (PsDereferenceCpuPartition.c)
 *     PsReferenceCpuPartition @ 0x140766CB4 (PsReferenceCpuPartition.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeAssignCpuPartitionsToProcess(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v4; // rsi
  unsigned int v6; // r15d
  void *v7; // r13
  void *v8; // r12
  __int64 v9; // rax
  PVOID *v10; // rdi
  __int64 i; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // r10
  __int64 *v19; // r8
  __int64 **v20; // r9
  __int64 *v21; // rax
  __int64 v22; // r8
  __int64 **v23; // r10
  _QWORD *v24; // rbx
  _QWORD *v25; // rax
  _QWORD *v26; // r14
  _QWORD *v27; // rdx
  _QWORD *v28; // r8
  unsigned int v29; // r14d
  PVOID *v30; // rbx
  unsigned __int16 v32; // [rsp+30h] [rbp-20h]
  __int64 Pool2; // [rsp+38h] [rbp-18h]
  _QWORD v34[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 v36; // [rsp+98h] [rbp+48h] BYREF
  char v37; // [rsp+A8h] [rbp+58h]

  v37 = a4;
  v4 = a2;
  v34[1] = v34;
  v36 = 0;
  v34[0] = v34;
  v6 = 0;
  v32 = KiActiveGroups;
  Pool2 = ExAllocatePool2(0x40uLL);
  v7 = (void *)Pool2;
  v8 = (void *)ExAllocatePool2(0x40uLL);
  v9 = ExAllocatePool2(0x40uLL);
  v10 = (PVOID *)v9;
  if ( Pool2 && v8 && v9 )
  {
    for ( i = 0LL; (unsigned int)i < (unsigned int)v4; i = (unsigned int)(i + 1) )
    {
      v12 = ExAllocatePool2(0x40uLL);
      if ( !v12 )
        goto LABEL_20;
      v10[i] = (PVOID)v12;
    }
    if ( (_DWORD)v4 )
    {
      v13 = a1;
      v14 = v4;
      do
      {
        PsReferenceCpuPartition(*(_QWORD *)(*(_QWORD *)v13 + 32LL), 1967352139LL);
        v13 += 8LL;
        --v14;
      }
      while ( v14 );
      v7 = (void *)Pool2;
    }
    KiAcquireCpuPartitionAssignmentLock(&v36);
    if ( v37 )
      KiRemoveCpuPartitionAssignmentProcess(a3, (__int64)v34);
    v15 = 0LL;
    if ( (_DWORD)v4 )
    {
      v16 = a3 + 432;
      do
      {
        v17 = (__int64 *)v10[v15];
        v18 = *(_QWORD *)(a1 + 8 * v15);
        *v17 = a3;
        v19 = v17 + 4;
        v17[1] = v18;
        v20 = *(__int64 ***)(a3 + 440);
        if ( *v20 != (__int64 *)v16
          || (*v19 = v16,
              v21 = v17 + 2,
              v19[1] = (__int64)v20,
              *v20 = v19,
              *(_QWORD *)(a3 + 440) = v19,
              v22 = v18 + 16,
              v23 = *(__int64 ***)(v18 + 24),
              *v23 != (__int64 *)v22) )
        {
LABEL_37:
          __fastfail(3u);
        }
        *v21 = v22;
        v15 = (unsigned int)(v15 + 1);
        v21[1] = (__int64)v23;
        *v23 = v21;
        *(_QWORD *)(v22 + 8) = v21;
      }
      while ( (unsigned int)v15 < (unsigned int)v4 );
    }
    KiAdjustProcessCpuSetsAfterCpuPartitionChange(a3, v8, v7, v32, v34);
    KiUpdateProcessAvailableCpuState(a3, 1);
    KiNotifyAvailableCpusChangeProcess(a3);
    KiReleaseCpuPartitionAssignmentLock(v36);
    *v10 = 0LL;
  }
  else
  {
LABEL_20:
    v6 = -1073741670;
  }
  v24 = (_QWORD *)v34[0];
  while ( v24 != v34 )
  {
    v25 = (_QWORD *)*v24;
    v26 = v24 - 2;
    v27 = v24;
    v24 = v25;
    if ( (_QWORD *)v25[1] != v27 )
      goto LABEL_37;
    v28 = (_QWORD *)v27[1];
    if ( (_QWORD *)*v28 != v27 )
      goto LABEL_37;
    *v28 = v25;
    v25[1] = v28;
    PsDereferenceCpuPartition(*(_QWORD *)(v26[1] + 32LL), 1967352139LL);
    ExFreePoolWithTag(v26, 0);
  }
  if ( v10 )
  {
    v29 = 0;
    if ( (_DWORD)v4 )
    {
      v30 = v10;
      do
      {
        if ( !*v30 )
          break;
        ExFreePoolWithTag(*v30, 0);
        ++v29;
        ++v30;
      }
      while ( v29 < (unsigned int)v4 );
    }
    ExFreePoolWithTag(v10, 0);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return v6;
}
