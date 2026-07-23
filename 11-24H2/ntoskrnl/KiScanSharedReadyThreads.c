/*
 * XREFs of KiScanSharedReadyThreads @ 0x14045BDC8
 * Callers:
 *     KiNormalPriorityReadyScan @ 0x140282170 (KiNormalPriorityReadyScan.c)
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 * Callees:
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1402D8644 (KiReadGuestSchedulerAssistPriority.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1402D8E60 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiDeferredReadyThread @ 0x1402DFBE0 (KiDeferredReadyThread.c)
 *     KiSetPriorityBoost @ 0x1402DFE70 (KiSetPriorityBoost.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiInsertDeferredReadyList @ 0x1403BC660 (KiInsertDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     EtwTraceAntiStarvationBoost @ 0x14064BA40 (EtwTraceAntiStarvationBoost.c)
 */

char __fastcall KiScanSharedReadyThreads(struct _KPRCB *a1, __int64 a2, char a3)
{
  signed __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rbx
  char v6; // di
  int v7; // r15d
  unsigned __int8 v8; // r13
  _QWORD *v9; // rdx
  int v10; // esi
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // r12d
  _QWORD *v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // edi
  unsigned __int8 v18; // cl
  unsigned int v19; // esi
  unsigned int v20; // eax
  int v21; // edx
  _QWORD *v22; // rsi
  _QWORD *v23; // r14
  __int64 v24; // r13
  bool v25; // cl
  bool v26; // zf
  int v27; // r12d
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  _QWORD *v30; // r14
  int v31; // edi
  int v32; // r15d
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rcx
  char v35; // r13
  int v36; // r12d
  char v37; // cl
  __int128 v39; // [rsp+38h] [rbp-39h] BYREF
  int v40; // [rsp+48h] [rbp-29h]
  int v41; // [rsp+4Ch] [rbp-25h]
  int v42; // [rsp+50h] [rbp-21h]
  int v43; // [rsp+54h] [rbp-1Dh]
  int v44; // [rsp+58h] [rbp-19h]
  unsigned int v45; // [rsp+5Ch] [rbp-15h]
  _QWORD *v46; // [rsp+60h] [rbp-11h] BYREF
  unsigned int v47; // [rsp+68h] [rbp-9h] BYREF
  unsigned int v48[2]; // [rsp+6Ch] [rbp-5h] BYREF
  int v49; // [rsp+74h] [rbp+3h]
  unsigned __int64 v50; // [rsp+78h] [rbp+7h]
  unsigned int v51[18]; // [rsp+80h] [rbp+Fh] BYREF
  int v55; // [rsp+F0h] [rbp+7Fh]
  int v56; // [rsp+F0h] [rbp+7Fh]

  LOBYTE(v3) = a3;
  v46 = 0LL;
  v4 = a2 + 64;
  v5 = a2;
  v39 = 0LL;
  if ( !(_BYTE)v3 )
  {
    v7 = KiPriorityBoostMaximumThreadReadyCount;
    v8 = *(_BYTE *)(a2 + 706);
    v55 = KiPriorityBoostMaximumThreadScanCount;
    v41 = 1;
    if ( (KiVelocityFlags & 0xC000000) != 0 )
    {
      if ( a1->SharedQueueScanOwner )
      {
        LODWORD(v3) = __popcnt(*(_QWORD *)(*(_QWORD *)(a2 + 720) + 80LL) & *(_QWORD *)(a2 + 712));
        if ( (_DWORD)v3 )
        {
          if ( (KiVelocityFlags & 0x8000000) != 0 )
            v7 = v3 * KiPriorityBoostMaximumThreadReadyCount;
          if ( (KiVelocityFlags & 0x4000000) != 0 )
            v55 = v3 * KiPriorityBoostMaximumThreadScanCount;
        }
      }
    }
    if ( _bittest(&KiVelocityFlags, 0x15u) )
    {
      *((_QWORD *)&v39 + 1) = a2;
      *(_QWORD *)&v39 = 0LL;
      v14 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)a2, (__int64)&v39);
      if ( !v14 )
        goto LABEL_31;
      LOBYTE(v3) = KxWaitForLockOwnerShip((__int64)&v39, v14);
    }
    else
    {
      v48[0] = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
      {
        do
        {
          KeYieldProcessorEx(v48);
          v3 = *(_QWORD *)v5;
        }
        while ( *(_QWORD *)v5 );
      }
    }
    v4 = v5 + 64;
