/*
 * XREFs of KeReleaseMutantEx @ 0x1402DEAA0
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140231DD0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     LdrpGetFromMUIMemCache @ 0x1402DCFC0 (LdrpGetFromMUIMemCache.c)
 *     WmipFindRegEntryByProviderId @ 0x1402DDC64 (WmipFindRegEntryByProviderId.c)
 *     KeReleaseMutant @ 0x1402DEA20 (KeReleaseMutant.c)
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403B1560 (NtSignalAndWaitForSingleObject.c)
 *     WmipFindRegEntryByDevice @ 0x14045A0A4 (WmipFindRegEntryByDevice.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x140468FF4 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     WmipDeregisterRegEntry @ 0x14046A000 (WmipDeregisterRegEntry.c)
 *     WmipReceiveNotifications @ 0x140475EC4 (WmipReceiveNotifications.c)
 *     WmipBuildTraceDeviceList @ 0x14048564C (WmipBuildTraceDeviceList.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140489DDC (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14048C12C (LdrUnloadAlternateResourceModuleEx.c)
 *     WmiQueryTraceProviderCount @ 0x140492354 (WmiQueryTraceProviderCount.c)
 *     WmipAllocRegEntry @ 0x1404A6FCC (WmipAllocRegEntry.c)
 *     NtReleaseMutant @ 0x140987440 (NtReleaseMutant.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemovePrcbWaitEntry @ 0x1402C5A30 (KiRemovePrcbWaitEntry.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KiEnterDeferredReadyState @ 0x1402DFA30 (KiEnterDeferredReadyState.c)
 *     KeAbPreWakeupThread @ 0x1402DFF50 (KeAbPreWakeupThread.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     KiWaitSatisfyMutant @ 0x14032DC50 (KiWaitSatisfyMutant.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x14040F810 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall KeReleaseMutantEx(ULONG_PTR BugCheckParameter2, unsigned int a2, char a3, int *a4)
{
  int v4; // r12d
  __int64 v5; // r13
  bool v6; // si
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r8
  unsigned int v12; // edi
  int v13; // edi
  int v14; // ecx
  __int64 *v15; // r14
  unsigned int v16; // edi
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // r12
  _QWORD *v21; // rax
  _QWORD *v22; // rsi
  _QWORD *v23; // rcx
  bool v24; // zf
  char v25; // di
  __int64 result; // rax
  char v27; // al
  unsigned int v28; // r14d
  __int64 v29; // rdi
  char v30; // cl
  int v31; // eax
  __int64 v32; // rdx
  char v33; // r10
  _BYTE *v34; // rcx
  __int64 v35; // rax
  char v36; // di
  struct _SINGLE_LIST_ENTRY *Next; // rax
  unsigned int SessionId; // eax
  int v39; // [rsp+30h] [rbp-88h]
  int v40; // [rsp+34h] [rbp-84h]
  struct _KPRCB *v41; // [rsp+38h] [rbp-80h]
  struct _KTHREAD *BugCheckParameter1; // [rsp+40h] [rbp-78h]
  __int64 v43; // [rsp+48h] [rbp-70h]
  struct _SINGLE_LIST_ENTRY *v44; // [rsp+50h] [rbp-68h]
  unsigned __int8 v45; // [rsp+60h] [rbp-58h]
  volatile signed __int32 v46; // [rsp+68h] [rbp-50h]
  char v47; // [rsp+C0h] [rbp+8h]

  v4 = 0;
  v5 = 0LL;
  BugCheckParameter1 = KeGetCurrentThread();
  v6 = 0;
  v44 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v45 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v44 )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 0;
  v41 = CurrentPrcb;
  if ( _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) )
  {
    do
    {
      if ( (++v12 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v12);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( (*(_DWORD *)BugCheckParameter2 & 0x80u) != 0
         || _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 7u) );
    CurrentPrcb = v41;
  }
  v13 = *(_DWORD *)(BugCheckParameter2 + 4);
  v39 = v13;
  if ( (a3 & 1) != 0 )
  {
    *(_BYTE *)(BugCheckParameter2 + 48) |= 1u;
    v15 = (__int64 *)(BugCheckParameter2 + 40);
    v47 = 1;
    *(_DWORD *)(BugCheckParameter2 + 4) = 1;
  }
  else
  {
    if ( *(struct _KTHREAD **)(BugCheckParameter2 + 40) != BugCheckParameter1
      || *(_BYTE *)(BugCheckParameter2 + 2) != CurrentPrcb->DpcRoutineActive )
    {
      v36 = *(_BYTE *)(BugCheckParameter2 + 48) & 1;
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      result = 128LL;
      if ( !v36 )
        result = 3221225542LL;
      if ( (a3 & 4) != 0 )
        RtlRaiseStatus(result);
      return result;
    }
    v14 = *(_DWORD *)(BugCheckParameter2 + 4);
    v15 = (__int64 *)(BugCheckParameter2 + 40);
    v47 = 0;
    *(_DWORD *)(BugCheckParameter2 + 4) = v14 + 1;
    if ( v14 )
    {
LABEL_22:
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
      goto LABEL_28;
    }
  }
  if ( v13 > 0 )
    goto LABEL_22;
  v16 = 0;
  v46 = *(_DWORD *)BugCheckParameter2;
  BYTE2(v46) = 0;
  *(_DWORD *)BugCheckParameter2 = v46;
  v5 = *v15;
  v40 = *(unsigned __int8 *)(BugCheckParameter2 + 49);
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 64), 0LL) )
  {
    do
    {
      if ( (++v16 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v16);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v5 + 64) );
  }
  v17 = *(_QWORD *)(BugCheckParameter2 + 24);
  v18 = *(_QWORD **)(BugCheckParameter2 + 32);
  if ( *(_QWORD *)(v17 + 8) != BugCheckParameter2 + 24 || *v18 != BugCheckParameter2 + 24 )
LABEL_21:
    __fastfail(3u);
  *v18 = v17;
  v19 = (_QWORD *)(BugCheckParameter2 + 8);
  *(_QWORD *)(v17 + 8) = v18;
  *(_QWORD *)(v5 + 64) = 0LL;
  *v15 = 0LL;
  v20 = *(_QWORD **)(BugCheckParameter2 + 8);
  while ( v20 != v19 )
  {
    v21 = (_QWORD *)*v20;
    v22 = v20;
    v20 = v21;
    v23 = (_QWORD *)v22[1];
    if ( (_QWORD *)v21[1] != v22 || (_QWORD *)*v23 != v22 )
      goto LABEL_21;
    *v23 = v21;
    v21[1] = v23;
    v27 = *((_BYTE *)v22 + 16);
    if ( v27 == 1 )
    {
      v28 = 0;
      v29 = v22[3];
      v43 = *((unsigned __int16 *)v22 + 9);
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 64), 0LL) )
      {
        do
        {
          if ( (++v28 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v28);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v29 + 64) );
      }
      if ( *(_BYTE *)(v29 + 388) == 5 )
      {
        v30 = *(_BYTE *)(v29 + 112);
        v31 = v30 & 7;
        if ( v31 == 1 || v31 == 4 )
        {
          v32 = *(_QWORD *)(v29 + 232);
          if ( v32 )
          {
            if ( (*(_BYTE *)v32 & 0x7F) == 0x15 )
            {
              v35 = (unsigned __int8)*(_DWORD *)(v29 + 540);
              *(_DWORD *)(v29 + 540) = v35;
              _InterlockedIncrement((volatile signed __int32 *)(v32 + 4 * v35 + 536));
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v32 + 40));
            }
          }
          KiRemovePrcbWaitEntry((_QWORD *)v29);
          KiEnterDeferredReadyState(v29);
          v33 = 1;
          *(_QWORD *)(v29 + 216) = v41->DeferredReadyListHead.Next;
          v41->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v29 + 216);
          *(_QWORD *)(v29 + 200) = v43;
          *(_QWORD *)(v29 + 976) = 0LL;
        }
        else
        {
          if ( (*(_BYTE *)(v29 + 112) & 7) != 0 )
          {
            if ( v31 == 5 )
            {
              *(_BYTE *)(v29 + 112) = v30 & 0xF8 | 6;
              v33 = 0;
            }
            else
            {
              v33 = 0;
              if ( v31 == 3 )
                *((_BYTE *)v22 + 17) = 2;
            }
            goto LABEL_51;
          }
          *(_BYTE *)(v29 + 112) = v30 & 0xF8 | 2;
          v33 = 1;
          *(_QWORD *)(v29 + 200) = v43;
          *(_QWORD *)(v29 + 976) = 0LL;
          *((_BYTE *)v22 + 17) = 0;
        }
        v34 = (_BYTE *)v22[4];
        v44 = (struct _SINGLE_LIST_ENTRY *)v29;
        if ( (*v34 & 0x7F) == 2 )
          KiWaitSatisfyMutant(v34, v29);
      }
      else
      {
        v33 = 0;
      }
LABEL_51:
      *(_QWORD *)(v29 + 64) = 0LL;
      ++*((_BYTE *)v22 + 17);
      v19 = (_QWORD *)(BugCheckParameter2 + 8);
      if ( v33 )
      {
        v24 = (*(_DWORD *)(BugCheckParameter2 + 4))-- == 1;
        if ( v24 )
          break;
        v19 = (_QWORD *)(BugCheckParameter2 + 8);
      }
    }
    else if ( v27 == 2 )
    {
      *((_BYTE *)v22 + 17) = 5;
      KiInsertQueueInternal(v22[3], v22);
      v24 = (*(_DWORD *)(BugCheckParameter2 + 4))-- == 1;
      if ( v24 )
        break;
      v19 = (_QWORD *)(BugCheckParameter2 + 8);
    }
    else
    {
      if ( v27 == 4 )
      {
        *((_BYTE *)v22 + 17) = 5;
        *(_DWORD *)(BugCheckParameter2 + 4) = 0;
        KeInsertQueueDpc((PRKDPC)v22[3], (PVOID)BugCheckParameter2, v22);
      }
      else
      {
        KiTryUnwaitThread(v41, v22, 256LL, 0LL);
      }
      v19 = (_QWORD *)(BugCheckParameter2 + 8);
    }
  }
  v25 = *(_BYTE *)(BugCheckParameter2 + 48) & 2;
  _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
  if ( v47 )
    KiAcquireReleaseObjectRundownLockExclusive(BugCheckParameter2);
  v6 = v25 != 0;
  if ( v25 )
  {
    if ( v44 )
    {
      Next = v41->DeferredReadyListHead.Next;
      if ( Next )
      {
        if ( v44 == &Next[-27] )
          KeAbPreWakeupThread(v44, BugCheckParameter2);
      }
    }
  }
  v13 = v39;
  v4 = v40;
LABEL_28:
  KiExitDispatcher((unsigned __int64)v41, (a3 & 2) != 0 ? 3 : 0, 1u, a2, v45);
  if ( v6 )
  {
    if ( (struct _KTHREAD *)v5 != BugCheckParameter1 )
    {
      SessionId = PsGetSessionIdEx(BugCheckParameter1->ApcState.Process);
      KeBugCheckEx(0x162u, (ULONG_PTR)BugCheckParameter1, BugCheckParameter2, SessionId, 1uLL);
    }
    KeAbPostRelease(BugCheckParameter2);
  }
  if ( v4 )
    KiLeaveCriticalRegionUnsafe((__int64)BugCheckParameter1);
  if ( a4 )
    *a4 = v13;
  return 0LL;
}
