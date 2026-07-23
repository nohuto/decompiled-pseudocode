/*
 * XREFs of KiAddThreadToPrcbQueue @ 0x1402D7CF0
 * Callers:
 *     KiRemoveThreadFromSchedulingGroup @ 0x1402D68C4 (KiRemoveThreadFromSchedulingGroup.c)
 *     ?KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1402D716C (-KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402D7384 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1402DA488 (KiGroupSchedulingGenerationEnd.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiInsertQueueDpc @ 0x140284920 (KiInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiIsThreadExemptFromForcePark @ 0x1402A968C (KiIsThreadExemptFromForcePark.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1402D8644 (KiReadGuestSchedulerAssistPriority.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiUpdateSoftParkElectionStatisticsOnInsertion @ 0x14041E2F0 (KiUpdateSoftParkElectionStatisticsOnInsertion.c)
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
  __int64 v18; // rdi
  _QWORD *v19; // r15
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  __int64 v24; // rax
  char v25; // r9
  int v26; // r10d
  __int64 v27; // rax
  __int64 v28; // rax
  ULONG_PTR v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  _QWORD *v33; // rdx
  __int64 v34; // rax
  _QWORD *v35; // rax
  int v36; // eax
  bool v37; // zf
  __int64 v38; // rax
  __int64 v39; // rcx
  ULONG_PTR v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  unsigned int *result; // rax
  __int128 v46; // [rsp+30h] [rbp-20h] BYREF
  __int128 v47; // [rsp+40h] [rbp-10h] BYREF

  v6 = a4;
  v7 = (int)a3;
  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
    _InterlockedOr(*(volatile signed __int32 **)(a2 + 968), 0x40000u);
  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
  {
    v10 = 0;
    if ( (unsigned int)KiReadGuestSchedulerAssistPriority(a2, 0LL, a3, a4) != *(_DWORD *)(a2 + 1024) )
    {
      KxAcquireSpinLock(&KiUpdateVpThreadPriorityLock);
      v11 = (_QWORD *)(a2 + 1008);
      if ( *(_QWORD *)(a2 + 1008) == 1LL )
      {
        v12 = (_QWORD *)qword_140F22508;
        v10 = KiUpdateVpThreadPriorityListHead == (_QWORD)&KiUpdateVpThreadPriorityListHead;
        if ( *(__int64 **)qword_140F22508 != &KiUpdateVpThreadPriorityListHead )
          __fastfail(3u);
        *v11 = &KiUpdateVpThreadPriorityListHead;
        *(_QWORD *)(a2 + 1016) = v12;
        *v12 = v11;
        qword_140F22508 = a2 + 1008;
      }
      KxReleaseSpinLock((volatile signed __int64 *)&KiUpdateVpThreadPriorityLock);
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
        (v13 & v17) != v13 || a5) )
  {
    v32 = (_QWORD *)(a2 + 216);
    v33 = (_QWORD *)(a1 + 16 * (v7 + 2116));
    if ( v6 )
    {
      v34 = *v33;
      if ( *(_QWORD **)(*v33 + 8LL) != v33 )
        goto LABEL_57;
      *v32 = v34;
      *(_QWORD *)(a2 + 224) = v33;
      *(_QWORD *)(v34 + 8) = v32;
      *v33 = v32;
      _bittestandset((signed __int32 *)(a1 + 33756), v7);
    }
    else
    {
      v35 = (_QWORD *)v33[1];
      if ( (_QWORD *)*v35 != v33 )
        goto LABEL_57;
      *v32 = v33;
      *(_QWORD *)(a2 + 224) = v35;
      *v35 = v32;
      v33[1] = v32;
    }
    v36 = *(_DWORD *)(a1 + 33752);
    v37 = ++*(_DWORD *)(a1 + 34420) == 1;
    *(_DWORD *)(a1 + 33752) = v36 | (1 << v7);
    if ( v37 && !*(_QWORD *)(a1 + 33840) )
      _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 192) + 384LL), *(_QWORD *)(a1 + 200));
    v38 = *(unsigned int *)(a2 + 84);
    *(_DWORD *)(a2 + 1784) = v38;
    v39 = *(_QWORD *)(a1 + 36424);
    *(_QWORD *)(a1 + 34424) += v38;
    KiUpdateSoftParkElectionStatisticsOnInsertion(v39, a2);
    if ( !KiForceParkingConfiguration )
      goto LABEL_86;
    if ( (*(_BYTE *)(a1 + 35) & 0x20) == 0 )
      goto LABEL_86;
    if ( KiIsThreadExemptFromForcePark(a2) )
      goto LABEL_86;
    v40 = *(_QWORD *)(a1 + 34544);
    v41 = *(_QWORD *)(a1 + 36424);
    if ( *(_DWORD *)(v40 + 336) )
      goto LABEL_86;
    if ( v41 )
    {
      v47 = 0LL;
      if ( (KiVelocityFlags & 0x200000) != 0 )
      {
        *((_QWORD *)&v47 + 1) = v41;
        *(_QWORD *)&v47 = 0LL;
        v42 = _InterlockedExchange64((volatile __int64 *)v41, (__int64)&v47);
        if ( v42 )
          KxWaitForLockOwnerShip(&v47, v42);
      }
      else
      {
        while ( _interlockedbittestandset64((volatile signed __int32 *)v41, 0LL) )
        {
          do
          {
            if ( (++v14 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v14);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v41 );
        }
      }
      v37 = (KiVelocityFlags & 0x200000) == 0;
      *(_QWORD *)(v41 + 1768) |= *(_QWORD *)(a1 + 200);
      if ( v37 )
      {
        _InterlockedAnd64((volatile signed __int64 *)v41, 0LL);
      }
      else
      {
        _m_prefetchw(&v47);
        v43 = v47;
        if ( (_QWORD)v47 )
          goto LABEL_82;
        if ( (__int128 *)_InterlockedCompareExchange64(
                           *((volatile signed __int64 **)&v47 + 1),
                           0LL,
                           (signed __int64)&v47) != &v47 )
        {
          v43 = KxWaitForLockChainValid((__int64 *)&v47);
LABEL_82:
          *(_QWORD *)&v47 = 0LL;
          v44 = *((_QWORD *)&v47 + 1);
          if ( (((unsigned __int8)v44 ^ (unsigned __int8)_InterlockedExchange64(
                                                           (volatile __int64 *)(v43 + 8),
                                                           *((__int64 *)&v47 + 1))) & 4) != 0 )
            KeWakeAddressAll(v43 + 8, v44);
        }
      }
    }
    *(_DWORD *)(v40 + 336) = 1;
    *(_DWORD *)(v40 + 340) = 1;
    KiInsertQueueDpc(v40, 0LL, 0LL, 0LL, 0);
    v14 = 0;
    goto LABEL_86;
  }
  v18 = *(_QWORD *)(a1 + 36424);
  v19 = (_QWORD *)(v18 + 16 * (v7 + 4));
  v46 = 0LL;
  if ( (KiVelocityFlags & 0x200000) != 0 )
  {
    *((_QWORD *)&v46 + 1) = v18;
    *(_QWORD *)&v46 = 0LL;
    v20 = _InterlockedExchange64((volatile __int64 *)v18, (__int64)&v46);
    if ( v20 )
      KxWaitForLockOwnerShip(&v46, v20);
  }
  else
  {
    while ( _interlockedbittestandset64((volatile signed __int32 *)v18, 0LL) )
    {
      do
      {
        if ( (++v14 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v14);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)v18 );
    }
  }
  v21 = (_QWORD *)(a2 + 216);
  if ( !v6 )
  {
    v23 = (_QWORD *)v19[1];
    if ( (_QWORD *)*v23 == v19 )
    {
      *v21 = v19;
      *(_QWORD *)(a2 + 224) = v23;
      *v23 = v21;
      v19[1] = v21;
      goto LABEL_34;
    }
LABEL_57:
    __fastfail(3u);
  }
  v22 = *v19;
  if ( *(_QWORD **)(*v19 + 8LL) != v19 )
    goto LABEL_57;
  *v21 = v22;
  *(_QWORD *)(a2 + 224) = v19;
  *(_QWORD *)(v22 + 8) = v21;
  *v19 = v21;
  _bittestandreset((signed __int32 *)(a1 + 33756), v7);
LABEL_34:
  *(_DWORD *)(v18 + 8) |= 1 << v7;
  *(_DWORD *)(a2 + 536) |= 0x80000000;
  if ( ++*(_DWORD *)(v18 + 12) == 1 )
    _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(v18 + 720) + 392LL), *(_QWORD *)(v18 + 712));
  v24 = *(unsigned int *)(a2 + 84);
  *(_DWORD *)(a2 + 1784) = v24;
  *(_QWORD *)(v18 + 16) += v24;
  KiUpdateSoftParkElectionStatisticsOnInsertion(v18, a2);
  v14 = 1;
  if ( KiForceParkingConfiguration && (*(_BYTE *)(a1 + 35) & 0x20) != 0 && !KiIsThreadExemptFromForcePark(a2) )
  {
    if ( (v25 & 0x10) == 0
      || ((v27 = *(_QWORD *)(a1 + 192), !v26) ? (v28 = *(_QWORD *)(v27 + 80)) : (v28 = ~*(_QWORD *)(v27 + 104)),
          (v28 & *(_QWORD *)(v18 + 712)) == 0) )
    {
      if ( !*(_QWORD *)(v18 + 1768) )
      {
        *(_QWORD *)(v18 + 1768) |= *(_QWORD *)(a1 + 200);
        v29 = *(_QWORD *)(a1 + 34544);
        *(_DWORD *)(v29 + 336) = 1;
        *(_DWORD *)(v29 + 340) = 1;
        KiInsertQueueDpc(v29, 0LL, 0LL, 0LL, 0);
      }
    }
  }
  if ( (KiVelocityFlags & 0x200000) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v18, 0LL);
    goto LABEL_86;
  }
  _m_prefetchw(&v46);
  v30 = v46;
  if ( !(_QWORD)v46 )
  {
    if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v46 + 1), 0LL, (signed __int64)&v46) == &v46 )
      goto LABEL_86;
    v30 = KxWaitForLockChainValid((__int64 *)&v46);
  }
  *(_QWORD *)&v46 = 0LL;
  v31 = *((_QWORD *)&v46 + 1);
  if ( (((unsigned __int8)v31 ^ (unsigned __int8)_InterlockedExchange64(
                                                   (volatile __int64 *)(v30 + 8),
                                                   *((__int64 *)&v46 + 1))) & 4) != 0 )
    KeWakeAddressAll(v30 + 8, v31);
LABEL_86:
  result = a6;
  *a6 = v14;
  return result;
}
