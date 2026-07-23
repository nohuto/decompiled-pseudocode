/*
 * XREFs of MiBuildNewCloneDescriptor @ 0x140A4C34C
 * Callers:
 *     MiCloneVads @ 0x140268194 (MiCloneVads.c)
 *     MiCloneProcessAddressSpace @ 0x140AB879C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     PsChargeProcessNonPagedPoolQuota @ 0x1402676E0 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiGetVmPartition @ 0x140407A50 (MiGetVmPartition.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14040EEF0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiLockPagedRange @ 0x140A4C4C8 (MiLockPagedRange.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiBuildNewCloneDescriptor(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  unsigned __int64 v7; // rdi
  _QWORD *Pool; // rbx
  _OWORD *v9; // rax
  _OWORD *v10; // rsi
  _QWORD *v11; // r14
  void *v12; // rcx
  __int64 VmPartition; // rax

  v4 = 2 * a2;
  v7 = 32 * a2 + 32;
  if ( (int)PsChargeProcessNonPagedPoolQuota(BugCheckParameter1, v7) < 0 )
    return 0LL;
  Pool = (_QWORD *)MiAllocatePool(0x40uLL, 0x70uLL, 1682140493);
  if ( !Pool )
  {
    PsReturnProcessNonPagedPoolQuota(BugCheckParameter1, v7);
    return 0LL;
  }
  v9 = (_OWORD *)MiAllocatePool(0x112uLL, v7, 1816358221);
  v10 = v9;
  if ( !v9 )
  {
LABEL_6:
    PsReturnProcessNonPagedPoolQuota(BugCheckParameter1, v7);
    ExFreePoolWithTag(Pool, 0);
    return 0LL;
  }
  *v9 = 0LL;
  v9[1] = 0LL;
  v11 = (_QWORD *)MiAllocatePool(0x40uLL, 0x20uLL, 1749249357);
  v12 = v10;
  if ( !v11 )
  {
LABEL_5:
    ExFreePoolWithTag(v12, 0);
    goto LABEL_6;
  }
  if ( !(unsigned int)MiLockPagedRange(v10, v7) )
  {
    ExFreePoolWithTag(v11, 0);
    v12 = v10;
    goto LABEL_5;
  }
  VmPartition = MiGetVmPartition(BugCheckParameter1 + 1024);
  *v11 = a2;
  v11[2] = v10;
  v11[1] = 1LL;
  Pool[6] = 0LL;
  Pool[4] = &v10[v4 - 2];
  Pool[3] = v10;
  Pool[5] = a2;
  Pool[7] = v11;
  Pool[8] = v7;
  Pool[12] = a3;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(VmPartition + 1752)) <= 1 )
    __fastfail(0xEu);
  v11[3] = VmPartition;
  return Pool;
}
