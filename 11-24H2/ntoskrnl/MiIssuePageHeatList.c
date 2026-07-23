/*
 * XREFs of MiIssuePageHeatList @ 0x140435CBC
 * Callers:
 *     MmCheckCachedPageStates @ 0x140236420 (MmCheckCachedPageStates.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiGetLargePagesForChain @ 0x140251524 (MiGetLargePagesForChain.c)
 *     MiGetLargePage @ 0x1402517B0 (MiGetLargePage.c)
 *     MiGetLargePageChain @ 0x140263C74 (MiGetLargePageChain.c)
 *     MiAllocateLargeZeroPages @ 0x14026F2E8 (MiAllocateLargeZeroPages.c)
 *     MmSetPfnListInfo @ 0x140311F44 (MmSetPfnListInfo.c)
 *     MiCoalesceFreeLargePages @ 0x140312724 (MiCoalesceFreeLargePages.c)
 *     MiGetPerfectColorHeadPage @ 0x14033D740 (MiGetPerfectColorHeadPage.c)
 *     MiDemoteLocalLargePage @ 0x14033E130 (MiDemoteLocalLargePage.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MmCopyToCachedPage @ 0x14034F0D4 (MmCopyToCachedPage.c)
 *     MiAddPageToHeatList @ 0x140435B9C (MiAddPageToHeatList.c)
 *     MiFlushZeroPageHeatBatch @ 0x140462F20 (MiFlushZeroPageHeatBatch.c)
 *     MiReplenishPageSlist @ 0x1404F1A70 (MiReplenishPageSlist.c)
 *     MiZeroPageMakeHot @ 0x1406914C8 (MiZeroPageMakeHot.c)
 *     MmPrefetchPagesEx @ 0x140938DE0 (MmPrefetchPagesEx.c)
 *     MiPfPrepareSequentialReadList @ 0x140939D28 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiUnlockDynamicMemoryShared @ 0x140264630 (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x140264694 (MiLockDynamicMemoryShared.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiTryAcquirePushLockUnordered @ 0x14067679C (MiTryAcquirePushLockUnordered.c)
 *     MiLogNotifyPageHeat @ 0x1406868B0 (MiLogNotifyPageHeat.c)
 *     HvlNotifyPageHeat @ 0x1406A2140 (HvlNotifyPageHeat.c)
 */

__int64 __fastcall MiIssuePageHeatList(__int64 a1)
{
  int v2; // ebp
  struct _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax
  int v5; // esi
  __int64 v6; // r10
  _QWORD *v7; // rcx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // r11
  _QWORD *v13; // r8
  __int64 v14; // rdx

  v2 = 0;
  CurrentThread = 0LL;
  result = *(_DWORD *)a1 & 6;
  if ( !(_DWORD)result )
  {
    v5 = 0;
    goto LABEL_22;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (_DWORD)result == 4 )
  {
    if ( KeGetCurrentIrql() <= 1u )
    {
      --CurrentThread->SpecialApcDisable;
      v2 = 1;
    }
    result = MiTryAcquirePushLockUnordered((ULONG_PTR)&qword_140E38E00);
    v5 = (unsigned __int8)result;
    if ( !(_BYTE)result )
    {
      *(_DWORD *)(a1 + 4) = 0;
      goto LABEL_22;
    }
  }
  else
  {
    v5 = 1;
    result = MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
  }
  v6 = qword_140E2ED38;
  if ( qword_140E2ED38 != *(_QWORD *)(a1 + 8) )
  {
    result = *(unsigned int *)(a1 + 4);
    v7 = (_QWORD *)(a1 + 16);
    v8 = a1 + 16 + 8 * result;
    while ( (unsigned __int64)v7 < v8 )
    {
      v9 = *v7 >> 12;
      v10 = (*v7 & 0x3FFLL) + 1;
      v11 = (*v7 >> 10) & 3LL;
      if ( ((*v7 >> 10) & 3) != 0 )
      {
        do
        {
          v10 <<= 9;
          LODWORD(v11) = v11 - 1;
        }
        while ( (_DWORD)v11 );
      }
      v12 = v10 + v9;
      result = 0xFFFFDE0000000028uLL;
      v13 = (_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL);
      while ( v9 < v12 )
      {
        if ( v9 > qword_140E2DD20 || (result = *v13 >> 54, (*v13 & 0x40000000000000LL) == 0) )
        {
          *(_DWORD *)(a1 + 4) = 0;
          v7 = (_QWORD *)v8;
          break;
        }
        ++v9;
        v13 += 6;
      }
      ++v7;
    }
    *(_QWORD *)(a1 + 8) = v6;
  }
LABEL_22:
  if ( *(_DWORD *)(a1 + 4) )
  {
    MiLogNotifyPageHeat(a1);
    LOBYTE(v14) = KeGetCurrentIrql() < 2u;
    result = HvlNotifyPageHeat(*(_DWORD *)a1 & 1, v14, *(unsigned int *)(a1 + 4), a1 + 16);
    *(_DWORD *)(a1 + 4) = 0;
  }
  if ( v5 )
  {
    if ( (*(_DWORD *)a1 & 6) == 4 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E38E00, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140E38E00);
      result = KeAbPostRelease((ULONG_PTR)&qword_140E38E00);
    }
    else
    {
      result = (__int64)MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
    }
  }
  if ( v2 )
  {
    if ( CurrentThread->SpecialApcDisable++ == -1 )
    {
      result = (__int64)&CurrentThread->152;
      if ( *(_QWORD *)result != result )
        return KiCheckForKernelApcDelivery();
    }
  }
  return result;
}
