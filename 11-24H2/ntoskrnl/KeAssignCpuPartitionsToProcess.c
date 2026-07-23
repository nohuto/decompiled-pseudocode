/*
 * XREFs of KeAssignCpuPartitionsToProcess @ 0x1405BCA40
 * Callers:
 *     PspAssignCpuPartitionsToProcess @ 0x140776B84 (PspAssignCpuPartitionsToProcess.c)
 * Callees:
 *     KiAcquireCpuPartitionAssignmentLock @ 0x1402B9B18 (KiAcquireCpuPartitionAssignmentLock.c)
 *     KiReleaseCpuPartitionAssignmentLock @ 0x1402B9B64 (KiReleaseCpuPartitionAssignmentLock.c)
 *     KiRemoveCpuPartitionAssignmentProcess @ 0x1402B9BA0 (KiRemoveCpuPartitionAssignmentProcess.c)
 *     KiUpdateProcessAvailableCpuState @ 0x14032B848 (KiUpdateProcessAvailableCpuState.c)
 *     KiNotifyAvailableCpusChangeProcess @ 0x1404F8B20 (KiNotifyAvailableCpusChangeProcess.c)
 *     KiAdjustProcessCpuSetsAfterCpuPartitionChange @ 0x1405BD53C (KiAdjustProcessCpuSetsAfterCpuPartitionChange.c)
 *     PsDereferenceCpuPartition @ 0x14077688C (PsDereferenceCpuPartition.c)
 *     PsReferenceCpuPartition @ 0x1407768A4 (PsReferenceCpuPartition.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeAssignCpuPartitionsToProcess(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v4; // rsi
  unsigned int v6; // r15d
  __int64 v7; // rbx
  void *v8; // r13
  void *v9; // r12
  __int64 v10; // rax
  PVOID *v11; // rdi
  __int64 i; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r13
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 *v18; // rax
  __int64 v19; // r10
  __int64 *v20; // r8
  __int64 **v21; // r9
  __int64 *v22; // rax
  __int64 v23; // r8
  __int64 **v24; // r10
  _QWORD *v25; // rbx
  _QWORD *v26; // rax
  _QWORD *v27; // r14
  _QWORD *v28; // rdx
  _QWORD *v29; // r8
  unsigned int v30; // r14d
  PVOID *v31; // rbx
  unsigned __int16 v33; // [rsp+30h] [rbp-20h]
  __int64 Pool2; // [rsp+38h] [rbp-18h]
  _QWORD v35[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 v37; // [rsp+98h] [rbp+48h] BYREF
  char v38; // [rsp+A8h] [rbp+58h]

  v38 = a4;
  v4 = a2;
  v35[1] = v35;
  v37 = 0;
  v35[0] = v35;
  v6 = 0;
  v33 = KiActiveGroups;
  v7 = (unsigned __int16)KiActiveGroups;
  Pool2 = ExAllocatePool2(0x40uLL, 8LL * (unsigned __int16)KiActiveGroups, 0x7543694Bu);
  v8 = (void *)Pool2;
  v9 = (void *)ExAllocatePool2(0x40uLL, 16 * v7, 0x7543694Bu);
  v10 = ExAllocatePool2(0x40uLL, 8 * v4, 0x7543694Bu);
  v11 = (PVOID *)v10;
  if ( Pool2 && v9 && v10 )
  {
    for ( i = 0LL; (unsigned int)i < (unsigned int)v4; i = (unsigned int)(i + 1) )
    {
      v13 = ExAllocatePool2(0x40uLL, 0x50uLL, 0x7543694Bu);
      if ( !v13 )
        goto LABEL_20;
      v11[i] = (PVOID)v13;
    }
    if ( (_DWORD)v4 )
    {
      v14 = a1;
      v15 = v4;
      do
      {
        PsReferenceCpuPartition(*(_QWORD *)(*(_QWORD *)v14 + 32LL), 1967352139LL);
        v14 += 8LL;
        --v15;
      }
      while ( v15 );
      v8 = (void *)Pool2;
    }
    KiAcquireCpuPartitionAssignmentLock(&v37);
    if ( v38 )
      KiRemoveCpuPartitionAssignmentProcess(a3, (__int64)v35);
    v16 = 0LL;
    if ( (_DWORD)v4 )
    {
      v17 = a3 + 432;
      do
      {
        v18 = (__int64 *)v11[v16];
        v19 = *(_QWORD *)(a1 + 8 * v16);
        *v18 = a3;
        v20 = v18 + 4;
        v18[1] = v19;
        v21 = *(__int64 ***)(a3 + 440);
        if ( *v21 != (__int64 *)v17
          || (*v20 = v17,
              v22 = v18 + 2,
              v20[1] = (__int64)v21,
              *v21 = v20,
              *(_QWORD *)(a3 + 440) = v20,
              v23 = v19 + 16,
              v24 = *(__int64 ***)(v19 + 24),
              *v24 != (__int64 *)v23) )
        {
LABEL_37:
          __fastfail(3u);
        }
        *v22 = v23;
        v16 = (unsigned int)(v16 + 1);
        v22[1] = (__int64)v24;
        *v24 = v22;
        *(_QWORD *)(v23 + 8) = v22;
      }
      while ( (unsigned int)v16 < (unsigned int)v4 );
    }
    KiAdjustProcessCpuSetsAfterCpuPartitionChange(a3, v9, v8, v33, v35);
    KiUpdateProcessAvailableCpuState(a3, 1);
    KiNotifyAvailableCpusChangeProcess(a3);
    KiReleaseCpuPartitionAssignmentLock(v37);
    *v11 = 0LL;
  }
  else
  {
LABEL_20:
    v6 = -1073741670;
  }
  v25 = (_QWORD *)v35[0];
  while ( v25 != v35 )
  {
    v26 = (_QWORD *)*v25;
    v27 = v25 - 2;
    v28 = v25;
    v25 = v26;
    if ( (_QWORD *)v26[1] != v28 )
      goto LABEL_37;
    v29 = (_QWORD *)v28[1];
    if ( (_QWORD *)*v29 != v28 )
      goto LABEL_37;
    *v29 = v26;
    v26[1] = v29;
    PsDereferenceCpuPartition(*(_QWORD *)(v27[1] + 32LL), 1967352139LL);
    ExFreePoolWithTag(v27, 0);
  }
  if ( v11 )
  {
    v30 = 0;
    if ( (_DWORD)v4 )
    {
      v31 = v11;
      do
      {
        if ( !*v31 )
          break;
        ExFreePoolWithTag(*v31, 0);
        ++v30;
        ++v31;
      }
      while ( v30 < (unsigned int)v4 );
    }
    ExFreePoolWithTag(v11, 0);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v6;
}
