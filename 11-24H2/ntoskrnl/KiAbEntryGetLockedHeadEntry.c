/*
 * XREFs of KiAbEntryGetLockedHeadEntry @ 0x140250050
 * Callers:
 *     KiAbProcessThreadLocks @ 0x1402509C0 (KiAbProcessThreadLocks.c)
 *     KiAbDeferredProcessingWorker @ 0x140253050 (KiAbDeferredProcessingWorker.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x140323370 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiAbForceProcessLockEntry @ 0x1404183E4 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140251B10 (KiAbOwnerComputeCpuPriorityKey.c)
 *     RtlRbInsertNodeEx @ 0x1402BDA80 (RtlRbInsertNodeEx.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x1402C40D0 (ExTryConvertSharedSpinLockExclusive.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

_QWORD *__fastcall KiAbEntryGetLockedHeadEntry(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r14
  char v4; // al
  int v5; // edi
  volatile __int64 *v7; // rdx
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  _DWORD *v11; // r15
  __int64 v12; // rbp
  _QWORD *v13; // rdi
  volatile __int64 *v14; // rcx
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  int v17; // r12d
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  int v20; // edx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  int v25; // ecx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  volatile __int64 *v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // r10
  char v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // ecx
  unsigned __int8 v35; // al
  __int64 v36; // rax
  char v37; // al
  __int64 v38; // rcx
  char v39; // r9
  int v40; // ecx
  __int64 v41; // rax
  __int128 v42; // [rsp+20h] [rbp-48h] BYREF
  __int64 v43; // [rsp+30h] [rbp-38h]
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  v43 = 0LL;
  v3 = (_QWORD *)a3;
  v4 = *(_BYTE *)(a1 + 11);
  v5 = a2;
  v42 = 0LL;
  if ( (v4 & 1) != 0 )
  {
    *(_QWORD *)a3 = 0LL;
    v7 = (volatile __int64 *)(a1 + 72);
    *(_QWORD *)(a3 + 8) = a1 + 72;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _InterlockedExchange64(v7, a3) )
        KxWaitForLockOwnerShip(a3);
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
  v9 = *(_QWORD *)a1 & 0x7FFFFFFFFFFFFFFCLL;
  if ( *(char *)(a1 + 8) < 0 )
  {
    a3 = *(_QWORD *)(*(_QWORD *)(a1 - 88LL * (*(_BYTE *)(a1 + 8) & 0x3F) - 16) + 544LL);
    a2 = (unsigned int)(v9 >> 4) % *(_DWORD *)(a3 + 96);
    v12 = *(_QWORD *)(a3 + 88) + 24 * a2;
    v11 = (_DWORD *)(v12 + 16);
  }
  else
  {
    v10 = ((v9 >> 4) & 0x3FF) << 6;
    v11 = (_DWORD *)((char *)&KiAbTreeArray + v10 + 16);
    v12 = (__int64)&KiAbTreeArray + v10;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v11);
    v15 = *v11 & 0x7FFFFFFF;
    while ( 1 )
    {
      v16 = v15;
      v15 = _InterlockedCompareExchange(v11, v15 + 1, v15);
      if ( v16 == v15 )
        break;
      if ( v15 < 0 )
      {
        LOBYTE(a2) = -1;
        ExpWaitForSpinLockSharedAndAcquire(v11, a2);
        break;
      }
    }
  }
  else
  {
    LOBYTE(a2) = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v11, a2);
  }
  v17 = 0;
  while ( 1 )
  {
    v18 = *(_QWORD *)(v12 + 8);
    v19 = *(_QWORD *)v12;
    if ( (v18 & 1) != 0 )
    {
      if ( !v19 )
        goto LABEL_41;
      v19 ^= v12;
    }
    v20 = v18 & 1;
    while ( v19 )
    {
      v21 = *(_QWORD *)(v19 - 16) & 0x7FFFFFFFFFFFFFFCLL;
      if ( v21 < v9 )
      {
        v22 = *(_QWORD *)(v19 + 8);
        if ( v20 && v22 )
          goto LABEL_113;
      }
      else
      {
        if ( v21 <= v9 )
          break;
        v22 = *(_QWORD *)v19;
        if ( v20 && v22 )
        {
LABEL_113:
          v19 ^= v22;
          continue;
        }
      }
      v19 = v22;
    }
LABEL_41:
    if ( !v5 )
    {
      if ( v19 )
      {
        *v3 = 0LL;
        v13 = (_QWORD *)(v19 - 16);
        v14 = (volatile __int64 *)(v19 - 16 + 72);
        v3[1] = v14;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          if ( _InterlockedExchange64(v14, (__int64)v3) )
            KxWaitForLockOwnerShip(v3);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(v3, v14);
        }
        if ( v17 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            *v11 = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v11, retaddr);
        }
        else if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
          _InterlockedAnd(v11, 0xBFFFFFFF);
          _InterlockedDecrement(v11);
        }
        else
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v11, retaddr);
        }
        if ( (_QWORD *)a1 == v13 )
          return v13;
        *(_QWORD *)&v42 = 0LL;
        *((_QWORD *)&v42 + 1) = a1 + 72;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
        {
          if ( _InterlockedExchange64((volatile __int64 *)(a1 + 72), (__int64)&v42) )
            KxWaitForLockOwnerShip(&v42);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(&v42, a1 + 72);
        }
        KxReleaseQueuedSpinLock(&v42);
        if ( v9 == (*(_QWORD *)a1 & 0x7FFFFFFFFFFFFFFCLL) && *(__int64 *)a1 < 0 )
          return v13;
        KxReleaseQueuedSpinLock(v3);
      }
      else if ( v17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v11 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v11, retaddr);
      }
      else if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd(v11, 0xBFFFFFFF);
        _InterlockedDecrement(v11);
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v11, retaddr);
      }
      return 0LL;
    }
    if ( v19 )
    {
      *v3 = 0LL;
      v13 = (_QWORD *)(v19 - 16);
      v28 = (volatile __int64 *)(v19 - 16 + 72);
      v3[1] = v28;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v29 = _InterlockedExchange64(v28, (__int64)v3);
        if ( v29 )
          KxWaitForLockOwnerShip(v3);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(v3, v28);
      }
      if ( v17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v11 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v11, retaddr);
      }
      else if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd(v11, 0xBFFFFFFF);
        _InterlockedDecrement(v11);
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v11, retaddr);
      }
      if ( *(__int64 *)a1 < 0 )
        return v13;
      if ( *(_BYTE *)(a1 + 9) == *(__int64 *)a1 < 0 )
      {
        v37 = KiAbOwnerComputeCpuPriorityKey(a1, v29, a3);
        v30 = (unsigned __int64)(v13 + 5);
        *(_BYTE *)(a1 + 40) = v37;
        v38 = v13[6];
        v39 = v37;
        v33 = v13[5];
        if ( (v38 & 1) != 0 )
        {
          if ( !v33 )
            goto LABEL_134;
          v33 ^= v30;
        }
        v40 = v38 & 1;
        v35 = 0;
        if ( v33 )
        {
          while ( 1 )
          {
            if ( *(char *)(v33 + 24) <= v39 )
            {
              v41 = *(_QWORD *)(v33 + 8);
              if ( v40 )
              {
                if ( !v41 )
                  goto LABEL_87;
                v41 ^= v33;
              }
              if ( !v41 )
              {
LABEL_87:
                v35 = 1;
                break;
              }
            }
            else
            {
              v41 = *(_QWORD *)v33;
              if ( v40 )
              {
                if ( !v41 )
                  goto LABEL_134;
                v41 ^= v33;
              }
              if ( !v41 )
                goto LABEL_134;
            }
            v33 = v41;
          }
        }
      }
      else
      {
        v30 = (unsigned __int64)(v13 + 7);
        v31 = *(_BYTE *)(*(_QWORD *)(a1 - 88LL * (*(_BYTE *)(a1 + 8) & 0x3F) - 16) + 195LL);
        if ( v31 > 30 )
          v31 = 30;
        *(_BYTE *)(a1 + 40) = v31;
        v32 = v13[8];
        v33 = *(_QWORD *)v30;
        if ( (v32 & 1) == 0 )
          goto LABEL_78;
        if ( v33 )
        {
          v33 ^= v30;
LABEL_78:
          v34 = v32 & 1;
          v35 = 0;
          if ( v33 )
          {
            while ( 1 )
            {
              if ( *(char *)(v33 + 24) >= v31 )
              {
                v36 = *(_QWORD *)(v33 + 8);
                if ( v34 )
                {
                  if ( !v36 )
                    goto LABEL_87;
                  v36 ^= v33;
                }
                if ( !v36 )
                  goto LABEL_87;
              }
              else
              {
                v36 = *(_QWORD *)v33;
                if ( v34 )
                {
                  if ( !v36 )
                    goto LABEL_134;
                  v36 ^= v33;
                }
                if ( !v36 )
                  goto LABEL_134;
              }
              v33 = v36;
            }
          }
        }
        else
        {
LABEL_134:
          v35 = 0;
        }
      }
      RtlRbInsertNodeEx(v30, v33, v35, a1 + 16, v42, *((_QWORD *)&v42 + 1), v43);
      *(_BYTE *)(a1 + 7) |= 0x80u;
      goto LABEL_62;
    }
    if ( v17 )
      break;
    v17 = 1;
    if ( ExTryConvertSharedSpinLockExclusive(v11) )
      break;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(v11, 0xBFFFFFFF);
      _InterlockedDecrement(v11);
      ExAcquireSpinLockExclusiveAtDpcLevel(v11);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v11, retaddr);
      ExAcquireSpinLockExclusiveAtDpcLevel(v11);
    }
  }
  v23 = *(_QWORD *)(v12 + 8);
  v24 = *(_QWORD *)v12;
  if ( (v23 & 1) != 0 )
  {
    if ( !v24 )
    {
      LOBYTE(a3) = 0;
      goto LABEL_57;
    }
    v24 ^= v12;
  }
  v25 = v23 & 1;
  LOBYTE(a3) = 0;
  if ( v24 )
  {
    while ( 1 )
    {
      if ( (*(_QWORD *)(v24 - 16) & 0x7FFFFFFFFFFFFFFCuLL) <= v9 )
      {
        v26 = *(_QWORD *)(v24 + 8);
        if ( v25 )
        {
          if ( !v26 )
            goto LABEL_56;
          v26 ^= v24;
        }
        if ( !v26 )
        {
LABEL_56:
          LOBYTE(a3) = 1;
          break;
        }
      }
      else
      {
        v26 = *(_QWORD *)v24;
        if ( v25 )
        {
          if ( !v26 )
            break;
          v26 ^= v24;
        }
        if ( !v26 )
          break;
      }
      v24 = v26;
    }
  }
LABEL_57:
  RtlRbInsertNodeEx(v12, v24, a3, a1 + 16, v42, *((_QWORD *)&v42 + 1), v43);
  v3[1] = a1 + 72;
  v13 = (_QWORD *)a1;
  *v3 = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _InterlockedExchange64((volatile __int64 *)(a1 + 72), (__int64)v3) )
      KxWaitForLockOwnerShip(v3);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v3, a1 + 72);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    *v11 = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v11, retaddr);
  *(_BYTE *)(a1 + 7) |= 0x80u;
  *(_BYTE *)(a1 + 11) |= 1u;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_BYTE *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 84) &= 0xFFFF80FF;
LABEL_62:
  v27 = *(_QWORD *)(a1 - 88LL * (*(_BYTE *)(a1 + 8) & 0x3F) - 16);
  if ( *(_BYTE *)(a1 + 9) )
    _InterlockedIncrement8((volatile signed __int8 *)(v27 + 792));
  else
    _InterlockedIncrement8((volatile signed __int8 *)(v27 + 793));
  return v13;
}
