/*
 * XREFs of KiScanSharedReadyThreads @ 0x1404657E0
 * Callers:
 *     KiNormalPriorityReadyScan @ 0x140251B60 (KiNormalPriorityReadyScan.c)
 *     KiQuantumEnd @ 0x140293C70 (KiQuantumEnd.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x14030D6C0 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14030EBE4 (KiReadGuestSchedulerAssistPriority.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiDeferredReadyThread @ 0x1403386A0 (KiDeferredReadyThread.c)
 *     KiSetPriorityBoost @ 0x140338930 (KiSetPriorityBoost.c)
 *     KiInsertDeferredReadyList @ 0x1403CBE30 (KiInsertDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     EtwTraceAntiStarvationBoost @ 0x14064D430 (EtwTraceAntiStarvationBoost.c)
 */

char __fastcall KiScanSharedReadyThreads(struct _KPRCB *a1, __int64 a2, char a3)
{
  signed __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rbx
  char v6; // di
  int v7; // r12d
  unsigned __int8 v8; // r15
  _QWORD *v9; // rdx
  int v10; // esi
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  _QWORD *v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int8 v17; // cl
  unsigned int v18; // esi
  unsigned int v19; // eax
  int v20; // edx
  _QWORD *v21; // r14
  _QWORD *v22; // rdi
  __int64 v23; // r15
  bool v24; // cl
  bool v25; // zf
  int v26; // r13d
  int v27; // r13d
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  _QWORD *v30; // r14
  int v31; // r13d
  unsigned int v32; // edi
  int v33; // ebx
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // rcx
  int v36; // r15d
  char v37; // cl
  __int128 v39; // [rsp+38h] [rbp-49h] BYREF
  int v40; // [rsp+48h] [rbp-39h]
  int v41; // [rsp+4Ch] [rbp-35h]
  int v42; // [rsp+50h] [rbp-31h]
  int v43; // [rsp+58h] [rbp-29h]
  int v44; // [rsp+60h] [rbp-21h]
  int v45; // [rsp+64h] [rbp-1Dh]
  _QWORD *v46; // [rsp+68h] [rbp-19h] BYREF
  unsigned int v47; // [rsp+70h] [rbp-11h] BYREF
  unsigned int v48[2]; // [rsp+74h] [rbp-Dh] BYREF
  int v49; // [rsp+7Ch] [rbp-5h]
  unsigned __int64 v50; // [rsp+80h] [rbp-1h]
  unsigned int v51[20]; // [rsp+88h] [rbp+7h] BYREF
  int v55; // [rsp+100h] [rbp+7Fh]
  char v56; // [rsp+100h] [rbp+7Fh]

  LOBYTE(v3) = a3;
  v46 = 0LL;
  v4 = a2 + 64;
  v5 = a2;
  v39 = 0LL;
  if ( !(_BYTE)v3 )
  {
    v8 = *(_BYTE *)(a2 + 706);
    v40 = 1;
    if ( _bittest(&KiVelocityFlags, 0x15u) )
    {
      *((_QWORD *)&v39 + 1) = a2;
      *(_QWORD *)&v39 = 0LL;
      v14 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)a2, (__int64)&v39);
      if ( !v14 )
        goto LABEL_24;
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
LABEL_24:
    v10 = *(_DWORD *)(v5 + 8) & 0x7FFE;
    if ( v10 )
    {
      v7 = 10;
      v44 = KiLockQuantumTarget;
      v45 = 15;
      v13 = MEMORY[0xFFFFF78000000320] - 300;
      goto LABEL_39;
    }
    if ( _bittest(&KiVelocityFlags, 0x15u) )
    {
      _m_prefetchw(&v39);
      v3 = v39;
      if ( (_QWORD)v39 )
        goto LABEL_29;
      v3 = _InterlockedCompareExchange64(*((volatile signed __int64 **)&v39 + 1), 0LL, (signed __int64)&v39);
      if ( (__int128 *)v3 != &v39 )
      {
        v3 = KxWaitForLockChainValid((__int64 *)&v39);
LABEL_29:
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
    goto LABEL_37;
  }
  v6 = 8;
  v7 = KiNormalPriorityBoostMaximumThreadReadyCount * *(unsigned __int8 *)(a2 + 708);
  v8 = *(_BYTE *)(a2 + 707);
  v40 = 8;
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
LABEL_85:
    *(_BYTE *)(v5 + 707) = v6;
    return v3;
  }
  v45 = 11;
  v13 = MEMORY[0xFFFFF78000000320] - KiNormalPriorityBoostReadyTimeTicks;
  v44 = KiCyclesPerClockQuantum * KiNormalPriorityBoostingPeriodMultiplier;
LABEL_39:
  v17 = v8;
  LODWORD(v50) = v8;
  v18 = __ROR4__(v10, v8);
  v55 = v13;
  v41 = 16;
  v46 = 0LL;
  do
  {
    _BitScanForward(&v19, v18);
    v48[1] = v19;
    v49 = v18 ^ (1 << v19);
    v20 = (v17 + (_BYTE)v19) & 0x1F;
    v3 = v4 + 16LL * ((v17 + (_BYTE)v19) & 0x1F);
    v42 = v20;
    v21 = (_QWORD *)v3;
    v22 = *(_QWORD **)v3;
    do
    {
      v23 = (__int64)(v22 - 27);
      v24 = 0;
      v25 = (*(_DWORD *)(v22 - 12) & 0x400000) == 0;
      v22 = (_QWORD *)*v22;
      if ( !v25 )
      {
        LODWORD(v3) = KiReadGuestSchedulerAssistPriority(v23, 0LL);
        LOBYTE(v20) = v42;
        v24 = (_DWORD)v3 != *(_DWORD *)(v23 + 1024);
      }
      v26 = v55 - *(_DWORD *)(v23 + 436);
      if ( v26 > 0 || v24 )
      {
        KiRemoveThreadFromSharedReadyQueue(v5, v23, v20);
        LOBYTE(v3) = KiInsertDeferredReadyList((__int64 *)&v46, v23);
        if ( v26 > 0 )
          --v7;
      }
      v27 = --v41;
      if ( v22 == v21 )
        break;
      if ( !v7 )
        break;
      LOBYTE(v20) = v42;
    }
    while ( v27 );
    v18 = v49;
    v43 = v7;
    if ( !v49 )
      break;
    if ( !v7 )
      break;
    v17 = v50;
    v4 = v5 + 64;
  }
  while ( v27 );
  if ( _bittest(&KiVelocityFlags, 0x15u) )
  {
    _m_prefetchw(&v39);
    v3 = v39;
    if ( !(_QWORD)v39 )
    {
      v3 = _InterlockedCompareExchange64(*((volatile signed __int64 **)&v39 + 1), 0LL, (signed __int64)&v39);
      if ( (__int128 *)v3 == &v39 )
        goto LABEL_60;
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
LABEL_60:
  v30 = v46;
  v6 = v40;
  if ( v46 )
  {
    v31 = v55;
    v32 = v44;
    v33 = v45;
    do
    {
      v34 = (unsigned __int64)(v30 - 27);
      v35 = *(v30 - 18);
      v30 = (_QWORD *)*v30;
      v50 = v35;
      v56 = 0;
      v51[0] = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(v51);
        while ( *(_QWORD *)(v34 + 64) );
      }
      v36 = *(char *)(v34 + 195);
      if ( v31 - *(_DWORD *)(v34 + 436) > 0 && v36 < v33 )
      {
        v56 = 1;
        KiSetPriorityBoost(0LL, v34, (unsigned int)v33, v50, v32);
      }
      *(_QWORD *)(v34 + 64) = 0LL;
      if ( v56 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
        EtwTraceAntiStarvationBoost(v34, (unsigned int)v36);
      LOBYTE(v3) = KiDeferredReadyThread(a1, v34, 0LL);
    }
    while ( v30 );
    v5 = a2;
    v6 = v40;
    v7 = v43;
    v27 = v41;
  }
  if ( v27 && v7 )
  {
    v37 = a3;
  }
  else
  {
    v37 = a3;
    LODWORD(v3) = v42 + 1;
    if ( a3 )
    {
      if ( (unsigned int)v3 <= 9 )
        v6 = v42 + 1;
    }
    else
    {
      if ( (unsigned int)v3 > 0xE )
        LOBYTE(v3) = v6;
      v6 = v3;
    }
  }
  if ( v37 )
    goto LABEL_85;
LABEL_37:
  *(_BYTE *)(v5 + 706) = v6;
  return v3;
}
