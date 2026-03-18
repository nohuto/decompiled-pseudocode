/*
 * XREFs of KeReleaseMutantEx @ 0x1403379F0
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14027C840 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KeReleaseMutant @ 0x140337970 (KeReleaseMutant.c)
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 *     WmipFindRegEntryByProviderId @ 0x140338ED0 (WmipFindRegEntryByProviderId.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403C29A0 (NtSignalAndWaitForSingleObject.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14044E0DC (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x14044E92C (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x14044EF40 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14044F4B4 (LdrpSetAlternateResourceModuleHandle.c)
 *     WmipFindRegEntryByDevice @ 0x140463970 (WmipFindRegEntryByDevice.c)
 *     WmipDeregisterRegEntry @ 0x14046FAA4 (WmipDeregisterRegEntry.c)
 *     WmipReceiveNotifications @ 0x14047A844 (WmipReceiveNotifications.c)
 *     WmipBuildTraceDeviceList @ 0x14048A824 (WmipBuildTraceDeviceList.c)
 *     WmiQueryTraceProviderCount @ 0x140497844 (WmiQueryTraceProviderCount.c)
 *     WmipAllocRegEntry @ 0x1404AC7D8 (WmipAllocRegEntry.c)
 *     NtReleaseMutant @ 0x14099E790 (NtReleaseMutant.c)
 * Callees:
 *     KiWaitSatisfyMutant @ 0x140206670 (KiWaitSatisfyMutant.c)
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     PsGetSessionIdEx @ 0x1403025D0 (PsGetSessionIdEx.c)
 *     KiRemovePrcbWaitEntry @ 0x14031CEA0 (KiRemovePrcbWaitEntry.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x140323B94 (KiInsertQueueInternal.c)
 *     KiEnterDeferredReadyState @ 0x140337910 (KiEnterDeferredReadyState.c)
 *     KeAbPreWakeupThread @ 0x1403D8DF0 (KeAbPreWakeupThread.c)
 *     KiTryUnwaitThread @ 0x1403D95F0 (KiTryUnwaitThread.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x14041BCD0 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 result; // rax
  char v30; // al
  unsigned int v31; // r14d
  __int64 v32; // rdi
  char v33; // cl
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // r8
  char v37; // r10
  int *v38; // rcx
  __int64 v39; // rax
  char v40; // di
  struct _SINGLE_LIST_ENTRY *Next; // rax
  unsigned int SessionId; // eax
  int v43; // [rsp+30h] [rbp-88h]
  int v44; // [rsp+34h] [rbp-84h]
  struct _KPRCB *v45; // [rsp+38h] [rbp-80h]
  struct _KTHREAD *BugCheckParameter1; // [rsp+40h] [rbp-78h]
  __int64 v47; // [rsp+48h] [rbp-70h]
  __int64 v48; // [rsp+50h] [rbp-68h]
  unsigned __int8 v49; // [rsp+60h] [rbp-58h]
  volatile signed __int32 v50; // [rsp+68h] [rbp-50h]
  char v51; // [rsp+C0h] [rbp+8h]

  v4 = 0;
  v5 = 0LL;
  BugCheckParameter1 = KeGetCurrentThread();
  v6 = 0;
  v48 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v49 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v48 )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 0;
  v45 = CurrentPrcb;
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
    CurrentPrcb = v45;
  }
  v13 = *(_DWORD *)(BugCheckParameter2 + 4);
  v43 = v13;
  if ( (a3 & 1) != 0 )
  {
    *(_BYTE *)(BugCheckParameter2 + 48) |= 1u;
    v15 = (__int64 *)(BugCheckParameter2 + 40);
    v51 = 1;
    *(_DWORD *)(BugCheckParameter2 + 4) = 1;
  }
  else
  {
    if ( *(struct _KTHREAD **)(BugCheckParameter2 + 40) != BugCheckParameter1
      || *(_BYTE *)(BugCheckParameter2 + 2) != CurrentPrcb->DpcRoutineActive )
    {
      v40 = *(_BYTE *)(BugCheckParameter2 + 48) & 1;
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      result = 128LL;
      if ( !v40 )
        result = 3221225542LL;
      if ( (a3 & 4) != 0 )
        RtlRaiseStatus(result);
      return result;
    }
    v14 = *(_DWORD *)(BugCheckParameter2 + 4);
    v15 = (__int64 *)(BugCheckParameter2 + 40);
    v51 = 0;
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
  v50 = *(_DWORD *)BugCheckParameter2;
  BYTE2(v50) = 0;
  *(_DWORD *)BugCheckParameter2 = v50;
  v5 = *v15;
  v44 = *(unsigned __int8 *)(BugCheckParameter2 + 49);
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
    v30 = *((_BYTE *)v22 + 16);
    if ( v30 == 1 )
    {
      v31 = 0;
      v32 = v22[3];
      v47 = *((unsigned __int16 *)v22 + 9);
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 64), 0LL) )
      {
        do
        {
          if ( (++v31 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v31);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v32 + 64) );
      }
      if ( *(_BYTE *)(v32 + 388) == 5 )
      {
        v33 = *(_BYTE *)(v32 + 112);
        v34 = v33 & 7;
        if ( v34 == 1 || v34 == 4 )
        {
          v35 = *(_QWORD *)(v32 + 232);
          if ( v35 )
          {
            if ( (*(_BYTE *)v35 & 0x7F) == 0x15 )
            {
              v39 = (unsigned __int8)*(_DWORD *)(v32 + 540);
              *(_DWORD *)(v32 + 540) = v39;
              _InterlockedIncrement((volatile signed __int32 *)(v35 + 4 * v39 + 536));
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v35 + 40));
            }
          }
          KiRemovePrcbWaitEntry((_QWORD *)v32);
          KiEnterDeferredReadyState(v32);
          v36 = (__int64)v45;
          v37 = 1;
          *(_QWORD *)(v32 + 216) = v45->DeferredReadyListHead.Next;
          v45->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v32 + 216);
          *(_QWORD *)(v32 + 200) = v47;
          *(_QWORD *)(v32 + 976) = 0LL;
        }
        else
        {
          if ( (*(_BYTE *)(v32 + 112) & 7) != 0 )
          {
            if ( v34 == 5 )
            {
              *(_BYTE *)(v32 + 112) = v33 & 0xF8 | 6;
              v37 = 0;
            }
            else
            {
              v37 = 0;
              if ( v34 == 3 )
                *((_BYTE *)v22 + 17) = 2;
            }
            goto LABEL_51;
          }
          v36 = (__int64)v45;
          *(_BYTE *)(v32 + 112) = v33 & 0xF8 | 2;
          v37 = 1;
          *(_QWORD *)(v32 + 200) = v47;
          *(_QWORD *)(v32 + 976) = 0LL;
          *((_BYTE *)v22 + 17) = 0;
        }
        v38 = (int *)v22[4];
        v48 = v32;
        if ( (*(_BYTE *)v38 & 0x7F) == 2 )
          KiWaitSatisfyMutant(v38, v32, v36);
      }
      else
      {
        v37 = 0;
      }
LABEL_51:
      *(_QWORD *)(v32 + 64) = 0LL;
      ++*((_BYTE *)v22 + 17);
      v19 = (_QWORD *)(BugCheckParameter2 + 8);
      if ( v37 )
      {
        v24 = (*(_DWORD *)(BugCheckParameter2 + 4))-- == 1;
        if ( v24 )
          break;
        v19 = (_QWORD *)(BugCheckParameter2 + 8);
      }
    }
    else if ( v30 == 2 )
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
      if ( v30 == 4 )
      {
        *((_BYTE *)v22 + 17) = 5;
        *(_DWORD *)(BugCheckParameter2 + 4) = 0;
        KeInsertQueueDpc((PRKDPC)v22[3], (PVOID)BugCheckParameter2, v22);
      }
      else
      {
        KiTryUnwaitThread(v45, v22, 256LL, 0LL);
      }
      v19 = (_QWORD *)(BugCheckParameter2 + 8);
    }
  }
  v25 = *(_BYTE *)(BugCheckParameter2 + 48) & 2;
  _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
  if ( v51 )
    KiAcquireReleaseObjectRundownLockExclusive(BugCheckParameter2);
  v6 = v25 != 0;
  if ( v25 )
  {
    if ( v48 )
    {
      Next = v45->DeferredReadyListHead.Next;
      if ( Next )
      {
        if ( (struct _SINGLE_LIST_ENTRY *)v48 == &Next[-27] )
          KeAbPreWakeupThread(v48, BugCheckParameter2);
      }
    }
  }
  v13 = v43;
  v4 = v44;
LABEL_28:
  KiExitDispatcher((unsigned __int64)v45, (a3 & 2) != 0 ? 3 : 0, 1u, a2, v49);
  if ( v6 )
  {
    if ( (struct _KTHREAD *)v5 != BugCheckParameter1 )
    {
      SessionId = PsGetSessionIdEx((__int64)BugCheckParameter1->ApcState.Process);
      KeBugCheckEx(0x162u, (ULONG_PTR)BugCheckParameter1, BugCheckParameter2, SessionId, 1uLL);
    }
    KeAbPostRelease(BugCheckParameter2);
  }
  if ( v4 )
    KiLeaveCriticalRegionUnsafe((__int64)BugCheckParameter1, v26, v27, v28);
  if ( a4 )
    *a4 = v13;
  return 0LL;
}
