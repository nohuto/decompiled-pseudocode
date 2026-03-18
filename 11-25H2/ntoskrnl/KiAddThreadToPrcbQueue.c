/*
 * XREFs of KiAddThreadToPrcbQueue @ 0x1402F5510
 * Callers:
 *     KiTransitionSchedulingGroupGeneration @ 0x140275710 (KiTransitionSchedulingGroupGeneration.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402762CC (KiDeferGroupSchedulingPreemption.c)
 *     ?KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1402F52F0 (-KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1403147F4 (KiGroupSchedulingGenerationEnd.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1403AB9B4 (KiRemoveThreadFromSchedulingGroup.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KiInsertQueueDpc @ 0x140252DA0 (KiInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KiUpdateSoftParkElectionStatisticsOnInsertion @ 0x140313A60 (KiUpdateSoftParkElectionStatisticsOnInsertion.c)
 *     KiIsThreadExemptFromForcePark @ 0x14031888C (KiIsThreadExemptFromForcePark.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1404303E4 (KiReadGuestSchedulerAssistPriority.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 */

unsigned int *__fastcall KiAddThreadToPrcbQueue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int *a6)
{
  int v6; // r13d
  __int64 v7; // r12
  bool v10; // bl
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // ebx
  _WORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdi
  _QWORD *v20; // r15
  __int64 v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  char v27; // r9
  int v28; // r10d
  __int64 v29; // rax
  __int64 v30; // rax
  ULONG_PTR v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rcx
  _QWORD *v35; // rdx
  __int64 v36; // rax
  _QWORD *v37; // rax
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  ULONG_PTR v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rdx
  bool v49; // zf
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned int *result; // rax
  __int128 v53; // [rsp+30h] [rbp-20h] BYREF
  __int128 v54; // [rsp+40h] [rbp-10h] BYREF

  v6 = a4;
  v7 = (int)a3;
  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
    _InterlockedOr(*(volatile signed __int32 **)(a2 + 968), 0x40000u);
  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
  {
    v10 = 0;
    if ( (unsigned int)KiReadGuestSchedulerAssistPriority(a2, 0LL) != *(_DWORD *)(a2 + 1024) )
    {
      KxAcquireSpinLock(&KiUpdateVpThreadPriorityLock);
      v11 = (_QWORD *)(a2 + 1008);
      if ( *(_QWORD *)(a2 + 1008) == 1LL )
      {
        v12 = (_QWORD *)qword_140F21B28;
        v10 = KiUpdateVpThreadPriorityListHead == (_QWORD)&KiUpdateVpThreadPriorityListHead;
        if ( *(__int64 **)qword_140F21B28 != &KiUpdateVpThreadPriorityListHead )
          __fastfail(3u);
        *v11 = &KiUpdateVpThreadPriorityListHead;
        *(_QWORD *)(a2 + 1016) = v12;
        *v12 = v11;
        qword_140F21B28 = a2 + 1008;
      }
      KxReleaseSpinLock(&KiUpdateVpThreadPriorityLock);
      if ( v10 )
        KeInsertQueueDpc(&KiUpdateVpThreadPriorityDpc, 0LL, 0LL);
    }
  }
  v13 = *(_QWORD *)(a1 + 36416);
  v14 = 0;
  if ( (*(_DWORD *)(a2 + 120) & 0x2000) == 0
    || !v13
    || ((v15 = *(_WORD **)(a2 + 576), v16 = *(unsigned __int8 *)(a1 + 208), (unsigned __int16)v16 >= *v15)
      ? (v17 = 0LL)
      : (v17 = *(_QWORD *)&v15[4 * v16 + 4]),
        (v18 = v13 & v17, v18 != v13) || a5) )
  {
    v34 = (_QWORD *)(a2 + 216);
    v35 = (_QWORD *)(a1 + 16 * (v7 + 2116));
    if ( v6 )
    {
      v36 = *v35;
      if ( *(_QWORD **)(*v35 + 8LL) != v35 )
        goto LABEL_58;
      *v34 = v36;
      *(_QWORD *)(a2 + 224) = v35;
      *(_QWORD *)(v36 + 8) = v34;
      *v35 = v34;
      _bittestandset((signed __int32 *)(a1 + 33756), v7);
    }
    else
    {
      v37 = (_QWORD *)v35[1];
      if ( (_QWORD *)*v37 != v35 )
        goto LABEL_58;
      *v34 = v35;
      *(_QWORD *)(a2 + 224) = v37;
      *v37 = v34;
      v35[1] = v34;
    }
    v38 = *(_DWORD *)(a1 + 33752) | (1 << v7);
    ++*(_DWORD *)(a1 + 34420);
    *(_DWORD *)(a1 + 33752) = v38;
    if ( (unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v34)
      && *(_DWORD *)(a1 + 34420) == 1
      && !*(_QWORD *)(a1 + 33840) )
    {
      _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 192) + 384LL), *(_QWORD *)(a1 + 200));
    }
    v39 = *(unsigned int *)(a2 + 84);
    *(_DWORD *)(a2 + 1784) = v39;
    v40 = *(_QWORD *)(a1 + 36424);
    *(_QWORD *)(a1 + 34424) += v39;
    KiUpdateSoftParkElectionStatisticsOnInsertion(v40, a2);
    if ( !KiForceParkingConfiguration )
      goto LABEL_88;
    if ( (*(_BYTE *)(a1 + 35) & 0x20) == 0 )
      goto LABEL_88;
    if ( (unsigned __int8)KiIsThreadExemptFromForcePark(a2, v41, v42) )
      goto LABEL_88;
    v46 = *(_QWORD *)(a1 + 34544);
    v47 = *(_QWORD *)(a1 + 36424);
    if ( *(_DWORD *)(v46 + 336) )
      goto LABEL_88;
    if ( v47 )
    {
      v54 = 0LL;
      if ( (KiVelocityFlags & 0x200000) != 0 )
      {
        *((_QWORD *)&v54 + 1) = v47;
        *(_QWORD *)&v54 = 0LL;
        v48 = _InterlockedExchange64((volatile __int64 *)v47, (__int64)&v54);
        if ( v48 )
          KxWaitForLockOwnerShip(&v54, v48, v44, v45);
      }
      else
      {
        while ( _interlockedbittestandset64((volatile signed __int32 *)v47, 0LL) )
        {
          do
          {
            if ( (++v14 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v43) )
            {
              HvlNotifyLongSpinWait(v14);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v47 );
        }
      }
      v49 = (KiVelocityFlags & 0x200000) == 0;
      *(_QWORD *)(v47 + 1768) |= *(_QWORD *)(a1 + 200);
      if ( v49 )
      {
        _InterlockedAnd64((volatile signed __int64 *)v47, 0LL);
      }
      else
      {
        _m_prefetchw(&v54);
        v50 = v54;
        if ( (_QWORD)v54 )
          goto LABEL_84;
        if ( (__int128 *)_InterlockedCompareExchange64(
                           *((volatile signed __int64 **)&v54 + 1),
                           0LL,
                           (signed __int64)&v54) != &v54 )
        {
          v50 = KxWaitForLockChainValid((__int64 *)&v54);
LABEL_84:
          *(_QWORD *)&v54 = 0LL;
          v51 = *((_QWORD *)&v54 + 1);
          if ( (((unsigned __int8)v51 ^ (unsigned __int8)_InterlockedExchange64(
                                                           (volatile __int64 *)(v50 + 8),
                                                           *((__int64 *)&v54 + 1))) & 4) != 0 )
            KeWakeAddressAll(v50 + 8, v51);
        }
      }
    }
    *(_DWORD *)(v46 + 336) = 1;
    *(_DWORD *)(v46 + 340) = 1;
    KiInsertQueueDpc(v46, 0LL, 0LL, 0LL, 0);
    v14 = 0;
    goto LABEL_88;
  }
  v19 = *(_QWORD *)(a1 + 36424);
  v20 = (_QWORD *)(v19 + 16 * (v7 + 4));
  v53 = 0LL;
  if ( (KiVelocityFlags & 0x200000) != 0 )
  {
    *((_QWORD *)&v53 + 1) = v19;
    *(_QWORD *)&v53 = 0LL;
    v21 = _InterlockedExchange64((volatile __int64 *)v19, (__int64)&v53);
    if ( v21 )
      KxWaitForLockOwnerShip(&v53, v21, a3, a4);
  }
  else
  {
    while ( _interlockedbittestandset64((volatile signed __int32 *)v19, 0LL) )
    {
      do
      {
        if ( (++v14 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v18) )
        {
          HvlNotifyLongSpinWait(v14);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)v19 );
    }
  }
  v22 = (_QWORD *)(a2 + 216);
  if ( v6 )
  {
    v23 = (_QWORD *)*v20;
    if ( *(_QWORD **)(*v20 + 8LL) == v20 )
    {
      *v22 = v23;
      *(_QWORD *)(a2 + 224) = v20;
      v23[1] = v22;
      *v20 = v22;
      _bittestandreset((signed __int32 *)(a1 + 33756), v7);
      goto LABEL_34;
    }
LABEL_58:
    __fastfail(3u);
  }
  v23 = (_QWORD *)v20[1];
  if ( (_QWORD *)*v23 != v20 )
    goto LABEL_58;
  *v22 = v20;
  *(_QWORD *)(a2 + 224) = v23;
  *v23 = v22;
  v20[1] = v22;
