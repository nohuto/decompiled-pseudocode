/*
 * XREFs of KiAbEntryRemoveFromTree @ 0x14025CEE0
 * Callers:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14025CDA0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KeAbPreWait @ 0x14033E810 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140341510 (ExpAcquireFastResourceSharedSlow.c)
 *     KiAbCrossThreadRelease @ 0x1403D86A8 (KiAbCrossThreadRelease.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1403DD330 (ExpAcquireFastResourceExclusiveSlow.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14020D580 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14020D650 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     RtlRbRemoveNode @ 0x1402BE130 (RtlRbRemoveNode.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiAbEntryRemoveFromTree(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char v5; // cl
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  volatile LONG *v8; // rsi
  __int64 v9; // r13
  unsigned __int8 CurrentIrql; // r12
  int v11; // r15d
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  int v16; // ecx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 *v19; // rsi
  unsigned __int64 *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 result; // rax
  _QWORD *v25; // rcx
  __int64 v26; // rax
  bool v27; // zf
  __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  __int64 v30; // rdi
  _QWORD *v31; // rdx
  __int64 v32; // rcx
  _QWORD *v33; // rax
  int v34; // ecx
  unsigned int v35; // edi
  volatile LONG v36; // edx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int128 v41; // [rsp+20h] [rbp-30h] BYREF
  __int64 v42; // [rsp+30h] [rbp-20h]
  __int128 v43; // [rsp+38h] [rbp-18h] BYREF
  __int64 v44; // [rsp+48h] [rbp-8h]
  __int64 retaddr; // [rsp+88h] [rbp+38h]
  PEX_SPIN_LOCK SpinLock; // [rsp+98h] [rbp+48h]

  v3 = *a1;
  v42 = 0LL;
  v5 = *((_BYTE *)a1 + 8);
  v44 = 0LL;
  v6 = v3 & 0x7FFFFFFFFFFFFFFCLL;
  v41 = 0LL;
  v43 = 0LL;
  if ( v5 < 0 )
  {
    a3 = *(_QWORD *)(a1[-11 * (v5 & 0x3F) - 2] + 544);
    a2 = (unsigned int)(v6 >> 4) % *(_DWORD *)(a3 + 96);
    v9 = *(_QWORD *)(a3 + 88) + 24 * a2;
    v8 = (volatile LONG *)(v9 + 16);
  }
  else
  {
    v7 = ((v6 >> 4) & 0x3FF) << 6;
    v8 = (volatile LONG *)((char *)&KiAbTreeArray + v7 + 16);
    v9 = (__int64)&KiAbTreeArray + v7;
  }
  SpinLock = v8;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  v11 = *((_BYTE *)a1 + 11) & 1;
  if ( (*((_BYTE *)a1 + 11) & 1) != 0 )
    goto LABEL_73;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
  {
    LOBYTE(a2) = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v8, a2);
    goto LABEL_11;
  }
  _m_prefetchw((const void *)v8);
  v12 = *v8 & 0x7FFFFFFF;
  do
  {
    v13 = v12;
    v12 = _InterlockedCompareExchange(v8, v12 + 1, v12);
    if ( v13 == v12 )
      goto LABEL_11;
  }
  while ( v12 >= 0 );
  LOBYTE(a2) = -1;
  ExpWaitForSpinLockSharedAndAcquire(v8, a2);
  while ( 1 )
  {
LABEL_11:
    v14 = *(_QWORD *)(v9 + 8);
    v15 = *(_QWORD *)v9;
    if ( (v14 & 1) != 0 )
    {
      if ( !v15 )
        goto LABEL_19;
      v15 ^= v9;
    }
    v16 = v14 & 1;
    while ( v15 )
    {
      v17 = *(_QWORD *)(v15 - 16) & 0x7FFFFFFFFFFFFFFCLL;
      if ( v17 < v6 )
      {
        v18 = *(_QWORD *)(v15 + 8);
        if ( v16 && v18 )
          goto LABEL_107;
      }
      else
      {
        if ( v17 <= v6 )
          break;
        v18 = *(_QWORD *)v15;
        if ( v16 && v18 )
        {
LABEL_107:
          v15 ^= v18;
          continue;
        }
      }
      v15 = v18;
    }
LABEL_19:
    v19 = (__int64 *)(v15 - 16);
    *(_QWORD *)&v41 = 0LL;
    *((_QWORD *)&v41 + 1) = v15 - 16 + 72;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _InterlockedExchange64((volatile __int64 *)(v15 - 16 + 72), (__int64)&v41) )
        KxWaitForLockOwnerShip(&v41);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(&v41, v15 - 16 + 72);
    }
    if ( v19 != a1 )
      break;
    if ( v11 )
    {
      v20 = (unsigned __int64 *)(v19 + 7);
      if ( (v19[7] || (v20 = (unsigned __int64 *)(v19 + 5), v19[5])) && v20 )
      {
        v29 = *v20;
        v30 = *v20 - 16;
        RtlRbRemoveNode(v20, *v20);
        v31 = v19 + 2;
        *(_OWORD *)v29 = *((_OWORD *)v19 + 1);
        *(_QWORD *)(v29 + 16) = v19[4];
        if ( *(_QWORD *)v29 )
        {
          *(_QWORD *)(*(_QWORD *)v29 + 16LL) = v29 | *(_DWORD *)(*(_QWORD *)v29 + 16LL) & 3;
        }
        else
        {
          v39 = *(_QWORD *)(v9 + 8);
          if ( (v39 & 1) != 0 )
          {
            if ( v39 == 1 )
              v40 = 0LL;
            else
              v40 = v39 ^ (v9 | 1);
          }
          else
          {
            v40 = *(_QWORD *)(v9 + 8);
          }
          if ( (_QWORD *)v40 == v31 )
          {
            if ( (v39 & 1) != 0 )
            {
              *(_QWORD *)(v9 + 8) = v9 ^ v29;
              *(_BYTE *)(v9 + 8) = v9 ^ v29 | 1;
            }
            else
            {
              *(_QWORD *)(v9 + 8) = v29;
            }
          }
        }
        v32 = *(_QWORD *)(v29 + 8);
        if ( v32 )
          *(_QWORD *)(v32 + 16) = v29 | *(_DWORD *)(v32 + 16) & 3;
        v33 = (_QWORD *)(*(_QWORD *)(v29 + 16) & 0xFFFFFFFFFFFFFFFCuLL);
        if ( v33 )
        {
          if ( (_QWORD *)*v33 == v31 )
            *v33 = v29;
          else
            v33[1] = v29;
        }
        else
        {
          if ( (*(_BYTE *)(v9 + 8) & 1) != 0 )
            v29 ^= v9;
          *(_QWORD *)v9 = v29;
        }
        *((_QWORD *)&v43 + 1) = v30 + 72;
        *(_QWORD *)&v43 = 0LL;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v21 = _InterlockedExchange64((volatile __int64 *)(v30 + 72), (__int64)&v43);
          if ( v21 )
            KxWaitForLockOwnerShip(&v43);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(&v43, v30 + 72);
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *SpinLock = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(SpinLock, retaddr);
        *(_OWORD *)(v30 + 40) = *(_OWORD *)(v19 + 5);
        *(_OWORD *)(v30 + 56) = *(_OWORD *)(v19 + 7);
        *(_BYTE *)(v30 + 84) = *((_BYTE *)v19 + 84);
        v34 = *(_DWORD *)(v30 + 84) ^ (*((_DWORD *)v19 + 21) ^ *(_DWORD *)(v30 + 84)) & 0x7F00;
        *(_DWORD *)(v30 + 84) = v34;
        if ( (*((_BYTE *)v19 + 11) & 2) != 0 )
        {
          *(_BYTE *)(v30 + 84) = v34 - 1;
          *((_BYTE *)v19 + 11) &= ~2u;
        }
        if ( (*((_BYTE *)v19 + 11) & 4) != 0 )
        {
          *(_DWORD *)(v30 + 84) ^= ((unsigned __int16)*(_DWORD *)(v30 + 84) ^ (unsigned __int16)(((unsigned __int16)(*(_DWORD *)(v30 + 84) >> 8)
                                                                                                - 1) << 8)) & 0x7F00;
          *((_BYTE *)v19 + 11) &= ~4u;
        }
        *(_BYTE *)(v30 + 11) |= 1u;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
        {
          KiReleaseQueuedSpinLockInstrumented(&v43, retaddr, v22, v23);
          goto LABEL_32;
        }
        _m_prefetchw(&v43);
        v38 = v43;
        if ( !(_QWORD)v43 )
        {
          if ( (__int128 *)_InterlockedCompareExchange64(
                             *((volatile signed __int64 **)&v43 + 1),
                             0LL,
                             (signed __int64)&v43) == &v43 )
            goto LABEL_32;
          v38 = KxWaitForLockChainValid(&v43, v21, v22, v23);
        }
        *(_QWORD *)&v43 = 0LL;
        v21 = *((_QWORD *)&v43 + 1);
        if ( (((unsigned __int8)v21 ^ (unsigned __int8)_InterlockedExchange64(
                                                         (volatile __int64 *)(v38 + 8),
                                                         *((__int64 *)&v43 + 1))) & 4) != 0 )
          KeWakeAddressAll(v38 + 8, v21, v22, v23);
      }
      else
      {
        RtlRbRemoveNode(v9, v15);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *SpinLock = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(SpinLock, retaddr);
        if ( (*((_BYTE *)v19 + 11) & 2) != 0 )
        {
          --*((_BYTE *)v19 + 84);
          *((_BYTE *)v19 + 11) &= ~2u;
        }
        if ( (*((_BYTE *)v19 + 11) & 4) != 0 )
        {
          *((_DWORD *)v19 + 21) ^= ((unsigned __int16)*((_DWORD *)v19 + 21) ^ (unsigned __int16)(((unsigned __int16)(*((_DWORD *)v19 + 21) >> 8)
                                                                                                - 1) << 8)) & 0x7F00;
          *((_BYTE *)v19 + 11) &= ~4u;
        }
      }
LABEL_32:
      *((_BYTE *)v19 + 7) &= ~0x80u;
      *((_BYTE *)v19 + 11) &= ~1u;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
        goto LABEL_45;
      goto LABEL_33;
    }
    v8 = SpinLock;
    ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
    KxReleaseQueuedSpinLock(&v41);
    v11 = 1;
LABEL_73:
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v35 = 0;
      if ( _interlockedbittestandset(v8, 0x1Fu) )
        v35 = ExpWaitForSpinLockExclusiveAndAcquire((int *)v8, 0xFFu, a3);
      v36 = *v8;
      v37 = *(unsigned int *)v8;
      LODWORD(v37) = v37 & 0xBFFFFFFF;
      if ( (_DWORD)v37 != 0x80000000 )
      {
        do
        {
          if ( (v36 & 0x40000000) == 0 )
            _InterlockedOr(v8, 0x40000000u);
          if ( (++v35 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v37) )
          {
            HvlNotifyLongSpinWait(v35);
          }
          else
          {
            _mm_pause();
          }
          v36 = *v8;
        }
        while ( (*v8 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)v8, 0xFFu);
    }
  }
  if ( v11 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *SpinLock = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(SpinLock, retaddr);
  }
  else if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd(SpinLock, 0xBFFFFFFF);
    _InterlockedDecrement(SpinLock);
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(SpinLock, retaddr);
  }
  *((_BYTE *)a1 + 7) &= ~0x80u;
  if ( *((_BYTE *)a1 + 9) )
  {
    v25 = v19 + 7;
    if ( (*((_BYTE *)a1 + 11) & 2) != 0 )
    {
      --*((_BYTE *)v19 + 84);
      *((_BYTE *)a1 + 11) &= ~2u;
    }
    if ( (*((_BYTE *)a1 + 11) & 4) != 0 )
    {
      *((_DWORD *)v19 + 21) ^= ((unsigned __int16)*((_DWORD *)v19 + 21) ^ (unsigned __int16)(((unsigned __int16)(*((_DWORD *)v19 + 21) >> 8)
                                                                                            - 1) << 8)) & 0x7F00;
      *((_BYTE *)a1 + 11) &= ~4u;
    }
  }
  else
  {
    v25 = v19 + 5;
  }
  RtlRbRemoveNode(v25, a1 + 2);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
    goto LABEL_45;
LABEL_33:
  if ( !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(&v41, retaddr, v22, v23);
    goto LABEL_35;
  }
LABEL_45:
  v26 = v41;
  v27 = (_QWORD)v41 == 0LL;
  _m_prefetchw(&v41);
  if ( v27 )
  {
    if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v41 + 1), 0LL, (signed __int64)&v41) != &v41 )
    {
      v26 = KxWaitForLockChainValid(&v41, v21, v22, v23);
      goto LABEL_48;
    }
  }
  else
  {
LABEL_48:
    *(_QWORD *)&v41 = 0LL;
    v28 = *((_QWORD *)&v41 + 1);
    if ( (((unsigned __int8)v28 ^ (unsigned __int8)_InterlockedExchange64(
                                                     (volatile __int64 *)(v26 + 8),
                                                     *((__int64 *)&v41 + 1))) & 4) != 0 )
      KeWakeAddressAll(v26 + 8, v28, v22, v23);
  }
LABEL_35:
  _InterlockedDecrement8((volatile signed __int8 *)(a1[-11 * ((_BYTE)a1[1] & 0x3F) - 2] - (*((_BYTE *)a1 + 9) != 0) + 793));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
