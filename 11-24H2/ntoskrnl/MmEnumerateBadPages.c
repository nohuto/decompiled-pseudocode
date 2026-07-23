/*
 * XREFs of MmEnumerateBadPages @ 0x1407ED768
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiIterateOverPartitions @ 0x140484754 (MiIterateOverPartitions.c)
 *     MiEnumerateQuarantinedBadHugeRangePages @ 0x140674B7C (MiEnumerateQuarantinedBadHugeRangePages.c)
 *     MiGetListOfPendingBadPages @ 0x140674CA0 (MiGetListOfPendingBadPages.c)
 *     MiSortPageFramesRemoveDuplicates @ 0x14067594C (MiSortPageFramesRemoveDuplicates.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmEnumerateBadPages(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v3; // rdi
  char *v4; // r14
  unsigned int v5; // esi
  char *v6; // r15
  bool v7; // zf
  __int64 Pool; // rax
  const void **v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  PVOID P[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+30h] [rbp-10h]
  size_t v15; // [rsp+38h] [rbp-8h]

  P[1] = P;
  *a1 = 0LL;
  P[0] = P;
  v14 = 0LL;
  v15 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  --CurrentThread->SpecialApcDisable;
  v6 = (char *)KeAbPreAcquire((__int64)&qword_140E30088, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E30088, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E30088, 0, v6, (__int64)&qword_140E30088);
  if ( v6 )
    v6[10] = 1;
  MiIterateOverPartitions((__int64)MiEnumeratePartitionBadPages, (__int64)P);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E30088, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140E30088);
  KeAbPostRelease((ULONG_PTR)&qword_140E30088);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  MiGetListOfPendingBadPages((__int64)P);
  MiEnumerateQuarantinedBadHugeRangePages((unsigned __int64)P);
  if ( (int)v14 >= 0 )
  {
    if ( v15 )
    {
      if ( v15 + 1 >= v15
        && v15 + 1 <= 0x1FFFFFFFFFFFFFFFLL
        && (Pool = MiAllocatePool(0x40uLL, 8 * v15 + 8, 1631743309), (v3 = (_QWORD *)Pool) != 0LL) )
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
    v5 = v14;
  }
  while ( 1 )
  {
    v9 = (const void **)P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v10 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v10 + 8) = P;
    if ( v4 )
    {
      memmove(v4, v9[3], 8LL * (_QWORD)v9[2]);
      v4 += 8 * (_QWORD)v9[2];
    }
    ExFreePoolWithTag(v9, 0);
  }
  if ( v3 )
  {
    v11 = MiSortPageFramesRemoveDuplicates(v3 + 1, v15);
    *v3 = v11 ^ (*v3 ^ v11) & 0xFFF0000000000000uLL;
  }
  *a1 = v3;
  return v5;
}
