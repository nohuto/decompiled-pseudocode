/*
 * XREFs of KeQueryEffectivePriorityThread @ 0x1404DD960
 * Callers:
 *     <none>
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402D1150 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiReleaseThreadLockLowerIrql @ 0x14032DD90 (KiReleaseThreadLockLowerIrql.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiQueryEffectivePriorityThread @ 0x14036A4C0 (KiQueryEffectivePriorityThread.c)
 *     KiReleaseThreadStateLock @ 0x1403A0FC0 (KiReleaseThreadStateLock.c)
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x1404AF630 (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 *     KiQueryEffectivePriorityThreadWithStateLock @ 0x1405C2794 (KiQueryEffectivePriorityThreadWithStateLock.c)
 */

__int64 __fastcall KeQueryEffectivePriorityThread(struct _KTHREAD *a1)
{
  unsigned int EffectivePriorityThreadWithStateLock; // r13d
  unsigned int Priority; // eax
  __int64 *v4; // rdx
  unsigned __int8 State; // r12
  __int64 v6; // rdi
  volatile __int64 *v7; // r14
  unsigned __int64 v8; // rcx
  char v9; // al
  __int64 NextProcessor; // rsi
  unsigned int v11; // ebx
  __int64 v12; // rsi
  unsigned int v13; // ebx
  unsigned __int64 *v14; // r8
  unsigned __int64 v15; // r9
  int v16; // edx
  unsigned __int64 *v17; // r8
  unsigned __int64 v18; // r9
  int v19; // edx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  char v25; // dl
  char v26; // al
  unsigned int v27; // ebx
  unsigned int v28; // ebx
  unsigned __int64 *v29; // r8
  unsigned __int64 v30; // r9
  int v31; // edx
  bool v32; // zf
  unsigned __int64 v34; // [rsp+30h] [rbp-9h] BYREF
  _OWORD v35[2]; // [rsp+38h] [rbp-1h] BYREF
  unsigned __int8 v36; // [rsp+A0h] [rbp+67h] BYREF
  unsigned __int64 v37; // [rsp+A8h] [rbp+6Fh] BYREF
  unsigned __int64 v38; // [rsp+B0h] [rbp+77h] BYREF
  unsigned __int64 v39; // [rsp+B8h] [rbp+7Fh] BYREF

  if ( (*((_DWORD *)&a1->0 + 1) & 0x400000) != 0 )
    KiUpdateVpBackingThreadPriorityOnPriorityQuery((ULONG_PTR)a1);
  if ( (KiVelocityFlags & 0x2000000) == 0 )
    return (unsigned int)KiQueryEffectivePriorityThread((__int64)a1, 0LL);
  if ( (unsigned int)KiVelocityEffectivePriorityNotAlwaysRankBiasedVariant >= 2 )
  {
    if ( KiVelocityEffectivePriorityNotAlwaysRankBiasedVariant == 2 )
      return (unsigned __int8)a1->Priority;
    return (unsigned int)KiQueryEffectivePriorityThread((__int64)a1, 0LL);
  }
  Priority = (unsigned __int8)a1->Priority;
  v36 = 0;
  EffectivePriorityThreadWithStateLock = Priority;
  v35[0] = 0LL;
  if ( Priority >= 0x10 || !a1->SchedulingGroup )
    return EffectivePriorityThreadWithStateLock;
  v37 = 0LL;
  KiAcquireThreadLockRaiseToDpc((__int64)a1, &v36);
LABEL_10:
  while ( 2 )
  {
    v4 = KiProcessorBlock;
    while ( 1 )
    {
      while ( 1 )
      {
        State = a1->State;
        v6 = 0LL;
        v7 = 0LL;
        v8 = (unsigned int)State - 1;
        if ( State == 1 )
          break;
        v8 = (unsigned int)State - 2;
        if ( State == 2 )
        {
LABEL_18:
          NextProcessor = a1->NextProcessor;
          if ( (int)NextProcessor >= 0 )
          {
            v6 = KiProcessorBlock[NextProcessor];
            v11 = 0;
            v37 = v6 & 0xFFFFFFFFFFFFFFFEuLL;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 48), 0LL) )
            {
              do
              {
                if ( (++v11 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && KiCheckVpBackingLongSpinWaitHypercall() )
                {
                  HvlNotifyLongSpinWait(v11);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(_QWORD *)(v6 + 48) );
            }
            if ( a1 == *(struct _KTHREAD **)(v6 + 8) )
              goto LABEL_104;
            if ( a1->WaitBlockFill6[68] == 2 && a1->NextProcessor == (_DWORD)NextProcessor )
              __fastfail(0x4Au);
            v17 = 0LL;
            v18 = v37 & 0xFFFFFFFFFFFFFFFEuLL;
            v19 = 0;
            v39 = v37 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( (v37 & 1) != 0 )
            {
              if ( (v37 & 1) == 1 )
              {
                v17 = (unsigned __int64 *)(*(_QWORD *)(v18 + 36440) + 8LL);
                v19 = **(unsigned __int8 **)(v18 + 36440);
              }
              if ( !v19 )
                goto LABEL_100;
            }
            else
            {
              v17 = &v39;
              v19 = 1;
            }
            do
              _InterlockedAnd64((volatile signed __int64 *)(v17[--v19] + 48), 0LL);
            while ( v19 );
            v37 = 0LL;
            goto LABEL_10;
          }
        }
        else
        {
          v8 = (unsigned int)State - 3;
          if ( State != 3 )
          {
            if ( State != 5 )
              goto LABEL_104;
            v9 = a1->WaitRegister.Flags & 7;
            if ( v9 == 1 || (unsigned __int8)(v9 - 3) <= 3u )
              goto LABEL_104;
            State = 2;
            goto LABEL_18;
          }
          v12 = a1->NextProcessor;
          if ( (int)v12 >= 0 )
          {
            v6 = KiProcessorBlock[v12];
            v13 = 0;
            v37 = v6 & 0xFFFFFFFFFFFFFFFEuLL;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 48), 0LL) )
            {
              do
              {
                if ( (++v13 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && KiCheckVpBackingLongSpinWaitHypercall() )
                {
                  HvlNotifyLongSpinWait(v13);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(_QWORD *)(v6 + 48) );
            }
            if ( a1 == *(struct _KTHREAD **)(v6 + 16) )
              goto LABEL_104;
            if ( a1->WaitBlockFill6[68] == 3 && a1->NextProcessor == (_DWORD)v12 )
              __fastfail(0x1Eu);
            v14 = 0LL;
            v15 = v37 & 0xFFFFFFFFFFFFFFFEuLL;
            v16 = 0;
            v38 = v37 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( (v37 & 1) != 0 )
            {
              if ( (v37 & 1) == 1 )
              {
                v14 = (unsigned __int64 *)(*(_QWORD *)(v15 + 36440) + 8LL);
                v16 = **(unsigned __int8 **)(v15 + 36440);
              }
              if ( !v16 )
                goto LABEL_100;
            }
            else
            {
              v14 = &v38;
              v16 = 1;
            }
            do
              _InterlockedAnd64((volatile signed __int64 *)(v14[--v16] + 48), 0LL);
            while ( v16 );
            v37 = 0LL;
            goto LABEL_10;
          }
        }
      }
      v20 = a1->NextProcessor;
      if ( (int)v20 >= 0 )
        break;
      v21 = (unsigned int)v20;
      LODWORD(v21) = v20 & 0x7FFFFFFF;
      v22 = KiProcessorBlock[v21];
      v7 = *(volatile __int64 **)(v22 + 36424);
      if ( (KiVelocityFlags & 0x200000) != 0 )
      {
        *((_QWORD *)&v35[0] + 1) = *(_QWORD *)(v22 + 36424);
        *(_QWORD *)&v35[0] = 0LL;
        v4 = (__int64 *)_InterlockedExchange64(v7, (__int64)v35);
        if ( v4 )
          KxWaitForLockOwnerShip((__int64)v35, v4);
      }
      else
      {
        v27 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
        {
          do
          {
            if ( (++v27 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v27);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *v7 );
        }
      }
      if ( a1->WaitBlockFill6[68] == 1 && a1->NextProcessor == (_DWORD)v20 )
      {
        v6 = 0LL;
        goto LABEL_104;
      }
      if ( (KiVelocityFlags & 0x200000) == 0 )
      {
        _InterlockedAnd64(v7, 0LL);
        goto LABEL_10;
      }
      _m_prefetchw(v35);
      v23 = *(_QWORD *)&v35[0];
      if ( *(_QWORD *)&v35[0] )
      {
LABEL_70:
        v24 = v23 + 8;
        *(_QWORD *)&v35[0] = 0LL;
        v25 = BYTE8(v35[0]);
        v26 = v25 ^ _InterlockedExchange64((volatile __int64 *)(v23 + 8), *((__int64 *)&v35[0] + 1));
        v4 = KiProcessorBlock;
        if ( (v26 & 4) != 0 )
        {
          KeWakeAddressAll(v24, (__int64)KiProcessorBlock);
          goto LABEL_10;
        }
      }
      else
      {
        v4 = KiProcessorBlock;
        if ( (_OWORD *)_InterlockedCompareExchange64(
                         *((volatile signed __int64 **)&v35[0] + 1),
                         0LL,
                         (signed __int64)v35) != v35 )
        {
          v23 = KxWaitForLockChainValid((__int64 *)v35);
          goto LABEL_70;
        }
      }
    }
    v6 = KiProcessorBlock[v20];
    v28 = 0;
    v37 = v6 & 0xFFFFFFFFFFFFFFFEuLL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 48), 0LL) )
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
      while ( *(_QWORD *)(v6 + 48) );
    }
    if ( a1->WaitBlockFill6[68] != 1 || a1->NextProcessor != (_DWORD)v20 )
    {
      v29 = 0LL;
      v30 = v37 & 0xFFFFFFFFFFFFFFFEuLL;
      v31 = 0;
      v34 = v37 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (v37 & 1) == 0 )
      {
        v29 = &v34;
        v31 = 1;
        goto LABEL_99;
      }
      if ( (v37 & 1) == 1 )
      {
        v29 = (unsigned __int64 *)(*(_QWORD *)(v30 + 36440) + 8LL);
        v31 = **(unsigned __int8 **)(v30 + 36440);
      }
      while ( v31 )
LABEL_99:
        _InterlockedAnd64((volatile signed __int64 *)(v29[--v31] + 48), 0LL);
LABEL_100:
      v37 = 0LL;
      continue;
    }
    break;
  }
LABEL_104:
  if ( !KiVelocityEffectivePriorityNotAlwaysRankBiasedVariant )
  {
    if ( State == 2 )
    {
      v32 = a1 == KeGetCurrentThread();
      goto LABEL_109;
    }
    goto LABEL_110;
  }
  if ( State == 5 )
  {
    v32 = a1->WaitMode == 1;
LABEL_109:
    if ( v32 )
LABEL_110:
      EffectivePriorityThreadWithStateLock = KiQueryEffectivePriorityThreadWithStateLock(a1, v4);
  }
  KiReleaseThreadStateLock(v8, v6, (__int64 *)&v37, v7, (volatile signed __int64 **)v35);
  KiReleaseThreadLockLowerIrql((__int64)a1, v36);
  return EffectivePriorityThreadWithStateLock;
}