LABEL_31:
    v10 = *(_DWORD *)(v5 + 8) & 0x7FFE;
    if ( v10 )
    {
      v45 = KiLockQuantumTarget;
      v44 = 15;
      v13 = MEMORY[0xFFFFF78000000320] - KiPriorityBoostReadyTimeTicks;
      goto LABEL_46;
    }
    if ( _bittest(&KiVelocityFlags, 0x15u) )
    {
      _m_prefetchw(&v39);
      v3 = v39;
      if ( (_QWORD)v39 )
        goto LABEL_36;
      v3 = _InterlockedCompareExchange64(*((volatile signed __int64 **)&v39 + 1), 0LL, (signed __int64)&v39);
      if ( (__int128 *)v3 != &v39 )
      {
        v3 = KxWaitForLockChainValid((__int64 *)&v39);
LABEL_36:
        v15 = v3 + 8;
        *(_QWORD *)&v39 = 0LL;
        v16 = *((_QWORD *)&v39 + 1);
        LOBYTE(v3) = v16 ^ _InterlockedExchange64((volatile __int64 *)(v3 + 8), *((__int64 *)&v39 + 1));
        if ( (v3 & 4) != 0 )
          LOBYTE(v3) = KeWakeAddressAll(v15, v16);
      }
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)v5, 0LL);
    }
    v6 = 1;
    goto LABEL_44;
  }
  v6 = 8;
  v7 = KiNormalPriorityBoostMaximumThreadReadyCount * *(unsigned __int8 *)(a2 + 708);
  v8 = *(_BYTE *)(a2 + 707);
  v41 = 8;
  if ( !_bittest(&KiVelocityFlags, 0x15u) )
  {
    v47 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    {
      do
      {
        KeYieldProcessorEx(&v47);
        v3 = *(_QWORD *)v5;
      }
      while ( *(_QWORD *)v5 );
    }
    v6 = 8;
    goto LABEL_10;
  }
  *((_QWORD *)&v39 + 1) = a2;
  *(_QWORD *)&v39 = 0LL;
  v9 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)a2, (__int64)&v39);
  if ( v9 )
  {
    LOBYTE(v3) = KxWaitForLockOwnerShip((__int64)&v39, v9);
LABEL_10:
    v4 = v5 + 64;
  }
  v10 = *(_DWORD *)(v5 + 8) & 0x300;
  if ( !v10 )
  {
    if ( _bittest(&KiVelocityFlags, 0x15u) )
    {
      _m_prefetchw(&v39);
      v3 = v39;
      if ( (_QWORD)v39 )
        goto LABEL_16;
      v3 = _InterlockedCompareExchange64(*((volatile signed __int64 **)&v39 + 1), 0LL, (signed __int64)&v39);
      if ( (__int128 *)v3 != &v39 )
      {
        v3 = KxWaitForLockChainValid((__int64 *)&v39);
LABEL_16:
        v11 = v3 + 8;
        *(_QWORD *)&v39 = 0LL;
        v12 = *((_QWORD *)&v39 + 1);
        LOBYTE(v3) = v12 ^ _InterlockedExchange64((volatile __int64 *)(v3 + 8), *((__int64 *)&v39 + 1));
        if ( (v3 & 4) != 0 )
          LOBYTE(v3) = KeWakeAddressAll(v11, v12);
      }
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)v5, 0LL);
    }
LABEL_92:
    *(_BYTE *)(v5 + 707) = v6;
    return v3;
  }
  v55 = KiPriorityBoostMaximumThreadScanCount;
  v13 = MEMORY[0xFFFFF78000000320] - KiNormalPriorityBoostReadyTimeTicks;
  v44 = 11;
  v45 = KiCyclesPerClockQuantum * KiNormalPriorityBoostingPeriodMultiplier;
