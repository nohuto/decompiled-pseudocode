/*
 * XREFs of KiAbEntryRemoveFromTree @ 0x14028D4F0
 * Callers:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14028D3B0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiAbCrossThreadRelease @ 0x1402F2188 (KiAbCrossThreadRelease.c)
 *     KeAbPreWait @ 0x14031DCF0 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x1403209F0 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1403BD020 (ExpAcquireFastResourceExclusiveSlow.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiAbEntryRemoveFromTree(char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  char v6; // cl
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  volatile LONG *v9; // rsi
  __int64 v10; // r13
  unsigned __int8 CurrentIrql; // r12
  int v12; // r15d
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  _RTL_BALANCED_NODE *v15; // rcx
  unsigned __int64 v16; // rdi
  int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  char *v20; // rsi
  __int64 v21; // rdx
  _RTL_RB_TREE *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 result; // rax
  _RTL_RB_TREE *v26; // rcx
  __int64 v27; // rax
  bool v28; // zf
  __int64 v29; // rdx
  unsigned __int64 Root; // rbx
  __int64 v31; // rdi
  char *v32; // rdx
  __int64 v33; // rcx
  char **v34; // rax
  __int64 v35; // rdx
  int v36; // ecx
  unsigned int v37; // edi
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  __int128 v44; // [rsp+20h] [rbp-30h] BYREF
  __int64 v45; // [rsp+30h] [rbp-20h]
  __int128 v46; // [rsp+38h] [rbp-18h] BYREF
  __int64 v47; // [rsp+48h] [rbp-8h]
  __int64 retaddr; // [rsp+88h] [rbp+38h]
  PEX_SPIN_LOCK SpinLock; // [rsp+98h] [rbp+48h]

  v4 = *(_QWORD *)a1;
  v45 = 0LL;
  v6 = a1[8];
  v47 = 0LL;
  v7 = v4 & 0x7FFFFFFFFFFFFFFCLL;
  v44 = 0LL;
  v46 = 0LL;
  if ( v6 < 0 )
  {
    a3 = *(_QWORD *)(*(_QWORD *)&a1[-88 * (v6 & 0x3F) - 16] + 544LL);
    a2 = (unsigned int)(v7 >> 4) % *(_DWORD *)(a3 + 96);
    v10 = *(_QWORD *)(a3 + 88) + 24 * a2;
    v9 = (volatile LONG *)(v10 + 16);
  }
  else
  {
    v8 = ((v7 >> 4) & 0x3FF) << 6;
    v9 = (volatile LONG *)((char *)&KiAbTreeArray + v8 + 16);
    v10 = (__int64)&KiAbTreeArray + v8;
  }
  SpinLock = v9;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  v12 = a1[11] & 1;
  if ( (a1[11] & 1) != 0 )
    goto LABEL_73;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 && !PopHibernateInProgress )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v9, 0xFFu);
    goto LABEL_11;
  }
  _m_prefetchw((const void *)v9);
  v13 = *v9 & 0x7FFFFFFF;
  do
  {
    v14 = v13;
    v13 = _InterlockedCompareExchange(v9, v13 + 1, v13);
    if ( v14 == v13 )
      goto LABEL_11;
  }
  while ( v13 >= 0 );
  LOBYTE(a2) = -1;
  ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)v9, a2, a3, a4);
  while ( 1 )
  {
LABEL_11:
    v15 = *(_RTL_BALANCED_NODE **)(v10 + 8);
    v16 = *(_QWORD *)v10;
    if ( ((unsigned __int8)v15 & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_19;
      v16 ^= v10;
    }
    v17 = (unsigned __int8)v15 & 1;
    while ( v16 )
    {
      v18 = *(_QWORD *)(v16 - 16) & 0x7FFFFFFFFFFFFFFCLL;
      if ( v18 < v7 )
      {
        v19 = *(_QWORD *)(v16 + 8);
        if ( v17 && v19 )
          goto LABEL_107;
      }
      else
      {
        if ( v18 <= v7 )
          break;
        v19 = *(_QWORD *)v16;
        if ( v17 && v19 )
        {
LABEL_107:
          v16 ^= v19;
          continue;
        }
      }
      v16 = v19;
    }
LABEL_19:
    v20 = (char *)(v16 - 16);
    *(_QWORD *)&v44 = 0LL;
    *((_QWORD *)&v44 + 1) = v16 - 16 + 72;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v21 = _InterlockedExchange64((volatile __int64 *)(v16 - 16 + 72), (__int64)&v44);
      if ( v21 )
        KxWaitForLockOwnerShip(&v44, v21);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(&v44, v16 - 16 + 72);
    }
    if ( v20 != a1 )
      break;
    if ( v12 )
    {
      v22 = (_RTL_RB_TREE *)(v20 + 56);
      if ( (*((_QWORD *)v20 + 7) || (v22 = (_RTL_RB_TREE *)(v20 + 40), *((_QWORD *)v20 + 5))) && v22 )
      {
        Root = (unsigned __int64)v22->Root;
        v31 = (__int64)&v22->Root[-1].Children[1];
        RtlRbRemoveNode(v22, v22->Root);
        v32 = v20 + 16;
        *(_OWORD *)Root = *((_OWORD *)v20 + 1);
        *(_QWORD *)(Root + 16) = *((_QWORD *)v20 + 4);
        if ( *(_QWORD *)Root )
        {
          *(_QWORD *)(*(_QWORD *)Root + 16LL) = Root | *(_DWORD *)(*(_QWORD *)Root + 16LL) & 3;
        }
        else
        {
          v42 = *(_QWORD *)(v10 + 8);
          if ( (v42 & 1) != 0 )
          {
            if ( v42 == 1 )
              v43 = 0LL;
            else
              v43 = v42 ^ (v10 | 1);
          }
          else
          {
            v43 = *(_QWORD *)(v10 + 8);
          }
          if ( (char *)v43 == v32 )
          {
            if ( (v42 & 1) != 0 )
            {
              *(_QWORD *)(v10 + 8) = v10 ^ Root;
              *(_BYTE *)(v10 + 8) = v10 ^ Root | 1;
            }
            else
            {
              *(_QWORD *)(v10 + 8) = Root;
            }
          }
        }
        v33 = *(_QWORD *)(Root + 8);
        if ( v33 )
          *(_QWORD *)(v33 + 16) = Root | *(_DWORD *)(v33 + 16) & 3;
        v34 = (char **)(*(_QWORD *)(Root + 16) & 0xFFFFFFFFFFFFFFFCuLL);
        if ( v34 )
        {
          if ( *v34 == v32 )
            *v34 = (char *)Root;
          else
            v34[1] = (char *)Root;
        }
        else
        {
          if ( (*(_BYTE *)(v10 + 8) & 1) != 0 )
            Root ^= v10;
          *(_QWORD *)v10 = Root;
        }
        *((_QWORD *)&v46 + 1) = v31 + 72;
        *(_QWORD *)&v46 = 0LL;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v35 = _InterlockedExchange64((volatile __int64 *)(v31 + 72), (__int64)&v46);
          if ( v35 )
            KxWaitForLockOwnerShip(&v46, v35);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(&v46, v31 + 72);
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *SpinLock = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(SpinLock, retaddr);
        *(_OWORD *)(v31 + 40) = *(_OWORD *)(v20 + 40);
        *(_OWORD *)(v31 + 56) = *(_OWORD *)(v20 + 56);
        *(_BYTE *)(v31 + 84) = v20[84];
        v36 = *(_DWORD *)(v31 + 84) ^ (*((_DWORD *)v20 + 21) ^ *(_DWORD *)(v31 + 84)) & 0x7F00;
        *(_DWORD *)(v31 + 84) = v36;
        if ( (v20[11] & 2) != 0 )
        {
          *(_BYTE *)(v31 + 84) = v36 - 1;
          v20[11] &= ~2u;
        }
        if ( (v20[11] & 4) != 0 )
        {
          *(_DWORD *)(v31 + 84) ^= ((unsigned __int16)*(_DWORD *)(v31 + 84) ^ (unsigned __int16)(((unsigned __int16)(*(_DWORD *)(v31 + 84) >> 8)
                                                                                                - 1) << 8)) & 0x7F00;
          v20[11] &= ~4u;
        }
        *(_BYTE *)(v31 + 11) |= 1u;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
        {
          KiReleaseQueuedSpinLockInstrumented(&v46, retaddr);
          goto LABEL_32;
        }
        _m_prefetchw(&v46);
        v40 = v46;
        if ( !(_QWORD)v46 )
        {
          if ( (__int128 *)_InterlockedCompareExchange64(
                             *((volatile signed __int64 **)&v46 + 1),
                             0LL,
                             (signed __int64)&v46) == &v46 )
            goto LABEL_32;
          v40 = KxWaitForLockChainValid(&v46);
        }
        *(_QWORD *)&v46 = 0LL;
        v41 = *((_QWORD *)&v46 + 1);
        if ( (((unsigned __int8)v41 ^ (unsigned __int8)_InterlockedExchange64(
                                                         (volatile __int64 *)(v40 + 8),
                                                         *((__int64 *)&v46 + 1))) & 4) != 0 )
          KeWakeAddressAll(v40 + 8, v41, v23, v24);
      }
      else
      {
        RtlRbRemoveNode((PRTL_RB_TREE)v10, (PRTL_BALANCED_NODE)v16);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *SpinLock = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(SpinLock, retaddr);
        if ( (v20[11] & 2) != 0 )
        {
          --v20[84];
          v20[11] &= ~2u;
        }
        if ( (v20[11] & 4) != 0 )
        {
          *((_DWORD *)v20 + 21) ^= ((unsigned __int16)*((_DWORD *)v20 + 21) ^ (unsigned __int16)(((unsigned __int16)(*((_DWORD *)v20 + 21) >> 8)
                                                                                                - 1) << 8)) & 0x7F00;
          v20[11] &= ~4u;
        }
      }
LABEL_32:
      v20[7] &= ~0x80u;
      v20[11] &= ~1u;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
        goto LABEL_45;
      goto LABEL_33;
    }
    v9 = SpinLock;
    ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
    KxReleaseQueuedSpinLock(&v44);
    v12 = 1;
LABEL_73:
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v37 = 0;
      if ( _interlockedbittestandset(v9, 0x1Fu) )
      {
        LOBYTE(a2) = -1;
        v37 = ExpWaitForSpinLockExclusiveAndAcquire(v9, a2);
      }
      v38 = *(unsigned int *)v9;
      v39 = v38 & 0xFFFFFFFFBFFFFFFFuLL;
      if ( (v38 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v38 & 0x40000000) == 0 )
            _InterlockedOr(v9, 0x40000000u);
          if ( (++v37 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v39, v38, a3, a4) )
          {
            HvlNotifyLongSpinWait(v37);
          }
          else
          {
            _mm_pause();
          }
          v38 = *(unsigned int *)v9;
        }
        while ( (*v9 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    else
    {
      LOBYTE(a2) = -1;
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9, a2);
    }
  }
  if ( v12 )
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
  a1[7] &= ~0x80u;
  if ( a1[9] )
  {
    v26 = (_RTL_RB_TREE *)(v20 + 56);
    if ( (a1[11] & 2) != 0 )
    {
      --v20[84];
      a1[11] &= ~2u;
    }
    if ( (a1[11] & 4) != 0 )
    {
      *((_DWORD *)v20 + 21) ^= ((unsigned __int16)*((_DWORD *)v20 + 21) ^ (unsigned __int16)(((unsigned __int16)(*((_DWORD *)v20 + 21) >> 8)
                                                                                            - 1) << 8)) & 0x7F00;
      a1[11] &= ~4u;
    }
  }
  else
  {
    v26 = (_RTL_RB_TREE *)(v20 + 40);
  }
  RtlRbRemoveNode(v26, (PRTL_BALANCED_NODE)(a1 + 16));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
    goto LABEL_45;
LABEL_33:
  if ( !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(&v44, retaddr);
    goto LABEL_35;
  }
LABEL_45:
  v27 = v44;
  v28 = (_QWORD)v44 == 0LL;
  _m_prefetchw(&v44);
  if ( v28 )
  {
    if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v44 + 1), 0LL, (signed __int64)&v44) != &v44 )
    {
      v27 = KxWaitForLockChainValid(&v44);
      goto LABEL_48;
    }
  }
  else
  {
LABEL_48:
    *(_QWORD *)&v44 = 0LL;
    v29 = *((_QWORD *)&v44 + 1);
    if ( (((unsigned __int8)v29 ^ (unsigned __int8)_InterlockedExchange64(
                                                     (volatile __int64 *)(v27 + 8),
                                                     *((__int64 *)&v44 + 1))) & 4) != 0 )
      KeWakeAddressAll(v27 + 8, v29, v23, v24);
  }
LABEL_35:
  _InterlockedDecrement8((volatile signed __int8 *)(*(_QWORD *)&a1[-88 * (a1[8] & 0x3F) - 16] - (a1[9] != 0) + 793LL));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
