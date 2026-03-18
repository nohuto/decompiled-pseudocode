/*
 * XREFs of MiIssuePageHeatList @ 0x14043F9FC
 * Callers:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MmCheckCachedPageStates @ 0x140280E90 (MmCheckCachedPageStates.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MmCopyToCachedPage @ 0x1402EDA94 (MmCopyToCachedPage.c)
 *     MiGetLargePagesForChain @ 0x1402F32E0 (MiGetLargePagesForChain.c)
 *     MiGetLargePage @ 0x1402F35A0 (MiGetLargePage.c)
 *     MiGetPerfectColorHeadPage @ 0x1402F59B0 (MiGetPerfectColorHeadPage.c)
 *     MiDemoteLocalLargePage @ 0x1402F6020 (MiDemoteLocalLargePage.c)
 *     MmSetPfnListInfo @ 0x140308064 (MmSetPfnListInfo.c)
 *     MiCoalesceFreeLargePages @ 0x140308844 (MiCoalesceFreeLargePages.c)
 *     MiAllocateLargeZeroPages @ 0x1403A7BB8 (MiAllocateLargeZeroPages.c)
 *     MiGetLargePageChain @ 0x1403D4E10 (MiGetLargePageChain.c)
 *     MiAddPageToHeatList @ 0x14043F8DC (MiAddPageToHeatList.c)
 *     MiFlushZeroPageHeatBatch @ 0x140469FF0 (MiFlushZeroPageHeatBatch.c)
 *     MiReplenishPageSlist @ 0x1404F40C0 (MiReplenishPageSlist.c)
 *     MiZeroPageMakeHot @ 0x1406903F8 (MiZeroPageMakeHot.c)
 *     MmPrefetchPagesEx @ 0x140955430 (MmPrefetchPagesEx.c)
 *     MiPfPrepareSequentialReadList @ 0x140956378 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockDynamicMemoryShared @ 0x1403D57CC (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x1403D5830 (MiLockDynamicMemoryShared.c)
 *     MiTryAcquirePushLockUnordered @ 0x1406755CC (MiTryAcquirePushLockUnordered.c)
 *     MiLogNotifyPageHeat @ 0x140685780 (MiLogNotifyPageHeat.c)
 *     HvlNotifyPageHeat @ 0x1406A10E8 (HvlNotifyPageHeat.c)
 */

__int64 __fastcall MiIssuePageHeatList(_DWORD *a1, unsigned __int64 a2)
{
  _DWORD *v2; // rbx
  int v3; // ebp
  struct _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax
  int v6; // esi
  __int64 v7; // r10
  unsigned __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r8
  unsigned __int64 v11; // r11
  _QWORD *v12; // r8
  __int64 v13; // rdx

  v2 = a1;
  v3 = 0;
  CurrentThread = 0LL;
  result = *a1 & 6;
  if ( !(_DWORD)result )
  {
    v6 = 0;
    goto LABEL_22;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (_DWORD)result == 4 )
  {
    if ( KeGetCurrentIrql() <= 1u )
    {
      --CurrentThread->SpecialApcDisable;
      v3 = 1;
    }
    result = MiTryAcquirePushLockUnordered((ULONG_PTR)&qword_140E38CC0);
    v6 = (unsigned __int8)result;
    if ( !(_BYTE)result )
    {
      v2[1] = 0;
      goto LABEL_22;
    }
  }
  else
  {
    v6 = 1;
    result = MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
  }
  v7 = qword_140E2EBF8;
  if ( qword_140E2EBF8 != *((_QWORD *)v2 + 1) )
  {
    result = (unsigned int)v2[1];
    a1 = v2 + 4;
    v8 = (unsigned __int64)&v2[2 * result + 4];
    while ( (unsigned __int64)a1 < v8 )
    {
      a2 = *(_QWORD *)a1 >> 12;
      v9 = (*(_QWORD *)a1 & 0x3FFLL) + 1;
      v10 = (*(_QWORD *)a1 >> 10) & 3LL;
      if ( ((*(_QWORD *)a1 >> 10) & 3) != 0 )
      {
        do
        {
          v9 <<= 9;
          LODWORD(v10) = v10 - 1;
        }
        while ( (_DWORD)v10 );
      }
      v11 = v9 + a2;
      result = 0xFFFFDE0000000028uLL;
      v12 = (_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL);
      while ( a2 < v11 )
      {
        if ( a2 > qword_140E2DBE0 || (result = *v12 >> 54, (*v12 & 0x40000000000000LL) == 0) )
        {
          v2[1] = 0;
          a1 = (_DWORD *)v8;
          break;
        }
        ++a2;
        v12 += 6;
      }
      a1 += 2;
    }
    *((_QWORD *)v2 + 1) = v7;
  }
LABEL_22:
  if ( v2[1] )
  {
    MiLogNotifyPageHeat(v2);
    LOBYTE(v13) = KeGetCurrentIrql() < 2u;
    result = HvlNotifyPageHeat(*v2 & 1, v13, (unsigned int)v2[1], v2 + 4);
    v2[1] = 0;
  }
  if ( v6 )
  {
    if ( (*v2 & 6) == 4 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E38CC0, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140E38CC0);
      result = KeAbPostRelease((ULONG_PTR)&qword_140E38CC0);
    }
    else
    {
      result = (__int64)MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
    }
  }
  if ( v3 )
  {
    if ( CurrentThread->SpecialApcDisable++ == -1 )
    {
      result = (__int64)&CurrentThread->152;
      if ( *(_QWORD *)result != result )
        return KiCheckForKernelApcDelivery((__int64)a1, a2);
    }
  }
  return result;
}
