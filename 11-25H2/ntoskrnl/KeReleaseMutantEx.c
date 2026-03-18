/*
 * XREFs of KeReleaseMutantEx @ 0x1402F09B0
 * Callers:
 *     KeReleaseMutant @ 0x1402F0930 (KeReleaseMutant.c)
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     WmipFindRegEntryByProviderId @ 0x1402F197C (WmipFindRegEntryByProviderId.c)
 *     LdrpGetFromMUIMemCache @ 0x1402F2670 (LdrpGetFromMUIMemCache.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1402F40C0 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1403481A0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403717F0 (NtSignalAndWaitForSingleObject.c)
 *     WmipFindRegEntryByDevice @ 0x140464348 (WmipFindRegEntryByDevice.c)
 *     WmipDeregisterRegEntry @ 0x1404718C4 (WmipDeregisterRegEntry.c)
 *     WmipReceiveNotifications @ 0x1404797A0 (WmipReceiveNotifications.c)
 *     WmipBuildTraceDeviceList @ 0x140488394 (WmipBuildTraceDeviceList.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1404900C0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140492228 (LdrUnloadAlternateResourceModuleEx.c)
 *     WmiQueryTraceProviderCount @ 0x140497D78 (WmiQueryTraceProviderCount.c)
 *     WmipAllocRegEntry @ 0x1404AB318 (WmipAllocRegEntry.c)
 *     NtReleaseMutant @ 0x14099C2F0 (NtReleaseMutant.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KeAbPreWakeupThread @ 0x14027FB04 (KeAbPreWakeupThread.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiWaitSatisfyMutant @ 0x140280980 (KiWaitSatisfyMutant.c)
 *     KiRemovePrcbWaitEntry @ 0x140285980 (KiRemovePrcbWaitEntry.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiEnterDeferredReadyState @ 0x1402F0680 (KiEnterDeferredReadyState.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x14041ECE0 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall KeReleaseMutantEx(ULONG_PTR BugCheckParameter2, unsigned int a2, char a3, int *a4)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v5; // r14
  bool v6; // si
  int *v7; // rbx
  char v8; // r13
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v12; // rcx
  int v13; // ebp
  __int64 *v14; // r15
  unsigned int v15; // ebx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *v18; // r15
  _QWORD *v19; // rax
  __int64 v20; // rbp
  _QWORD *v21; // rcx
  char v23; // bl
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 result; // rax
  char v28; // al
  char v29; // r13
  __int64 v30; // rbx
  unsigned int v31; // esi
  char v32; // cl
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rdx
  int *v36; // rcx
  __int64 v37; // rax
  char v38; // bl
  struct _SINGLE_LIST_ENTRY *Next; // rax
  unsigned int SessionId; // eax
  int v41; // [rsp+30h] [rbp-98h]
  int v42; // [rsp+34h] [rbp-94h]
  struct _KPRCB *v43; // [rsp+40h] [rbp-88h]
  unsigned __int8 v44; // [rsp+48h] [rbp-80h]
  __int64 v45; // [rsp+50h] [rbp-78h]
  ULONG_PTR v46; // [rsp+58h] [rbp-70h]
  volatile signed __int32 v47; // [rsp+60h] [rbp-68h]
  char v48; // [rsp+D0h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v42 = 0;
  v5 = 0LL;
  v6 = 0;
  v46 = 0LL;
  v7 = a4;
  v8 = a3;
  CurrentIrql = KeGetCurrentIrql();
  v44 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  CurrentPrcb = KeGetCurrentPrcb();
  v43 = CurrentPrcb;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)BugCheckParameter2);
  v13 = *(_DWORD *)(BugCheckParameter2 + 4);
  v41 = v13;
  if ( (v8 & 1) != 0 )
  {
    *(_BYTE *)(BugCheckParameter2 + 48) |= 1u;
    v14 = (__int64 *)(BugCheckParameter2 + 40);
    v48 = 1;
    *(_DWORD *)(BugCheckParameter2 + 4) = 1;
  }
  else
  {
    if ( *(struct _KTHREAD **)(BugCheckParameter2 + 40) != CurrentThread
      || *(_BYTE *)(BugCheckParameter2 + 2) != CurrentPrcb->DpcRoutineActive )
    {
      v38 = *(_BYTE *)(BugCheckParameter2 + 48) & 1;
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v44);
      __writecr8(v44);
      result = 128LL;
      if ( !v38 )
        result = 3221225542LL;
      if ( (v8 & 4) != 0 )
        RtlRaiseStatus(result);
      return result;
    }
    v12 = *(unsigned int *)(BugCheckParameter2 + 4);
    v14 = (__int64 *)(BugCheckParameter2 + 40);
    v48 = 0;
    *(_DWORD *)(BugCheckParameter2 + 4) = v12 + 1;
    if ( (_DWORD)v12 )
    {
LABEL_21:
      _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
      goto LABEL_27;
    }
  }
  if ( v13 > 0 )
    goto LABEL_21;
  v15 = 0;
  v47 = *(_DWORD *)BugCheckParameter2;
  BYTE2(v47) = 0;
  *(_DWORD *)BugCheckParameter2 = v47;
  v5 = *v14;
  v42 = *(unsigned __int8 *)(BugCheckParameter2 + 49);
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 64), 0LL) )
  {
    do
    {
      if ( (++v15 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v12) )
      {
        HvlNotifyLongSpinWait(v15);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v5 + 64) );
  }
  v16 = *(_QWORD *)(BugCheckParameter2 + 24);
  v17 = *(_QWORD **)(BugCheckParameter2 + 32);
  if ( *(_QWORD *)(v16 + 8) != BugCheckParameter2 + 24 || *v17 != BugCheckParameter2 + 24 )
LABEL_20:
    __fastfail(3u);
  *v17 = v16;
  *(_QWORD *)(v16 + 8) = v17;
  *(_QWORD *)(v5 + 64) = 0LL;
  *v14 = 0LL;
  v18 = *(_QWORD **)(BugCheckParameter2 + 8);
  while ( v18 != (_QWORD *)(BugCheckParameter2 + 8) )
  {
    v19 = (_QWORD *)*v18;
    v20 = (__int64)v18;
    v18 = v19;
    v21 = *(_QWORD **)(v20 + 8);
    if ( v19[1] != v20 || *v21 != v20 )
      goto LABEL_20;
    *v21 = v19;
    v19[1] = v21;
    v28 = *(_BYTE *)(v20 + 16);
    switch ( v28 )
    {
      case 1:
        v29 = 0;
        v30 = *(_QWORD *)(v20 + 24);
        v31 = 0;
        v45 = *(unsigned __int16 *)(v20 + 18);
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 64), 0LL) )
        {
          do
          {
            if ( (++v31 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v21) )
            {
              HvlNotifyLongSpinWait(v31);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)(v30 + 64) );
        }
        if ( *(_BYTE *)(v30 + 388) == 5 )
        {
          v32 = *(_BYTE *)(v30 + 112);
          v33 = v32 & 7;
          if ( v33 == 1 || v33 == 4 )
          {
            v34 = *(_QWORD *)(v30 + 232);
            if ( v34 )
            {
              if ( (*(_BYTE *)v34 & 0x7F) == 0x15 )
              {
                v37 = (unsigned __int8)*(_DWORD *)(v30 + 540);
                *(_DWORD *)(v30 + 540) = v37;
                _InterlockedIncrement((volatile signed __int32 *)(v34 + 4 * v37 + 536));
              }
              else
              {
                _InterlockedIncrement((volatile signed __int32 *)(v34 + 40));
              }
            }
            KiRemovePrcbWaitEntry((_QWORD *)v30);
            KiEnterDeferredReadyState(v30);
            v35 = (__int64)v43;
            *(_QWORD *)(v30 + 216) = v43->DeferredReadyListHead.Next;
            v43->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v30 + 216);
            *(_QWORD *)(v30 + 200) = v45;
            *(_QWORD *)(v30 + 976) = 0LL;
          }
          else
          {
            if ( (*(_BYTE *)(v30 + 112) & 7) != 0 )
            {
              if ( v33 == 5 )
              {
                *(_BYTE *)(v30 + 112) = v32 & 0xF8 | 6;
              }
              else if ( v33 == 3 )
              {
                *(_BYTE *)(v20 + 17) = 2;
              }
              goto LABEL_49;
            }
            v35 = (__int64)v43;
            *(_BYTE *)(v30 + 112) = v32 & 0xF8 | 2;
            *(_QWORD *)(v30 + 200) = v45;
            *(_QWORD *)(v30 + 976) = 0LL;
            *(_BYTE *)(v20 + 17) = 0;
          }
          v36 = *(int **)(v20 + 32);
          v29 = 1;
          v46 = v30;
          if ( (*(_BYTE *)v36 & 0x7F) == 2 )
            KiWaitSatisfyMutant(v36, v30, v35);
        }
LABEL_49:
        *(_QWORD *)(v30 + 64) = 0LL;
        ++*(_BYTE *)(v20 + 17);
        if ( v29 )
          goto LABEL_22;
        break;
      case 2:
        *(_BYTE *)(v20 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v20 + 24), (__int64 *)v20);
LABEL_22:
        if ( (*(_DWORD *)(BugCheckParameter2 + 4))-- == 1 )
          goto LABEL_23;
        break;
      case 4:
        *(_BYTE *)(v20 + 17) = 5;
        *(_DWORD *)(BugCheckParameter2 + 4) = 0;
        KeInsertQueueDpc(*(PRKDPC *)(v20 + 24), (PVOID)BugCheckParameter2, (PVOID)v20);
        break;
      default:
        KiTryUnwaitThread((__int64)v43, v20, 256LL, 0LL);
        break;
    }
  }
LABEL_23:
  v23 = *(_BYTE *)(BugCheckParameter2 + 48) & 2;
  _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
  if ( v48 )
    KiAcquireReleaseObjectRundownLockExclusive(BugCheckParameter2);
  v6 = v23 != 0;
  if ( v23 )
  {
    if ( v46 )
    {
      Next = v43->DeferredReadyListHead.Next;
      if ( Next )
      {
        if ( (struct _SINGLE_LIST_ENTRY *)v46 == &Next[-27] )
          KeAbPreWakeupThread(v46, BugCheckParameter2);
      }
    }
  }
  v8 = a3;
  v7 = a4;
  v13 = v41;
LABEL_27:
  KiExitDispatcher(v43, (v8 & 2) != 0 ? 3 : 0, 1u, a2, v44);
  if ( v6 )
  {
    if ( (struct _KTHREAD *)v5 != CurrentThread )
    {
      SessionId = PsGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 1uLL);
    }
    KeAbPostRelease(BugCheckParameter2);
  }
  if ( v42 )
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v24, v25, v26);
  if ( v7 )
    *v7 = v13;
  return 0LL;
}
