/*
 * XREFs of KiRemoveAndFreeCpuPartitionAssignmentProcess @ 0x1402B9A64
 * Callers:
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 * Callees:
 *     KiAcquireCpuPartitionAssignmentLock @ 0x1402B9B18 (KiAcquireCpuPartitionAssignmentLock.c)
 *     KiReleaseCpuPartitionAssignmentLock @ 0x1402B9B64 (KiReleaseCpuPartitionAssignmentLock.c)
 *     KiRemoveCpuPartitionAssignmentProcess @ 0x1402B9BA0 (KiRemoveCpuPartitionAssignmentProcess.c)
 *     PsDereferenceCpuPartition @ 0x14077688C (PsDereferenceCpuPartition.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall KiRemoveAndFreeCpuPartitionAssignmentProcess(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // r8
  _QWORD *v6; // rdi
  _QWORD *v7; // rdx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0;
  v8[1] = v8;
  v8[0] = v8;
  KiAcquireCpuPartitionAssignmentLock(&v9);
  KiRemoveCpuPartitionAssignmentProcess(a1, v8);
  LOBYTE(v2) = v9;
  KiReleaseCpuPartitionAssignmentLock(v2);
  v3 = (_QWORD *)v8[0];
  while ( v3 )
  {
    v4 = v3;
    if ( v3 == v8 )
      break;
    v5 = (_QWORD *)*v3;
    v6 = v3 - 2;
    v3 = v5;
    if ( (_QWORD *)v5[1] != v4 || (v7 = (_QWORD *)v4[1], (_QWORD *)*v7 != v4) )
      __fastfail(3u);
    *v7 = v5;
    v5[1] = v7;
    PsDereferenceCpuPartition(*(_QWORD *)(v6[1] + 32LL), 1967352139LL);
    ExFreePoolWithTag(v6, 0);
  }
}
