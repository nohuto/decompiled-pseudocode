/*
 * XREFs of MiReleaseControlAreaWaiters @ 0x14022F630
 * Callers:
 *     MiComputeDataFlushRange @ 0x140218970 (MiComputeDataFlushRange.c)
 *     MiReferenceControlArea @ 0x140219CEC (MiReferenceControlArea.c)
 *     MiCheckControlArea @ 0x14022F1E0 (MiCheckControlArea.c)
 *     MiUnlockFlushMdl @ 0x14023D228 (MiUnlockFlushMdl.c)
 *     MiReservePageFileSpace @ 0x1402471FC (MiReservePageFileSpace.c)
 *     MiDeleteCachedSubsection @ 0x14033F8B4 (MiDeleteCachedSubsection.c)
 *     MiEntireSubsectionIsPurged @ 0x14033FC28 (MiEntireSubsectionIsPurged.c)
 *     MiReferenceExistingControlArea @ 0x14034DAEC (MiReferenceExistingControlArea.c)
 *     MiTrimSharedPage @ 0x14035A2DC (MiTrimSharedPage.c)
 *     MiFlushComplete @ 0x14035A670 (MiFlushComplete.c)
 *     MiBuildReservationCluster @ 0x14040BF84 (MiBuildReservationCluster.c)
 *     MiWriteComplete @ 0x14040E620 (MiWriteComplete.c)
 *     MiPrepareToFlushSubsection @ 0x140439A60 (MiPrepareToFlushSubsection.c)
 *     MiReleasePageFileSectionInfo @ 0x1404A0974 (MiReleasePageFileSectionInfo.c)
 *     MiDecrementLargeSubsections @ 0x1404C8190 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1404C92E4 (MiIncrementLargeSubsections.c)
 *     MiLocateSharedPageViews @ 0x14066D834 (MiLocateSharedPageViews.c)
 *     MiPurgeBadFileOnlyPages @ 0x1406701CC (MiPurgeBadFileOnlyPages.c)
 *     MiCreateImageOrDataSection @ 0x14093D200 (MiCreateImageOrDataSection.c)
 *     MiCreateNewSection @ 0x14093EAC0 (MiCreateNewSection.c)
 *     MiSegmentDelete @ 0x140A095FC (MiSegmentDelete.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

_UNKNOWN **__fastcall MiReleaseControlAreaWaiters(_QWORD *a1)
{
  _UNKNOWN **result; // rax
  _QWORD *v2; // rbp
  volatile signed __int32 *v3; // rbx
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  unsigned int v6; // edi
  volatile signed __int32 *v7; // rdi
  volatile signed __int32 *v8; // rdx
  volatile signed __int32 *v9; // rax
  volatile signed __int32 **v10; // rcx
  char v11; // cl
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  if ( a1 )
  {
    while ( 1 )
    {
      v2 = (_QWORD *)*a1;
      v3 = (volatile signed __int32 *)(a1 + 2);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
      CurrentPrcb = KeGetCurrentPrcb();
      v6 = 0;
      if ( _interlockedbittestandset(v3, 7u) )
      {
        do
        {
          if ( (++v6 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
          {
            HvlNotifyLongSpinWait(v6);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( (*v3 & 0x80u) != 0 || _interlockedbittestandset(v3, 7u) );
      }
      if ( !*((_DWORD *)v3 + 1) )
        break;
LABEL_14:
      _InterlockedAnd(v3, 0xFFFFFF7F);
      result = (_UNKNOWN **)KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 1, CurrentIrql);
      a1 = v2;
      if ( !v2 )
        return result;
    }
    v7 = (volatile signed __int32 *)*((_QWORD *)v3 + 1);
    *((_DWORD *)v3 + 1) = 1;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v7 == v3 + 2 )
          goto LABEL_14;
        v8 = *(volatile signed __int32 **)v7;
        v9 = v7;
        v7 = v8;
        v10 = (volatile signed __int32 **)*((_QWORD *)v9 + 1);
        if ( *((volatile signed __int32 **)v8 + 1) != v9 || *v10 != v9 )
          __fastfail(3u);
        *v10 = v8;
        *((_QWORD *)v8 + 1) = v10;
        v11 = *((_BYTE *)v9 + 16);
        if ( v11 != 1 )
          break;
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v9, *((unsigned __int16 *)v9 + 9), 0LL) )
        {
LABEL_13:
          if ( (*((_DWORD *)v3 + 1))-- == 1 )
            goto LABEL_14;
        }
      }
      if ( v11 == 2 )
      {
        *((_BYTE *)v9 + 17) = 5;
        KiInsertQueueInternal(*((_QWORD *)v9 + 3), v9);
        goto LABEL_13;
      }
      if ( v11 == 4 )
      {
        *((_BYTE *)v9 + 17) = 5;
        *((_DWORD *)v3 + 1) = 0;
        KeInsertQueueDpc(*((PRKDPC *)v9 + 3), (PVOID)v3, (PVOID)v9);
      }
      else
      {
        KiTryUnwaitThread(CurrentPrcb, v9, 256LL, 0LL);
      }
    }
  }
  return result;
}
