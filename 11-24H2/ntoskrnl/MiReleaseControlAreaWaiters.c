/*
 * XREFs of MiReleaseControlAreaWaiters @ 0x140338770
 * Callers:
 *     MiReservePageFileSpace @ 0x140202948 (MiReservePageFileSpace.c)
 *     MiDeleteCachedSubsection @ 0x140204084 (MiDeleteCachedSubsection.c)
 *     MiEntireSubsectionIsPurged @ 0x1402043F4 (MiEntireSubsectionIsPurged.c)
 *     MiUnlockFlushMdl @ 0x1402571C0 (MiUnlockFlushMdl.c)
 *     MiFlushComplete @ 0x140259230 (MiFlushComplete.c)
 *     MiTrimSharedPage @ 0x14025A33C (MiTrimSharedPage.c)
 *     MiReferenceControlArea @ 0x140271068 (MiReferenceControlArea.c)
 *     MiReferenceExistingControlArea @ 0x1402BE814 (MiReferenceExistingControlArea.c)
 *     MiBuildReservationCluster @ 0x1402EAD30 (MiBuildReservationCluster.c)
 *     MiWriteComplete @ 0x1402ED400 (MiWriteComplete.c)
 *     MiComputeDataFlushRange @ 0x140302C10 (MiComputeDataFlushRange.c)
 *     MiCheckControlArea @ 0x140338330 (MiCheckControlArea.c)
 *     MiPrepareToFlushSubsection @ 0x14043F1F4 (MiPrepareToFlushSubsection.c)
 *     MiReleasePageFileSectionInfo @ 0x14049A6D8 (MiReleasePageFileSectionInfo.c)
 *     MiDecrementLargeSubsections @ 0x1404C22C0 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1404C2B90 (MiIncrementLargeSubsections.c)
 *     MiLocateSharedPageViews @ 0x14067A2C0 (MiLocateSharedPageViews.c)
 *     MiPurgeBadFileOnlyPages @ 0x14067CB6C (MiPurgeBadFileOnlyPages.c)
 *     MiCreateImageOrDataSection @ 0x14098BD70 (MiCreateImageOrDataSection.c)
 *     MiCreateNewSection @ 0x14098D630 (MiCreateNewSection.c)
 *     MiSegmentDelete @ 0x140A0B944 (MiSegmentDelete.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall MiReleaseControlAreaWaiters(_QWORD *a1)
{
  _QWORD *v1; // rbp
  volatile signed __int32 *v2; // rbx
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  unsigned int v5; // edi
  volatile signed __int32 *v6; // rdi
  volatile signed __int32 *v7; // rdx
  __int64 v8; // rax
  volatile signed __int32 **v9; // rcx
  char v10; // cl

  if ( a1 )
  {
    while ( 1 )
    {
      v1 = (_QWORD *)*a1;
      v2 = (volatile signed __int32 *)(a1 + 2);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      CurrentPrcb = KeGetCurrentPrcb();
      v5 = 0;
      if ( _interlockedbittestandset(v2, 7u) )
      {
        do
        {
          if ( (++v5 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v5);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( (*v2 & 0x80u) != 0 || _interlockedbittestandset(v2, 7u) );
      }
      if ( !*((_DWORD *)v2 + 1) )
        break;
LABEL_14:
      _InterlockedAnd(v2, 0xFFFFFF7F);
      KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 1u, CurrentIrql);
      a1 = v1;
      if ( !v1 )
        return;
    }
    v6 = (volatile signed __int32 *)*((_QWORD *)v2 + 1);
    *((_DWORD *)v2 + 1) = 1;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v6 == v2 + 2 )
          goto LABEL_14;
        v7 = *(volatile signed __int32 **)v6;
        v8 = (__int64)v6;
        v6 = v7;
        v9 = *(volatile signed __int32 ***)(v8 + 8);
        if ( *((_QWORD *)v7 + 1) != v8 || *v9 != (volatile signed __int32 *)v8 )
          __fastfail(3u);
        *v9 = v7;
        *((_QWORD *)v7 + 1) = v9;
        v10 = *(_BYTE *)(v8 + 16);
        if ( v10 != 1 )
          break;
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v8, *(unsigned __int16 *)(v8 + 18), 0LL) )
        {
LABEL_13:
          if ( (*((_DWORD *)v2 + 1))-- == 1 )
            goto LABEL_14;
        }
      }
      if ( v10 == 2 )
      {
        *(_BYTE *)(v8 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v8 + 24), (__int64 *)v8);
        goto LABEL_13;
      }
      if ( v10 == 4 )
      {
        *(_BYTE *)(v8 + 17) = 5;
        *((_DWORD *)v2 + 1) = 0;
        KeInsertQueueDpc(*(PRKDPC *)(v8 + 24), (PVOID)v2, (PVOID)v8);
      }
      else
      {
        KiTryUnwaitThread((__int64)CurrentPrcb, v8, 256LL, 0LL);
      }
    }
  }
}
