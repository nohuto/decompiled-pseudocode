/*
 * XREFs of MmEnumerateBadPages @ 0x1407ED198
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     MiIterateOverPartitions @ 0x140489A44 (MiIterateOverPartitions.c)
 *     MiEnumerateQuarantinedBadHugeRangePages @ 0x1406739AC (MiEnumerateQuarantinedBadHugeRangePages.c)
 *     MiGetListOfPendingBadPages @ 0x140673AD0 (MiGetListOfPendingBadPages.c)
 *     MiSortPageFramesRemoveDuplicates @ 0x14067477C (MiSortPageFramesRemoveDuplicates.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmEnumerateBadPages(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v3; // rdi
  char *v4; // r14
  unsigned int v5; // esi
  _QWORD *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // zf
  __int64 Pool; // rax
  const void **v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  PVOID P[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+30h] [rbp-10h]
  size_t v17; // [rsp+38h] [rbp-8h]

  P[1] = P;
  *a1 = 0LL;
  P[0] = P;
  v16 = 0LL;
  v17 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire((__int64)&qword_140E2FF48, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E2FF48, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E2FF48, 0, v6, (__int64)&qword_140E2FF48);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  MiIterateOverPartitions((__int64)MiEnumeratePartitionBadPages, (__int64)P);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E2FF48, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140E2FF48);
  KeAbPostRelease((ULONG_PTR)&qword_140E2FF48);
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v8, v7);
  MiGetListOfPendingBadPages((__int64)P);
  MiEnumerateQuarantinedBadHugeRangePages((unsigned __int64)P);
  if ( (int)v16 >= 0 )
  {
    if ( v17 )
    {
      if ( v17 + 1 >= v17
        && v17 + 1 <= 0x1FFFFFFFFFFFFFFFLL
        && (Pool = MiAllocatePool(0x40uLL, 8 * v17 + 8, 1631743309), (v3 = (_QWORD *)Pool) != 0LL) )
      {
        v4 = (char *)(Pool + 8);
      }
      else
      {
        v5 = -1073741670;
      }
    }
  }
  else
  {
    v5 = v16;
  }
  while ( 1 )
  {
    v11 = (const void **)P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v12 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v12 + 8) = P;
    if ( v4 )
    {
      memmove(v4, v11[3], 8LL * (_QWORD)v11[2]);
      v4 += 8 * (_QWORD)v11[2];
    }
    ExFreePoolWithTag(v11, 0);
  }
  if ( v3 )
  {
    v13 = MiSortPageFramesRemoveDuplicates(v3 + 1, v17);
    *v3 = v13 ^ (*v3 ^ v13) & 0xFFF0000000000000uLL;
  }
  *a1 = v3;
  return v5;
}
