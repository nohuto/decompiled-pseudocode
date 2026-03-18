/*
 * XREFs of KeQueryValuesThread @ 0x1403DE8C0
 * Callers:
 *     PsQueryStatisticsProcess @ 0x1408DD540 (PsQueryStatisticsProcess.c)
 *     NtQueryInformationThread @ 0x1409C32F0 (NtQueryInformationThread.c)
 *     ExpGetProcessInformation @ 0x140AD0210 (ExpGetProcessInformation.c)
 * Callees:
 *     KiReleaseThreadStateLock @ 0x140201E60 (KiReleaseThreadStateLock.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeQueryValuesThread(__int64 a1, __int64 a2)
{
  char v3; // di
  __int64 CurrentIrql; // rsi
  int v6; // ebx
  int v7; // r12d
  __int64 v8; // rdi
  volatile __int64 *v9; // r14
  char v10; // al
  __int64 v11; // rsi
  int v12; // ebx
  unsigned __int64 *v13; // r8
  unsigned __int64 v14; // r9
  int v15; // edx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  struct _KPRCB **v19; // rdx
  __int64 v20; // rax
  unsigned __int8 v21; // dl
  int v22; // ebx
  int v23; // ebx
  unsigned __int64 *v24; // r8
  unsigned __int64 v25; // r9
  int v26; // edx
  __int64 v27; // rsi
  int v28; // ebx
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
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql);
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait();
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
          v27 = *(unsigned int *)(a1 + 536);
          if ( (int)v27 >= 0 )
          {
            v8 = KiProcessorBlock[v27];
            v28 = 0;
            v37 = v8 & 0xFFFFFFFFFFFFFFFEuLL;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
            {
              do
              {
                if ( (++v28 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && KiCheckVpBackingLongSpinWaitHypercall() )
                {
                  HvlNotifyLongSpinWait();
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
            if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v27 )
              __fastfail(0x1Eu);
            KiReleasePrcbLocksForIsolationUnit((__int64 *)&v37);
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
                HvlNotifyLongSpinWait();
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
          v13 = 0LL;
          v14 = v37 & 0xFFFFFFFFFFFFFFFEuLL;
          v15 = 0;
          v39 = v37 & 0xFFFFFFFFFFFFFFFEuLL;
          if ( (v37 & 1) == 0 )
          {
            v13 = &v39;
            v15 = 1;
            goto LABEL_40;
          }
          if ( (v37 & 1) == 1 )
          {
            v13 = (unsigned __int64 *)(*(_QWORD *)(v14 + 36440) + 8LL);
            v15 = **(unsigned __int8 **)(v14 + 36440);
          }
          if ( !v15 )
            goto LABEL_82;
          do
LABEL_40:
            _InterlockedAnd64((volatile signed __int64 *)(v13[--v15] + 48), 0LL);
          while ( v15 );
          v37 = 0LL;
        }
      }
      v16 = *(unsigned int *)(a1 + 536);
      if ( (int)v16 < 0 )
        break;
      v8 = KiProcessorBlock[v16];
      v23 = 0;
      v37 = v8 & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
      {
        do
        {
          if ( (++v23 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait();
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v8 + 48) );
      }
      if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v16 )
        goto LABEL_99;
      v24 = 0LL;
      v25 = v37 & 0xFFFFFFFFFFFFFFFEuLL;
      v26 = 0;
      v40 = v37 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (v37 & 1) == 0 )
      {
        v24 = &v40;
        v26 = 1;
        do
LABEL_81:
          _InterlockedAnd64((volatile signed __int64 *)(v24[--v26] + 48), 0LL);
        while ( v26 );
        goto LABEL_82;
      }
      if ( (v37 & 1) == 1 )
      {
        v24 = (unsigned __int64 *)(*(_QWORD *)(v25 + 36440) + 8LL);
        v26 = **(unsigned __int8 **)(v25 + 36440);
      }
      if ( v26 )
        goto LABEL_81;
LABEL_82:
      v37 = 0LL;
    }
    v17 = (unsigned int)v16;
    LODWORD(v17) = v16 & 0x7FFFFFFF;
    v18 = KiProcessorBlock[v17];
    v9 = *(volatile __int64 **)(v18 + 36424);
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      *((_QWORD *)&v36 + 1) = *(_QWORD *)(v18 + 36424);
      *(_QWORD *)&v36 = 0LL;
      v19 = (struct _KPRCB **)_InterlockedExchange64(v9, (__int64)&v36);
      if ( v19 )
        KxWaitForLockOwnerShip((struct _KPRCB *)&v36, v19);
    }
    else
    {
      v22 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      {
        do
        {
          if ( (++v22 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait();
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *v9 );
      }
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v16 )
      break;
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      _m_prefetchw(&v36);
      v20 = v36;
      if ( (_QWORD)v36 )
      {
LABEL_52:
        *(_QWORD *)&v36 = 0LL;
        v21 = BYTE8(v36);
        if ( ((v21 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v20 + 8), *((__int64 *)&v36 + 1))) & 4) != 0 )
          KeWakeAddressAll(v20 + 8, (__int64)KiProcessorBlock);
      }
      else if ( (__int128 *)_InterlockedCompareExchange64(
                              *((volatile signed __int64 **)&v36 + 1),
                              0LL,
                              (signed __int64)&v36) != &v36 )
      {
        v20 = KxWaitForLockChainValid((__int64 *)&v36);
        goto LABEL_52;
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