LABEL_46:
  v17 = v55;
  v18 = v8;
  LODWORD(v50) = v8;
  v19 = __ROR4__(v10, v8);
  v40 = v13;
  v46 = 0LL;
  do
  {
    _BitScanForward(&v20, v19);
    v48[1] = v20;
    v49 = v19 ^ (1 << v20);
    v21 = (v18 + (_BYTE)v20) & 0x1F;
    v3 = v4 + 16LL * ((v18 + (_BYTE)v20) & 0x1F);
    v43 = v21;
    v22 = (_QWORD *)v3;
    v23 = *(_QWORD **)v3;
    do
    {
      v24 = (__int64)(v23 - 27);
      v25 = 0;
      v26 = (*(_DWORD *)(v23 - 12) & 0x400000) == 0;
      v23 = (_QWORD *)*v23;
      if ( !v26 )
      {
        LODWORD(v3) = KiReadGuestSchedulerAssistPriority(v24, 0LL);
        LOBYTE(v21) = v43;
        v25 = (_DWORD)v3 != *(_DWORD *)(v24 + 1024);
      }
      v27 = v13 - *(_DWORD *)(v24 + 436);
      if ( v27 > 0 || v25 )
      {
        KiRemoveThreadFromSharedReadyQueue(v5, v24, v21);
        LOBYTE(v3) = KiInsertDeferredReadyList((__int64 *)&v46, v24);
        if ( v27 > 0 )
          --v7;
      }
      --v17;
      if ( v23 == v22 )
        break;
      if ( !v7 )
        break;
      v13 = v40;
      LOBYTE(v21) = v43;
    }
    while ( v17 );
    v19 = v49;
    v56 = v17;
    v42 = v7;
    if ( !v49 )
      break;
    if ( !v7 )
      break;
    v13 = v40;
    v4 = v5 + 64;
    v18 = v50;
  }
  while ( v17 );
  if ( _bittest(&KiVelocityFlags, 0x15u) )
  {
    _m_prefetchw(&v39);
    v3 = v39;
    if ( !(_QWORD)v39 )
    {
      v3 = _InterlockedCompareExchange64(*((volatile signed __int64 **)&v39 + 1), 0LL, (signed __int64)&v39);
      if ( (__int128 *)v3 == &v39 )
        goto LABEL_67;
      v3 = KxWaitForLockChainValid((__int64 *)&v39);
    }
    v28 = v3 + 8;
    *(_QWORD *)&v39 = 0LL;
    v29 = *((_QWORD *)&v39 + 1);
    LOBYTE(v3) = v29 ^ _InterlockedExchange64((volatile __int64 *)(v3 + 8), *((__int64 *)&v39 + 1));
    if ( (v3 & 4) != 0 )
      LOBYTE(v3) = KeWakeAddressAll(v28, v29);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)v5, 0LL);
  }
LABEL_67:
  v30 = v46;
  v6 = v41;
  if ( v46 )
  {
    v31 = v40;
    v32 = v44;
    do
    {
      v33 = (unsigned __int64)(v30 - 27);
      v34 = *(v30 - 18);
      v35 = 0;
      v30 = (_QWORD *)*v30;
      v50 = v34;
      v51[0] = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(v51);
        while ( *(_QWORD *)(v33 + 64) );
      }
      v36 = *(char *)(v33 + 195);
      if ( v31 - *(_DWORD *)(v33 + 436) > 0 && v36 < v32 )
      {
        v35 = 1;
        KiSetPriorityBoost(0LL, v33, (unsigned int)v32, v50, v45);
      }
      *(_QWORD *)(v33 + 64) = 0LL;
      if ( v35 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
        EtwTraceAntiStarvationBoost(v33, (unsigned int)v36);
      LOBYTE(v3) = KiDeferredReadyThread(a1, v33, 0LL);
    }
    while ( v30 );
    v5 = a2;
    v6 = v41;
    v7 = v42;
  }
  if ( v56 && v7 )
  {
    v37 = a3;
  }
  else
  {
    v37 = a3;
    LODWORD(v3) = v43 + 1;
    if ( a3 )
    {
      if ( (unsigned int)v3 <= 9 )
        v6 = v43 + 1;
    }
    else
    {
      if ( (unsigned int)v3 > 0xE )
        LOBYTE(v3) = v6;
      v6 = v3;
    }
  }
  if ( v37 )
    goto LABEL_92;
LABEL_44:
  *(_BYTE *)(v5 + 706) = v6;
  return v3;
}
