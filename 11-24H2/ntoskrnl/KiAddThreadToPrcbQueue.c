/*
 * XREFs of KiAddThreadToPrcbQueue @ 0x1403102F0
 * Callers:
 *     KiRemoveThreadFromSchedulingGroup @ 0x1402A7194 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14030B428 (KiGroupSchedulingGenerationEnd.c)
 *     ?KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14030F768 (-KiMoveScbThreadsToNewReadylist@@YAXPEAU_KSCB@@0PEAU_KPRCB@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14030F980 (KiDeferGroupSchedulingPreemption.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KiInsertQueueDpc @ 0x140254310 (KiInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiIsThreadExemptFromForcePark @ 0x14029AB9C (KiIsThreadExemptFromForcePark.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14030EBE4 (KiReadGuestSchedulerAssistPriority.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiUpdateSoftParkElectionStatisticsOnInsertion @ 0x14042B760 (KiUpdateSoftParkElectionStatisticsOnInsertion.c)
 */

unsigned int *__fastcall KiAddThreadToPrcbQueue(__int64 a1, __int64 a2, int a3, int a4, char a5, unsigned int *a6)
{
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
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // r10d
  __int64 v28; // rax
  __int64 v29; // rax
  ULONG_PTR v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  _QWORD *v34; // rdx
  __int64 v35; // rax
  _QWORD *v36; // rax
  int v37; // eax
  bool v38; // zf
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  ULONG_PTR v43; // rsi
  __int64 v44; // rdi
  _QWORD *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  unsigned int *result; // rax
  __int128 v49; // [rsp+30h] [rbp-20h] BYREF
  __int128 v50; // [rsp+40h] [rbp-10h] BYREF

  v7 = a3;
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
        v12 = (_QWORD *)qword_140F223C8;
        v10 = KiUpdateVpThreadPriorityListHead == (_QWORD)&KiUpdateVpThreadPriorityListHead;
        if ( *(__int64 **)qword_140F223C8 != &KiUpdateVpThreadPriorityListHead )
          __fastfail(3u);
        *v11 = &KiUpdateVpThreadPriorityListHead;
        *(_QWORD *)(a2 + 1016) = v12;
        *v12 = v11;
        qword_140F223C8 = a2 + 1008;
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
    v33 = (_QWORD *)(a2 + 216);
    v34 = (_QWORD *)(a1 + 16 * (v7 + 2116));
    if ( a4 )
    {
      v35 = *v34;
      if ( *(_QWORD **)(*v34 + 8LL) != v34 )
        goto LABEL_57;
      *v33 = v35;
      *(_QWORD *)(a2 + 224) = v34;
      *(_QWORD *)(v35 + 8) = v33;
      *v34 = v33;
      _bittestandset((signed __int32 *)(a1 + 33756), v7);
    }
    else
    {
      v36 = (_QWORD *)v34[1];
      if ( (_QWORD *)*v36 != v34 )
        goto LABEL_57;
      *v33 = v34;
      *(_QWORD *)(a2 + 224) = v36;
      *v36 = v33;
      v34[1] = v33;
    }
    v37 = *(_DWORD *)(a1 + 33752);
    v38 = ++*(_DWORD *)(a1 + 34420) == 1;
    *(_DWORD *)(a1 + 33752) = v37 | (1 << v7);
    if ( v38 && !*(_QWORD *)(a1 + 33840) )
      _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 192) + 384LL), *(_QWORD *)(a1 + 200));
    v39 = *(unsigned int *)(a2 + 84);
    *(_DWORD *)(a2 + 1784) = v39;
    v40 = *(_QWORD *)(a1 + 36424);
    *(_QWORD *)(a1 + 34424) += v39;
    KiUpdateSoftParkElectionStatisticsOnInsertion(v40, a2);
    if ( !KiForceParkingConfiguration )
      goto LABEL_86;
    if ( (*(_BYTE *)(a1 + 35) & 0x20) == 0 )
      goto LABEL_86;
    if ( KiIsThreadExemptFromForcePark(a2) )
      goto LABEL_86;
    v43 = *(_QWORD *)(a1 + 34544);
    v44 = *(_QWORD *)(a1 + 36424);
    if ( *(_DWORD *)(v43 + 336) )
      goto LABEL_86;
    if ( v44 )
    {
      v50 = 0LL;
      if ( (KiVelocityFlags & 0x200000) != 0 )
      {
        *((_QWORD *)&v50 + 1) = v44;
        *(_QWORD *)&v50 = 0LL;
        v45 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v44, (__int64)&v50);
        if ( v45 )
          KxWaitForLockOwnerShip((__int64)&v50, v45);
      }
      else
      {
        while ( _interlockedbittestandset64((volatile signed __int32 *)v44, 0LL) )
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
          while ( *(_QWORD *)v44 );
        }
      }
      v38 = (KiVelocityFlags & 0x200000) == 0;
      *(_QWORD *)(v44 + 1768) |= *(_QWORD *)(a1 + 200);
      if ( v38 )
      {
        _InterlockedAnd64((volatile signed __int64 *)v44, 0LL);
      }
      else
      {
        _m_prefetchw(&v50);
        v46 = v50;
        if ( (_QWORD)v50 )
          goto LABEL_82;
        if ( (__int128 *)_InterlockedCompareExchange64(
                           *((volatile signed __int64 **)&v50 + 1),
                           0LL,
                           (signed __int64)&v50) != &v50 )
        {
          v46 = KxWaitForLockChainValid(&v50);
LABEL_82:
          *(_QWORD *)&v50 = 0LL;
          v47 = *((_QWORD *)&v50 + 1);
          if ( (((unsigned __int8)v47 ^ (unsigned __int8)_InterlockedExchange64(
                                                           (volatile __int64 *)(v46 + 8),
                                                           *((__int64 *)&v50 + 1))) & 4) != 0 )
            KeWakeAddressAll(v46 + 8, v47, v41, v42);
        }
      }
    }
    *(_DWORD *)(v43 + 336) = 1;
    *(_DWORD *)(v43 + 340) = 1;
    KiInsertQueueDpc(v43, 0LL, 0LL, 0LL, 0);
    v14 = 0;
    goto LABEL_86;
  }
  v18 = *(_QWORD *)(a1 + 36424);
  v19 = (_QWORD *)(v18 + 16 * (v7 + 4));
  v49 = 0LL;
  if ( (KiVelocityFlags & 0x200000) != 0 )
  {
    *((_QWORD *)&v49 + 1) = v18;
    *(_QWORD *)&v49 = 0LL;
    v20 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v18, (__int64)&v49);
    if ( v20 )
      KxWaitForLockOwnerShip((__int64)&v49, v20);
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
  if ( !a4 )
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
  if ( KiForceParkingConfiguration )
  {
    v26 = *(unsigned __int8 *)(a1 + 35);
    if ( (v26 & 0x20) != 0 && !KiIsThreadExemptFromForcePark(a2) )
    {
      if ( (v26 & 0x10) == 0
        || ((v28 = *(_QWORD *)(a1 + 192), !v27) ? (v29 = *(_QWORD *)(v28 + 80)) : (v29 = ~*(_QWORD *)(v28 + 104)),
            (v29 & *(_QWORD *)(v18 + 712)) == 0) )
      {
        if ( !*(_QWORD *)(v18 + 1768) )
        {
          *(_QWORD *)(v18 + 1768) |= *(_QWORD *)(a1 + 200);
          v30 = *(_QWORD *)(a1 + 34544);
          *(_DWORD *)(v30 + 336) = 1;
          *(_DWORD *)(v30 + 340) = 1;
          KiInsertQueueDpc(v30, 0LL, 0LL, 0LL, 0);
        }
      }
    }
  }
  if ( (KiVelocityFlags & 0x200000) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v18, 0LL);
    goto LABEL_86;
  }
  _m_prefetchw(&v49);
  v31 = v49;
  if ( !(_QWORD)v49 )
  {
    if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v49 + 1), 0LL, (signed __int64)&v49) == &v49 )
      goto LABEL_86;
    v31 = KxWaitForLockChainValid(&v49);
  }
  *(_QWORD *)&v49 = 0LL;
  v32 = *((_QWORD *)&v49 + 1);
  if ( (((unsigned __int8)v32 ^ (unsigned __int8)_InterlockedExchange64(
                                                   (volatile __int64 *)(v31 + 8),
                                                   *((__int64 *)&v49 + 1))) & 4) != 0 )
    KeWakeAddressAll(v31 + 8, v32, v25, v26);
LABEL_86:
  result = a6;
  *a6 = v14;
  return result;
}
