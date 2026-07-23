/*
 * XREFs of KeQueryValuesThread @ 0x1403CAE20
 * Callers:
 *     PsQueryStatisticsProcess @ 0x14085E140 (PsQueryStatisticsProcess.c)
 *     NtQueryInformationThread @ 0x1409910D0 (NtQueryInformationThread.c)
 *     ExpGetProcessInformation @ 0x140ADC640 (ExpGetProcessInformation.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiReleaseThreadStateLock @ 0x1403A0FC0 (KiReleaseThreadStateLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeQueryValuesThread(__int64 a1, __int64 a2)
{
  char v3; // di
  __int64 CurrentIrql; // rsi
  unsigned int v6; // ebx
  int v7; // r12d
  __int64 v8; // rdi
  volatile __int64 *v9; // r14
  char v10; // al
  __int64 v11; // rsi
  unsigned int v12; // ebx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // rax
  unsigned __int8 v18; // dl
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  unsigned __int64 *v21; // r8
  unsigned __int64 v22; // r9
  int v23; // edx
  __int64 v24; // rsi
  unsigned int v25; // ebx
  unsigned __int64 *v26; // r8
  unsigned __int64 v27; // r9
  int v28; // edx
  char v29; // al
  int v30; // ecx
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  char v33; // al
  __int64 v34; // r8
  __int64 result; // rax
  __int128 v36; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v37; // [rsp+90h] [rbp+38h] BYREF
  __int64 v38; // [rsp+98h] [rbp+40h]
  unsigned __int64 v39; // [rsp+A0h] [rbp+48h] BYREF
  unsigned __int64 v40; // [rsp+A8h] [rbp+50h] BYREF

  v37 = 0LL;
  v3 = 0;
  *(_DWORD *)a2 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v38 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, 2LL);
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
  {
    LOBYTE(v7) = *(_BYTE *)(a1 + 388);
    *(_BYTE *)(a2 + 10) = 1;
    goto LABEL_114;
  }
  v36 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v7 = *(unsigned __int8 *)(a1 + 388);
          v8 = 0LL;
          v9 = 0LL;
          if ( v7 != 3 )
            break;
          v24 = *(unsigned int *)(a1 + 536);
          if ( (int)v24 >= 0 )
          {
            v8 = KiProcessorBlock[v24];
            v25 = 0;
            v37 = v8 & 0xFFFFFFFFFFFFFFFEuLL;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
            {
              do
              {
                if ( (++v25 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && KiCheckVpBackingLongSpinWaitHypercall() )
                {
                  HvlNotifyLongSpinWait(v25);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(_QWORD *)(v8 + 48) );
            }
            if ( a1 == *(_QWORD *)(v8 + 16) )
              goto LABEL_99;
            if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v24 )
              __fastfail(0x1Eu);
            v26 = 0LL;
            v27 = v37 & 0xFFFFFFFFFFFFFFFEuLL;
            v28 = 0;
            v40 = v37 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( (v37 & 1) != 0 )
            {
              if ( (v37 & 1) == 1 )
              {
                v26 = (unsigned __int64 *)(*(_QWORD *)(v27 + 36440) + 8LL);
                v28 = **(unsigned __int8 **)(v27 + 36440);
              }
              if ( !v28 )
                goto LABEL_75;
            }
            else
            {
              v26 = &v40;
              v28 = 1;
            }
            do
              _InterlockedAnd64((volatile signed __int64 *)(v26[--v28] + 48), 0LL);
            while ( v28 );
            v37 = 0LL;
          }
        }
        if ( *(_BYTE *)(a1 + 388) == 1 )
          break;
        if ( *(_BYTE *)(a1 + 388) != 2 )
        {
          if ( *(_BYTE *)(a1 + 388) != 5 )
            goto LABEL_99;
          v10 = *(_BYTE *)(a1 + 112) & 7;
          if ( v10 == 1 || (unsigned __int8)(v10 - 3) <= 3u )
            goto LABEL_99;
          LOBYTE(v7) = 2;
        }
        v11 = *(unsigned int *)(a1 + 536);
        if ( (int)v11 >= 0 )
        {
          v8 = KiProcessorBlock[v11];
          v12 = 0;
          v37 = v8 & 0xFFFFFFFFFFFFFFFEuLL;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
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
            while ( *(_QWORD *)(v8 + 48) );
          }
          if ( a1 == *(_QWORD *)(v8 + 8) )
            goto LABEL_99;
          if ( *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == (_DWORD)v11 )
            __fastfail(0x4Au);
          KiReleasePrcbLocksForIsolationUnit((__int64 *)&v37);
        }
      }
      v13 = *(unsigned int *)(a1 + 536);
      if ( (int)v13 < 0 )
        break;
      v8 = KiProcessorBlock[v13];
      v20 = 0;
      v37 = v8 & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
      {
        do
        {
          if ( (++v20 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v20);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v8 + 48) );
      }
      if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v13 )
        goto LABEL_99;
      v21 = 0LL;
      v22 = v37 & 0xFFFFFFFFFFFFFFFEuLL;
      v23 = 0;
      v39 = v37 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (v37 & 1) == 0 )
      {
        v21 = &v39;
        v23 = 1;
        do
LABEL_74:
          _InterlockedAnd64((volatile signed __int64 *)(v21[--v23] + 48), 0LL);
        while ( v23 );
        goto LABEL_75;
      }
      if ( (v37 & 1) == 1 )
      {
        v21 = (unsigned __int64 *)(*(_QWORD *)(v22 + 36440) + 8LL);
        v23 = **(unsigned __int8 **)(v22 + 36440);
      }
      if ( v23 )
        goto LABEL_74;
LABEL_75:
      v37 = 0LL;
    }
    v14 = (unsigned int)v13;
    LODWORD(v14) = v13 & 0x7FFFFFFF;
    v15 = KiProcessorBlock[v14];
    v9 = *(volatile __int64 **)(v15 + 36424);
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      *((_QWORD *)&v36 + 1) = *(_QWORD *)(v15 + 36424);
      *(_QWORD *)&v36 = 0LL;
      v16 = (_QWORD *)_InterlockedExchange64(v9, (__int64)&v36);
      if ( v16 )
        KxWaitForLockOwnerShip((__int64)&v36, v16);
    }
    else
    {
      v19 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      {
        do
        {
          if ( (++v19 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v19);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *v9 );
      }
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v13 )
      break;
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      _m_prefetchw(&v36);
      v17 = v36;
      if ( (_QWORD)v36 )
      {
LABEL_45:
        *(_QWORD *)&v36 = 0LL;
        v18 = BYTE8(v36);
        if ( ((v18 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v17 + 8), *((__int64 *)&v36 + 1))) & 4) != 0 )
          KeWakeAddressAll(v17 + 8, (__int64)KiProcessorBlock);
      }
      else if ( (__int128 *)_InterlockedCompareExchange64(
                              *((volatile signed __int64 **)&v36 + 1),
                              0LL,
                              (signed __int64)&v36) != &v36 )
      {
        v17 = KxWaitForLockChainValid((__int64 *)&v36);
        goto LABEL_45;
      }
    }
    else
    {
      _InterlockedAnd64(v9, 0LL);
    }
  }
  v8 = 0LL;
LABEL_99:
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 436);
  v29 = *(_BYTE *)(a1 + 388);
  v30 = *(_DWORD *)(a1 + 132);
  if ( v29 == 1 || v29 == 7 && (*(_DWORD *)(a1 + 116) & 2) != 0 )
    v30 += MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436);
  *(_DWORD *)(a2 + 4) = v30;
  v31 = *(_QWORD *)(a1 + 992);
  v32 = *(_QWORD *)(a1 + 1000);
  if ( *(_BYTE *)(a1 + 388) == 5 )
  {
    v33 = *(_BYTE *)(a1 + 112) & 7;
    if ( v33 == 1 || (unsigned __int8)(v33 - 3) <= 3u )
    {
      v34 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436));
      if ( *(_BYTE *)(a1 + 391) )
        v32 += v34;
      else
        v31 += v34;
    }
  }
  *(_QWORD *)(a2 + 24) = v32;
  *(_QWORD *)(a2 + 16) = v31;
  KiReleaseThreadStateLock(v31, v8, (__int64 *)&v37, v9, (volatile signed __int64 **)&v36);
  v3 = *(_BYTE *)(a1 + 643);
  LOBYTE(CurrentIrql) = v38;
  *(_BYTE *)(a2 + 10) = *(_BYTE *)(a1 + 195);
  if ( (_BYTE)v7 == 5 && (*(_BYTE *)(a1 + 112) & 7) == 4 )
    v3 = 5;
LABEL_114:
  *(_BYTE *)(a2 + 11) = *(_BYTE *)(a1 + 563);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)CurrentIrql);
  result = (unsigned __int8)CurrentIrql;
  __writecr8((unsigned __int8)CurrentIrql);
  *(_BYTE *)(a2 + 8) = v7;
  *(_BYTE *)(a2 + 9) = v3;
  return result;
}