LABEL_34:
  *(_DWORD *)(v19 + 8) |= 1 << v7;
  *(_DWORD *)(a2 + 536) |= 0x80000000;
  ++*(_DWORD *)(v19 + 12);
  if ( (unsigned int)Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v23)
    && *(_DWORD *)(v19 + 12) == 1 )
  {
    _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(v19 + 720) + 392LL), *(_QWORD *)(v19 + 712));
  }
  v24 = *(unsigned int *)(a2 + 84);
  *(_DWORD *)(a2 + 1784) = v24;
  *(_QWORD *)(v19 + 16) += v24;
  KiUpdateSoftParkElectionStatisticsOnInsertion(v19, a2);
  v14 = 1;
  if ( KiForceParkingConfiguration
    && (*(_BYTE *)(a1 + 35) & 0x20) != 0
    && !(unsigned __int8)KiIsThreadExemptFromForcePark(a2, v25, v26) )
  {
    if ( (v27 & 0x10) == 0
      || ((v29 = *(_QWORD *)(a1 + 192), !v28) ? (v30 = *(_QWORD *)(v29 + 80)) : (v30 = ~*(_QWORD *)(v29 + 104)),
          (v30 & *(_QWORD *)(v19 + 712)) == 0) )
    {
      if ( !*(_QWORD *)(v19 + 1768) )
      {
        *(_QWORD *)(v19 + 1768) |= *(_QWORD *)(a1 + 200);
        v31 = *(_QWORD *)(a1 + 34544);
        *(_DWORD *)(v31 + 336) = 1;
        *(_DWORD *)(v31 + 340) = 1;
        KiInsertQueueDpc(v31, 0LL, 0LL, 0LL, 0);
      }
    }
  }
  if ( (KiVelocityFlags & 0x200000) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v19, 0LL);
    goto LABEL_88;
  }
  _m_prefetchw(&v53);
  v32 = v53;
  if ( !(_QWORD)v53 )
  {
    if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v53 + 1), 0LL, (signed __int64)&v53) == &v53 )
      goto LABEL_88;
    v32 = KxWaitForLockChainValid((__int64 *)&v53);
  }
  *(_QWORD *)&v53 = 0LL;
  v33 = *((_QWORD *)&v53 + 1);
  if ( (((unsigned __int8)v33 ^ (unsigned __int8)_InterlockedExchange64(
                                                   (volatile __int64 *)(v32 + 8),
                                                   *((__int64 *)&v53 + 1))) & 4) != 0 )
    KeWakeAddressAll(v32 + 8, v33);
LABEL_88:
  result = a6;
  *a6 = v14;
  return result;
}
