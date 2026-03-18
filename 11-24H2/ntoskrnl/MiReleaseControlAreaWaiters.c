/*
 * XREFs of MiReleaseControlAreaWaiters @ 0x14020F410
 * Callers:
 *     MiCheckControlArea @ 0x14020EFD0 (MiCheckControlArea.c)
 *     MiComputeDataFlushRange @ 0x14022F300 (MiComputeDataFlushRange.c)
 *     MiDeleteCachedSubsection @ 0x14023C35C (MiDeleteCachedSubsection.c)
 *     MiEntireSubsectionIsPurged @ 0x14023C6CC (MiEntireSubsectionIsPurged.c)
 *     MiUnlockFlushMdl @ 0x1402F1680 (MiUnlockFlushMdl.c)
 *     MiReferenceExistingControlArea @ 0x140315C60 (MiReferenceExistingControlArea.c)
 *     MiReservePageFileSpace @ 0x140368314 (MiReservePageFileSpace.c)
 *     MiBuildReservationCluster @ 0x140368F90 (MiBuildReservationCluster.c)
 *     MiWriteComplete @ 0x14036B660 (MiWriteComplete.c)
 *     MiPrepareToFlushSubsection @ 0x14036F8DC (MiPrepareToFlushSubsection.c)
 *     MiReleasePageFileSectionInfo @ 0x14037012C (MiReleasePageFileSectionInfo.c)
 *     MiTrimSharedPage @ 0x140370B4C (MiTrimSharedPage.c)
 *     MiFlushComplete @ 0x140370EF0 (MiFlushComplete.c)
 *     MiReferenceControlArea @ 0x140415208 (MiReferenceControlArea.c)
 *     MiDecrementLargeSubsections @ 0x1404C8E10 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1404C96E0 (MiIncrementLargeSubsections.c)
 *     MiLocateSharedPageViews @ 0x1406790E0 (MiLocateSharedPageViews.c)
 *     MiPurgeBadFileOnlyPages @ 0x14067B98C (MiPurgeBadFileOnlyPages.c)
 *     MiCreateImageOrDataSection @ 0x140941B00 (MiCreateImageOrDataSection.c)
 *     MiCreateNewSection @ 0x1409433C0 (MiCreateNewSection.c)
 *     MiSegmentDelete @ 0x140A131E4 (MiSegmentDelete.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x140323B94 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x1403D95F0 (KiTryUnwaitThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

_UNKNOWN **__fastcall MiReleaseControlAreaWaiters(_QWORD *a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  _QWORD *v4; // rbp
  volatile signed __int32 *v5; // rbx
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  unsigned int v8; // edi
  volatile signed __int32 *v9; // rdi
  volatile signed __int32 *v10; // rdx
  volatile signed __int32 *v11; // rax
  volatile signed __int32 **v12; // rcx
  char v13; // cl
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  if ( a1 )
  {
    while ( 1 )
    {
      v4 = (_QWORD *)*a1;
      v5 = (volatile signed __int32 *)(a1 + 2);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL, a3);
      CurrentPrcb = KeGetCurrentPrcb();
      v8 = 0;
      if ( _interlockedbittestandset(v5, 7u) )
      {
        do
        {
          if ( (++v8 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
          {
            HvlNotifyLongSpinWait(v8);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( (*v5 & 0x80u) != 0 || _interlockedbittestandset(v5, 7u) );
      }
      if ( !*((_DWORD *)v5 + 1) )
        break;
LABEL_14:
      _InterlockedAnd(v5, 0xFFFFFF7F);
      result = (_UNKNOWN **)KiExitDispatcher(CurrentPrcb, CurrentIrql);
      a1 = v4;
      if ( !v4 )
        return result;
    }
    v9 = (volatile signed __int32 *)*((_QWORD *)v5 + 1);
    *((_DWORD *)v5 + 1) = 1;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v9 == v5 + 2 )
          goto LABEL_14;
        v10 = *(volatile signed __int32 **)v9;
        v11 = v9;
        v9 = v10;
        v12 = (volatile signed __int32 **)*((_QWORD *)v11 + 1);
        if ( *((volatile signed __int32 **)v10 + 1) != v11 || *v12 != v11 )
          __fastfail(3u);
        *v12 = v10;
        *((_QWORD *)v10 + 1) = v12;
        v13 = *((_BYTE *)v11 + 16);
        if ( v13 != 1 )
          break;
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v11, *((unsigned __int16 *)v11 + 9), 0LL) )
        {
LABEL_13:
          if ( (*((_DWORD *)v5 + 1))-- == 1 )
            goto LABEL_14;
        }
      }
      if ( v13 == 2 )
      {
        *((_BYTE *)v11 + 17) = 5;
        KiInsertQueueInternal(*((_QWORD *)v11 + 3), v11);
        goto LABEL_13;
      }
      if ( v13 == 4 )
      {
        *((_BYTE *)v11 + 17) = 5;
        *((_DWORD *)v5 + 1) = 0;
        KeInsertQueueDpc(*((PRKDPC *)v11 + 3), (PVOID)v5, (PVOID)v11);
      }
      else
      {
        KiTryUnwaitThread(CurrentPrcb, v11, 256LL, 0LL);
      }
    }
  }
  return result;
}
