/*
 * XREFs of MiIssuePageHeatList @ 0x14044059C
 * Callers:
 *     MmSetPfnListInfo @ 0x140221CC4 (MmSetPfnListInfo.c)
 *     MiGetLargePagesForChain @ 0x140222408 (MiGetLargePagesForChain.c)
 *     MiGetLargePage @ 0x140222688 (MiGetLargePage.c)
 *     MmCopyToCachedPage @ 0x140223414 (MmCopyToCachedPage.c)
 *     MiDemoteLocalLargePage @ 0x140229CD0 (MiDemoteLocalLargePage.c)
 *     MiGetPerfectColorHeadPage @ 0x14022C2A0 (MiGetPerfectColorHeadPage.c)
 *     MmCheckCachedPageStates @ 0x14025B020 (MmCheckCachedPageStates.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiCoalesceFreeLargePages @ 0x14034FBA4 (MiCoalesceFreeLargePages.c)
 *     MiGetLargePageChain @ 0x140378BB8 (MiGetLargePageChain.c)
 *     MiAllocateLargeZeroPages @ 0x140390BD8 (MiAllocateLargeZeroPages.c)
 *     MiAddPageToHeatList @ 0x14044047C (MiAddPageToHeatList.c)
 *     MiFlushZeroPageHeatBatch @ 0x14046B9E4 (MiFlushZeroPageHeatBatch.c)
 *     MiReplenishPageSlist @ 0x1404EF270 (MiReplenishPageSlist.c)
 *     MiZeroPageMakeHot @ 0x140684F98 (MiZeroPageMakeHot.c)
 *     MmPrefetchPagesEx @ 0x1409C8D00 (MmPrefetchPagesEx.c)
 *     MiPfPrepareSequentialReadList @ 0x1409C9C58 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockDynamicMemoryShared @ 0x140393038 (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x140393098 (MiLockDynamicMemoryShared.c)
 *     MiTryAcquirePushLockUnordered @ 0x140669B6C (MiTryAcquirePushLockUnordered.c)
 *     MiLogNotifyPageHeat @ 0x140679EF0 (MiLogNotifyPageHeat.c)
 *     HvlNotifyPageHeat @ 0x140695EB4 (HvlNotifyPageHeat.c)
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
    result = MiTryAcquirePushLockUnordered((ULONG_PTR)&qword_140E38A80);
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
  v6 = qword_140E2E9B8;
  if ( qword_140E2E9B8 != *(_QWORD *)(a1 + 8) )
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
        if ( v9 > qword_140E2D9A0 || (result = *v13 >> 54, (*v13 & 0x40000000000000LL) == 0) )
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
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E38A80, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140E38A80);
      result = KeAbPostRelease((ULONG_PTR)&qword_140E38A80);
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
