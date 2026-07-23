/*
 * XREFs of KiAbEntryGetLockedHeadEntry @ 0x1402E83C0
 * Callers:
 *     KiAbConvertWaiterToOwnerEntry @ 0x14027E670 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiAbDeferredProcessingWorker @ 0x1402E4D00 (KiAbDeferredProcessingWorker.c)
 *     KiAbProcessThreadLocks @ 0x1402E8D40 (KiAbProcessThreadLocks.c)
 *     KiAbForceProcessLockEntry @ 0x14041A848 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x1402E2370 (RtlRbInsertNodeEx.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1402E5690 (KiAbOwnerComputeCpuPriorityKey.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x1402FCD10 (ExTryConvertSharedSpinLockExclusive.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

_QWORD *__fastcall KiAbEntryGetLockedHeadEntry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KLOCK_QUEUE_HANDLE *v4; // r14
  char v5; // al
  int v6; // edi
  volatile __int64 *v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r9
  _RTL_RB_TREE *v13; // r15
  __int64 v14; // rbp
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  int v17; // r12d
  _RTL_BALANCED_NODE *v18; // rdx
  unsigned __int64 v19; // rcx
  int v20; // edx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  _RTL_BALANCED_NODE *v23; // rcx
  unsigned __int64 v24; // rdx
  int v25; // ecx
  BOOLEAN v26; // r8
  unsigned __int64 v27; // rax
  _QWORD *v28; // rdi
  volatile __int64 *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  volatile __int64 *v36; // rcx
  __int64 v37; // rdx
  _RTL_RB_TREE *v38; // r11
  char v39; // r8
  __int64 v40; // rcx
  unsigned __int64 Root; // rdx
  int v42; // ecx
  BOOLEAN v43; // r10
  _RTL_BALANCED_NODE *v44; // rax
  char v45; // al
  __int64 v46; // rcx
  char v47; // r9
  int v48; // ecx
  _RTL_BALANCED_NODE *v49; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  v4 = (struct _KLOCK_QUEUE_HANDLE *)a3;
  v5 = *(_BYTE *)(a1 + 11);
  v6 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (v5 & 1) != 0 )
  {
    *(_QWORD *)a3 = 0LL;
    v8 = (volatile __int64 *)(a1 + 72);
    *(_QWORD *)(a3 + 8) = a1 + 72;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v9 = _InterlockedExchange64(v8, a3);
      if ( v9 )
        KxWaitForLockOwnerShip(a3, v9, a3, a4);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(a3, v8);
    }
    if ( (*(_BYTE *)(a1 + 11) & 1) != 0 )
      return (_QWORD *)a1;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(v4);
  }
  if ( *(__int64 *)a1 >= 0 && !v6 )
    return 0LL;
  v11 = *(_QWORD *)a1 & 0x7FFFFFFFFFFFFFFCLL;
  v12 = v11 >> 4;
  if ( *(char *)(a1 + 8) < 0 )
  {
    a3 = *(_QWORD *)(*(_QWORD *)(a1 - 88LL * (*(_BYTE *)(a1 + 8) & 0x3F) - 16) + 544LL);
    a2 = (unsigned int)v12 % *(_DWORD *)(a3 + 96);
    v14 = *(_QWORD *)(a3 + 88) + 24 * a2;
    v13 = (_RTL_RB_TREE *)(v14 + 16);
  }
  else
  {
    v12 = (v11 >> 4) & 0x3FF;
    v13 = (_RTL_RB_TREE *)((char *)&KiAbTreeArray + 64 * v12 + 16);
    v14 = (__int64)&KiAbTreeArray + 64 * v12;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v13);
    v15 = (__int64)v13->Root & 0x7FFFFFFF;
    while ( 1 )
    {
      v16 = v15;
      v15 = _InterlockedCompareExchange((volatile signed __int32 *)v13, v15 + 1, v15);
      if ( v16 == v15 )
        break;
      if ( v15 < 0 )
      {
        LOBYTE(a2) = -1;
        ExpWaitForSpinLockSharedAndAcquire(v13, a2);
        break;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v13, 0xFFu);
  }
  v17 = 0;
  while ( 1 )
  {
    v18 = *(_RTL_BALANCED_NODE **)(v14 + 8);
    v19 = *(_QWORD *)v14;
    if ( ((unsigned __int8)v18 & 1) != 0 )
    {
      if ( !v19 )
        goto LABEL_24;
      v19 ^= v14;
    }
    v20 = (unsigned __int8)v18 & 1;
    while ( v19 )
    {
      v21 = *(_QWORD *)(v19 - 16) & 0x7FFFFFFFFFFFFFFCLL;
      if ( v21 < v11 )
      {
        v22 = *(_QWORD *)(v19 + 8);
        if ( v20 && v22 )
          goto LABEL_162;
      }
      else
      {
        if ( v21 <= v11 )
          break;
        v22 = *(_QWORD *)v19;
        if ( v20 && v22 )
        {
LABEL_162:
          v19 ^= v22;
          continue;
        }
      }
      v19 = v22;
    }
LABEL_24:
    if ( !v6 )
    {
      if ( v19 )
      {
        v4->LockQueue.Next = 0LL;
        v28 = (_QWORD *)(v19 - 16);
        v29 = (volatile __int64 *)(v19 - 16 + 72);
        v4->LockQueue.Lock = (unsigned __int64 *volatile)v29;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v30 = _InterlockedExchange64(v29, (__int64)v4);
          if ( v30 )
            KxWaitForLockOwnerShip(v4, v30, a3, v12);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(v4, v29);
        }
        if ( v17 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            LODWORD(v13->Root) = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v13, retaddr);
        }
        else if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
          _InterlockedAnd((volatile signed __int32 *)v13, 0xBFFFFFFF);
          _InterlockedDecrement((volatile signed __int32 *)v13);
        }
        else
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v13, retaddr);
        }
        if ( (_QWORD *)a1 == v28 )
          return v28;
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 72);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v31 = _InterlockedExchange64((volatile __int64 *)(a1 + 72), (__int64)&LockHandle);
          if ( v31 )
            KxWaitForLockOwnerShip(&LockHandle, v31, a3, v12);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(&LockHandle, a1 + 72);
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( v11 == (*(_QWORD *)a1 & 0x7FFFFFFFFFFFFFFCLL) && *(__int64 *)a1 < 0 )
          return v28;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(v4);
      }
      else if ( v17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          LODWORD(v13->Root) = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v13, retaddr);
      }
      else if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd((volatile signed __int32 *)v13, 0xBFFFFFFF);
        _InterlockedDecrement((volatile signed __int32 *)v13);
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v13, retaddr);
      }
      return 0LL;
    }
    if ( v19 )
    {
      v4->LockQueue.Next = 0LL;
      v28 = (_QWORD *)(v19 - 16);
      v36 = (volatile __int64 *)(v19 - 16 + 72);
      v4->LockQueue.Lock = (unsigned __int64 *volatile)v36;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v37 = _InterlockedExchange64(v36, (__int64)v4);
        if ( v37 )
          KxWaitForLockOwnerShip(v4, v37, a3, v12);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(v4, v36);
      }
      if ( v17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          LODWORD(v13->Root) = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v13, retaddr);
      }
      else if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd((volatile signed __int32 *)v13, 0xBFFFFFFF);
        _InterlockedDecrement((volatile signed __int32 *)v13);
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v13, retaddr);
      }
      if ( *(__int64 *)a1 < 0 )
        return v28;
      if ( *(_BYTE *)(a1 + 9) == *(__int64 *)a1 < 0 )
      {
        v45 = KiAbOwnerComputeCpuPriorityKey(a1);
        v38 = (_RTL_RB_TREE *)(v28 + 5);
        *(_BYTE *)(a1 + 40) = v45;
        v46 = v28[6];
        v47 = v45;
        Root = v28[5];
        if ( (v46 & 1) != 0 )
        {
          if ( !Root )
            goto LABEL_133;
          Root ^= (unsigned __int64)v38;
        }
        v48 = v46 & 1;
        v43 = 0;
        if ( Root )
        {
          while ( 1 )
          {
            if ( *(char *)(Root + 24) <= v47 )
            {
              v49 = *(_RTL_BALANCED_NODE **)(Root + 8);
              if ( v48 )
              {
                if ( !v49 )
                  goto LABEL_83;
                v49 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v49);
              }
              if ( !v49 )
              {
LABEL_83:
                v43 = 1;
                break;
              }
            }
            else
            {
              v49 = *(_RTL_BALANCED_NODE **)Root;
              if ( v48 )
              {
                if ( !v49 )
                  break;
                v49 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v49);
              }
              if ( !v49 )
                break;
            }
            Root = (unsigned __int64)v49;
          }
        }
      }
      else
      {
        v38 = (_RTL_RB_TREE *)(v28 + 7);
        v39 = *(_BYTE *)(*(_QWORD *)(a1 - 88LL * (*(_BYTE *)(a1 + 8) & 0x3F) - 16) + 195LL);
        if ( v39 > 30 )
          v39 = 30;
        *(_BYTE *)(a1 + 40) = v39;
        v40 = v28[8];
        Root = (unsigned __int64)v38->Root;
        if ( (v40 & 1) == 0 )
          goto LABEL_74;
        if ( Root )
        {
          Root ^= (unsigned __int64)v38;
LABEL_74:
          v42 = v40 & 1;
          v43 = 0;
          if ( Root )
          {
            while ( 1 )
            {
              if ( *(char *)(Root + 24) >= v39 )
              {
                v44 = *(_RTL_BALANCED_NODE **)(Root + 8);
                if ( v42 )
                {
                  if ( !v44 )
                    goto LABEL_83;
                  v44 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v44);
                }
                if ( !v44 )
                  goto LABEL_83;
              }
              else
              {
                v44 = *(_RTL_BALANCED_NODE **)Root;
                if ( v42 )
                {
                  if ( !v44 )
                    break;
                  v44 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v44);
                }
                if ( !v44 )
                  break;
              }
              Root = (unsigned __int64)v44;
            }
          }
        }
        else
        {
LABEL_133:
          v43 = 0;
        }
      }
      RtlRbInsertNodeEx(v38, (PRTL_BALANCED_NODE)Root, v43, (PRTL_BALANCED_NODE)(a1 + 16));
      *(_BYTE *)(a1 + 7) |= 0x80u;
      goto LABEL_60;
    }
    if ( v17 )
      break;
    v17 = 1;
    if ( ExTryConvertSharedSpinLockExclusive((PEX_SPIN_LOCK)v13) )
      break;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd((volatile signed __int32 *)v13, 0xBFFFFFFF);
      _InterlockedDecrement((volatile signed __int32 *)v13);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v13);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v13, retaddr);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v13);
    }
  }
  v23 = *(_RTL_BALANCED_NODE **)(v14 + 8);
  v24 = *(_QWORD *)v14;
  if ( ((unsigned __int8)v23 & 1) != 0 )
  {
    if ( !v24 )
    {
      v26 = 0;
      goto LABEL_55;
    }
    v24 ^= v14;
  }
  v25 = (unsigned __int8)v23 & 1;
  v26 = 0;
  if ( v24 )
  {
    while ( 1 )
    {
      if ( (*(_QWORD *)(v24 - 16) & 0x7FFFFFFFFFFFFFFCuLL) <= v11 )
      {
        v27 = *(_QWORD *)(v24 + 8);
        if ( v25 )
        {
          if ( !v27 )
            goto LABEL_54;
          v27 ^= v24;
        }
        if ( !v27 )
        {
LABEL_54:
          v26 = 1;
          break;
        }
      }
      else
      {
        v27 = *(_QWORD *)v24;
        if ( v25 )
        {
          if ( !v27 )
            break;
          v27 ^= v24;
        }
        if ( !v27 )
          break;
      }
      v24 = v27;
    }
  }
LABEL_55:
  RtlRbInsertNodeEx((PRTL_RB_TREE)v14, (PRTL_BALANCED_NODE)v24, v26, (PRTL_BALANCED_NODE)(a1 + 16));
  v4->LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 72);
  v28 = (_QWORD *)a1;
  v4->LockQueue.Next = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v34 = _InterlockedExchange64((volatile __int64 *)(a1 + 72), (__int64)v4);
    if ( v34 )
      KxWaitForLockOwnerShip(v4, v34, v32, v33);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v4, a1 + 72);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    LODWORD(v13->Root) = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v13, retaddr);
  *(_BYTE *)(a1 + 7) |= 0x80u;
  *(_BYTE *)(a1 + 11) |= 1u;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_BYTE *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 84) &= 0xFFFF80FF;
LABEL_60:
  v35 = *(_QWORD *)(a1 - 88LL * (*(_BYTE *)(a1 + 8) & 0x3F) - 16);
  if ( *(_BYTE *)(a1 + 9) )
    _InterlockedIncrement8((volatile signed __int8 *)(v35 + 792));
  else
    _InterlockedIncrement8((volatile signed __int8 *)(v35 + 793));
  return v28;
}
