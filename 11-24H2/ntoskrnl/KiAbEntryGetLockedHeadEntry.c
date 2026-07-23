/*
 * XREFs of KiAbEntryGetLockedHeadEntry @ 0x140280660
 * Callers:
 *     KiAbProcessThreadLocks @ 0x140280FD0 (KiAbProcessThreadLocks.c)
 *     KiAbDeferredProcessingWorker @ 0x140283660 (KiAbDeferredProcessingWorker.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x1402CBF00 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiAbForceProcessLockEntry @ 0x140408194 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x14021A3F0 (ExTryConvertSharedSpinLockExclusive.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140282120 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 */

_QWORD *__fastcall KiAbEntryGetLockedHeadEntry(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r14
  char v4; // al
  int v5; // edi
  volatile __int64 *v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // r9
  _RTL_RB_TREE *v12; // r15
  __int64 v13; // rbp
  _QWORD *v14; // rdi
  volatile __int64 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  int v20; // r12d
  _RTL_BALANCED_NODE *v21; // rdx
  unsigned __int64 v22; // rcx
  int v23; // edx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  _RTL_BALANCED_NODE *v26; // rcx
  unsigned __int64 v27; // rdx
  int v28; // ecx
  BOOLEAN v29; // r8
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  volatile __int64 *v33; // rcx
  __int64 v34; // rdx
  _RTL_RB_TREE *v35; // r10
  char v36; // r8
  __int64 v37; // rcx
  unsigned __int64 Root; // rdx
  int v39; // ecx
  BOOLEAN v40; // al
  _RTL_BALANCED_NODE *v41; // rax
  char v42; // al
  __int64 v43; // rcx
  char v44; // r9
  int v45; // ecx
  _RTL_BALANCED_NODE *v46; // rax
  __int128 v47; // [rsp+20h] [rbp-48h] BYREF
  __int64 v48; // [rsp+30h] [rbp-38h]
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  v48 = 0LL;
  v3 = (_QWORD *)a3;
  v4 = *(_BYTE *)(a1 + 11);
  v5 = a2;
  v47 = 0LL;
  if ( (v4 & 1) != 0 )
  {
    *(_QWORD *)a3 = 0LL;
    v7 = (volatile __int64 *)(a1 + 72);
    *(_QWORD *)(a3 + 8) = a1 + 72;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v8 = _InterlockedExchange64(v7, a3);
      if ( v8 )
        KxWaitForLockOwnerShip(a3, v8);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(a3, v7);
    }
    if ( (*(_BYTE *)(a1 + 11) & 1) != 0 )
      return (_QWORD *)a1;
    KxReleaseQueuedSpinLock(v3);
  }
  if ( *(__int64 *)a1 >= 0 && !v5 )
    return 0LL;
  v10 = *(_QWORD *)a1 & 0x7FFFFFFFFFFFFFFCLL;
  v11 = v10 >> 4;
  if ( *(char *)(a1 + 8) < 0 )
  {
    a3 = *(_QWORD *)(*(_QWORD *)(a1 - 88LL * (*(_BYTE *)(a1 + 8) & 0x3F) - 16) + 544LL);
    a2 = (unsigned int)v11 % *(_DWORD *)(a3 + 96);
    v13 = *(_QWORD *)(a3 + 88) + 24 * a2;
    v12 = (_RTL_RB_TREE *)(v13 + 16);
  }
  else
  {
    v11 = (v10 >> 4) & 0x3FF;
    v12 = (_RTL_RB_TREE *)((char *)&KiAbTreeArray + 64 * v11 + 16);
    v13 = (__int64)&KiAbTreeArray + 64 * v11;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v12);
    v18 = (__int64)v12->Root & 0x7FFFFFFF;
    while ( 1 )
    {
      v19 = v18;
      v18 = _InterlockedCompareExchange((volatile signed __int32 *)v12, v18 + 1, v18);
      if ( v19 == v18 )
        break;
      if ( v18 < 0 )
      {
        LOBYTE(a2) = -1;
        ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)v12, a2, a3, v11);
        break;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v12, 0xFFu);
  }
  v20 = 0;
  while ( 1 )
  {
    v21 = *(_RTL_BALANCED_NODE **)(v13 + 8);
    v22 = *(_QWORD *)v13;
    if ( ((unsigned __int8)v21 & 1) != 0 )
    {
      if ( !v22 )
        goto LABEL_41;
      v22 ^= v13;
    }
    v23 = (unsigned __int8)v21 & 1;
    while ( v22 )
    {
      v24 = *(_QWORD *)(v22 - 16) & 0x7FFFFFFFFFFFFFFCLL;
      if ( v24 < v10 )
      {
        v25 = *(_QWORD *)(v22 + 8);
        if ( v23 && v25 )
          goto LABEL_113;
      }
      else
      {
        if ( v24 <= v10 )
          break;
        v25 = *(_QWORD *)v22;
        if ( v23 && v25 )
        {
LABEL_113:
          v22 ^= v25;
          continue;
        }
      }
      v22 = v25;
    }
LABEL_41:
    if ( !v5 )
    {
      if ( v22 )
      {
        *v3 = 0LL;
        v14 = (_QWORD *)(v22 - 16);
        v15 = (volatile __int64 *)(v22 - 16 + 72);
        v3[1] = v15;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v16 = _InterlockedExchange64(v15, (__int64)v3);
          if ( v16 )
            KxWaitForLockOwnerShip(v3, v16);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(v3, v15);
        }
        if ( v20 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            LODWORD(v12->Root) = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v12, retaddr);
        }
        else if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
          _InterlockedAnd((volatile signed __int32 *)v12, 0xBFFFFFFF);
          _InterlockedDecrement((volatile signed __int32 *)v12);
        }
        else
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented((volatile signed __int32 *)v12, retaddr);
        }
        if ( (_QWORD *)a1 == v14 )
          return v14;
        *(_QWORD *)&v47 = 0LL;
        *((_QWORD *)&v47 + 1) = a1 + 72;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          v17 = _InterlockedExchange64((volatile __int64 *)(a1 + 72), (__int64)&v47);
          if ( v17 )
            KxWaitForLockOwnerShip(&v47, v17);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(&v47, a1 + 72);
        }
        KxReleaseQueuedSpinLock(&v47);
        if ( v10 == (*(_QWORD *)a1 & 0x7FFFFFFFFFFFFFFCLL) && *(__int64 *)a1 < 0 )
          return v14;
        KxReleaseQueuedSpinLock(v3);
      }
      else if ( v20 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          LODWORD(v12->Root) = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v12, retaddr);
      }
      else if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd((volatile signed __int32 *)v12, 0xBFFFFFFF);
        _InterlockedDecrement((volatile signed __int32 *)v12);
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented((volatile signed __int32 *)v12, retaddr);
      }
      return 0LL;
    }
    if ( v22 )
    {
      *v3 = 0LL;
      v14 = (_QWORD *)(v22 - 16);
      v33 = (volatile __int64 *)(v22 - 16 + 72);
      v3[1] = v33;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v34 = _InterlockedExchange64(v33, (__int64)v3);
        if ( v34 )
          KxWaitForLockOwnerShip(v3, v34);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(v3, v33);
      }
      if ( v20 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          LODWORD(v12->Root) = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v12, retaddr);
      }
      else if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd((volatile signed __int32 *)v12, 0xBFFFFFFF);
        _InterlockedDecrement((volatile signed __int32 *)v12);
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented((volatile signed __int32 *)v12, retaddr);
      }
      if ( *(__int64 *)a1 < 0 )
        return v14;
      if ( *(_BYTE *)(a1 + 9) == *(__int64 *)a1 < 0 )
      {
        v42 = KiAbOwnerComputeCpuPriorityKey(a1, v34, a3);
        v35 = (_RTL_RB_TREE *)(v14 + 5);
        *(_BYTE *)(a1 + 40) = v42;
        v43 = v14[6];
        v44 = v42;
        Root = v14[5];
        if ( (v43 & 1) != 0 )
        {
          if ( !Root )
            goto LABEL_134;
          Root ^= (unsigned __int64)v35;
        }
        v45 = v43 & 1;
        v40 = 0;
        if ( Root )
        {
          while ( 1 )
          {
            if ( *(char *)(Root + 24) <= v44 )
            {
              v46 = *(_RTL_BALANCED_NODE **)(Root + 8);
              if ( v45 )
              {
                if ( !v46 )
                  goto LABEL_87;
                v46 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v46);
              }
              if ( !v46 )
              {
LABEL_87:
                v40 = 1;
                break;
              }
            }
            else
            {
              v46 = *(_RTL_BALANCED_NODE **)Root;
              if ( v45 )
              {
                if ( !v46 )
                  goto LABEL_134;
                v46 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v46);
              }
              if ( !v46 )
                goto LABEL_134;
            }
            Root = (unsigned __int64)v46;
          }
        }
      }
      else
      {
        v35 = (_RTL_RB_TREE *)(v14 + 7);
        v36 = *(_BYTE *)(*(_QWORD *)(a1 - 88LL * (*(_BYTE *)(a1 + 8) & 0x3F) - 16) + 195LL);
        if ( v36 > 30 )
          v36 = 30;
        *(_BYTE *)(a1 + 40) = v36;
        v37 = v14[8];
        Root = (unsigned __int64)v35->Root;
        if ( (v37 & 1) == 0 )
          goto LABEL_78;
        if ( Root )
        {
          Root ^= (unsigned __int64)v35;
LABEL_78:
          v39 = v37 & 1;
          v40 = 0;
          if ( Root )
          {
            while ( 1 )
            {
              if ( *(char *)(Root + 24) >= v36 )
              {
                v41 = *(_RTL_BALANCED_NODE **)(Root + 8);
                if ( v39 )
                {
                  if ( !v41 )
                    goto LABEL_87;
                  v41 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v41);
                }
                if ( !v41 )
                  goto LABEL_87;
              }
              else
              {
                v41 = *(_RTL_BALANCED_NODE **)Root;
                if ( v39 )
                {
                  if ( !v41 )
                    goto LABEL_134;
                  v41 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v41);
                }
                if ( !v41 )
                  goto LABEL_134;
              }
              Root = (unsigned __int64)v41;
            }
          }
        }
        else
        {
LABEL_134:
          v40 = 0;
        }
      }
      RtlRbInsertNodeEx(v35, (PRTL_BALANCED_NODE)Root, v40, (PRTL_BALANCED_NODE)(a1 + 16));
      *(_BYTE *)(a1 + 7) |= 0x80u;
      goto LABEL_62;
    }
    if ( v20 )
      break;
    v20 = 1;
    if ( ExTryConvertSharedSpinLockExclusive((PEX_SPIN_LOCK)v12) )
      break;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd((volatile signed __int32 *)v12, 0xBFFFFFFF);
      _InterlockedDecrement((volatile signed __int32 *)v12);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v12);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented((volatile signed __int32 *)v12, retaddr);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)v12);
    }
  }
  v26 = *(_RTL_BALANCED_NODE **)(v13 + 8);
  v27 = *(_QWORD *)v13;
  if ( ((unsigned __int8)v26 & 1) != 0 )
  {
    if ( !v27 )
    {
      v29 = 0;
      goto LABEL_57;
    }
    v27 ^= v13;
  }
  v28 = (unsigned __int8)v26 & 1;
  v29 = 0;
  if ( v27 )
  {
    while ( 1 )
    {
      if ( (*(_QWORD *)(v27 - 16) & 0x7FFFFFFFFFFFFFFCuLL) <= v10 )
      {
        v30 = *(_QWORD *)(v27 + 8);
        if ( v28 )
        {
          if ( !v30 )
            goto LABEL_56;
          v30 ^= v27;
        }
        if ( !v30 )
        {
LABEL_56:
          v29 = 1;
          break;
        }
      }
      else
      {
        v30 = *(_QWORD *)v27;
        if ( v28 )
        {
          if ( !v30 )
            break;
          v30 ^= v27;
        }
        if ( !v30 )
          break;
      }
      v27 = v30;
    }
  }
LABEL_57:
  RtlRbInsertNodeEx((PRTL_RB_TREE)v13, (PRTL_BALANCED_NODE)v27, v29, (PRTL_BALANCED_NODE)(a1 + 16));
  v3[1] = a1 + 72;
  v14 = (_QWORD *)a1;
  *v3 = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v31 = _InterlockedExchange64((volatile __int64 *)(a1 + 72), (__int64)v3);
    if ( v31 )
      KxWaitForLockOwnerShip(v3, v31);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v3, a1 + 72);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    LODWORD(v12->Root) = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v12, retaddr);
  *(_BYTE *)(a1 + 7) |= 0x80u;
  *(_BYTE *)(a1 + 11) |= 1u;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_BYTE *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 84) &= 0xFFFF80FF;
LABEL_62:
  v32 = *(_QWORD *)(a1 - 88LL * (*(_BYTE *)(a1 + 8) & 0x3F) - 16);
  if ( *(_BYTE *)(a1 + 9) )
    _InterlockedIncrement8((volatile signed __int8 *)(v32 + 792));
  else
    _InterlockedIncrement8((volatile signed __int8 *)(v32 + 793));
  return v14;
}
