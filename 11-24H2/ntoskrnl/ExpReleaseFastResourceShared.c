/*
 * XREFs of ExpReleaseFastResourceShared @ 0x14028CC90
 * Callers:
 *     ExReleaseFastResourceShared @ 0x1404F22A0 (ExReleaseFastResourceShared.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1402CA924 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KiRemoveBoostThread @ 0x1402CBC34 (KiRemoveBoostThread.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x1402CBF00 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpReleaseFastResourceShared(
        signed __int64 *BugCheckParameter2,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  signed __int64 v7; // rax
  signed __int64 v8; // rcx
  signed __int64 v9; // rtt
  __int64 *v10; // rcx
  __int64 **v11; // rax
  unsigned __int8 CurrentIrql; // r12
  __int64 v13; // rdx
  signed __int64 v14; // rdx
  signed __int64 v15; // r9
  __int64 v16; // r8
  _BOOL8 v17; // rax
  BOOL v18; // r15d
  unsigned __int64 v19; // rcx
  bool v20; // zf
  signed __int64 v21; // rax
  signed __int64 v22; // r14
  signed __int64 *v23; // rcx
  signed __int64 v24; // r8
  struct _KPRCB *v25; // rcx
  unsigned __int32 *v26; // r8
  int v27; // r15d
  char v28; // cl
  int v29; // eax
  char v30; // di
  __int64 *v31; // rcx
  __int64 **v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  char v35; // di
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v42; // eax
  __int64 v43; // rdx
  unsigned __int32 v44; // ett
  __int64 v45; // rax
  _QWORD *v46; // r15
  int v47; // eax
  _QWORD *v48; // r14
  __int64 v49; // rdx
  _QWORD *v50; // rax
  _QWORD *v51; // rcx
  _QWORD *v52; // rax
  __int64 v53; // rcx
  _QWORD *v54; // rdx
  char v55; // cl
  char v56; // al
  struct _KPRCB *v57; // r14
  __int64 v58; // rax
  unsigned __int32 v59; // eax
  __int64 v60; // rdx
  unsigned __int32 v61; // ett
  signed __int64 v62; // rax
  signed __int32 v63[8]; // [rsp+0h] [rbp-98h] BYREF
  struct _KPRCB *v64; // [rsp+30h] [rbp-68h]
  __int64 v65; // [rsp+38h] [rbp-60h]
  __int128 v66; // [rsp+40h] [rbp-58h] BYREF
  __int64 v67; // [rsp+50h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h]
  _QWORD *v69; // [rsp+B0h] [rbp+18h]
  _QWORD *v70; // [rsp+B8h] [rbp+20h]

  --*((_DWORD *)a2 + 8);
  v66 = 0LL;
  v67 = 0LL;
  result = *((unsigned int *)a2 + 8);
  if ( (int)result > 0 )
    return result;
  _m_prefetchw(BugCheckParameter2);
  v7 = *BugCheckParameter2;
  do
  {
    v8 = v7 ^ (v7 ^ ((v7 & 0xFFFFFFFFFFFFFFFCuLL) - 1)) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v8 & 2) != 0 && (v8 < 0 || (v8 & 0xFFFFFFFFFFFFFFFCuLL) == 0) )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      *((_QWORD *)&v66 + 1) = BugCheckParameter2 + 6;
      *(_QWORD *)&v66 = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v13 = _InterlockedExchange64(BugCheckParameter2 + 6, (__int64)&v66);
        if ( v13 )
          KxWaitForLockOwnerShip(&v66, v13);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(&v66, BugCheckParameter2 + 6);
      }
      _m_prefetchw(BugCheckParameter2);
      v14 = *BugCheckParameter2;
      do
      {
        v15 = BugCheckParameter2[2];
        v16 = (v14 >> 2) - 1;
        v17 = v15 || *((_DWORD *)BugCheckParameter2 + 14);
        v18 = v17;
        v19 = (v14 & 0xFFFFFFFFFFFFFFFDuLL | (2 * v17)) ^ ((v14 & 0xFFFFFFFFFFFFFFFDuLL | (2 * v17)) ^ ((v14 & 0xFFFFFFFFFFFFFFFCuLL | (2 * v17) & 0xFFFFFFFFFFFFFFFCuLL) - 1)) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v14 >> 2 == 1 )
        {
          if ( v15 )
          {
            v19 |= 1uLL;
          }
          else
          {
            v58 = *((unsigned int *)BugCheckParameter2 + 14);
            if ( (_DWORD)v58 )
              v19 ^= (v19 ^ (v19 + 4 * v58)) & 0xFFFFFFFFFFFFFFFCuLL;
          }
        }
        if ( v19 == v14 )
          break;
        v21 = _InterlockedCompareExchange64(BugCheckParameter2, v19, v14);
        v20 = v14 == v21;
        v14 = v21;
      }
      while ( !v20 );
      v22 = 0LL;
      if ( !v16 )
      {
        v23 = (signed __int64 *)BugCheckParameter2[2];
        if ( v23 )
        {
          v14 = *v23;
          if ( (signed __int64 *)*v23 == v23 )
          {
            BugCheckParameter2[2] = 0LL;
          }
          else
          {
            BugCheckParameter2[2] = v14;
            v24 = *v23;
            v14 = v23[1];
            if ( *(signed __int64 **)(*v23 + 8) != v23 || *(signed __int64 **)v14 != v23 )
              goto LABEL_7;
            *(_QWORD *)v14 = v24;
            *(_QWORD *)(v24 + 8) = v14;
          }
          v22 = v23[2];
          v23[1] = (signed __int64)v23;
          *v23 = (signed __int64)v23;
          v69 = v23;
LABEL_42:
          v27 = 2 * v18;
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
          {
            KiReleaseQueuedSpinLockInstrumented(&v66, retaddr);
            goto LABEL_45;
          }
          _m_prefetchw(&v66);
          v33 = v66;
          if ( !(_QWORD)v66 )
          {
            if ( (__int128 *)_InterlockedCompareExchange64(
                               *((volatile signed __int64 **)&v66 + 1),
                               0LL,
                               (signed __int64)&v66) == &v66 )
              goto LABEL_45;
            v33 = KxWaitForLockChainValid(&v66);
          }
          *(_QWORD *)&v66 = 0LL;
          v34 = *((_QWORD *)&v66 + 1);
          if ( (((unsigned __int8)v34 ^ (unsigned __int8)_InterlockedExchange64(
                                                           (volatile __int64 *)(v33 + 8),
                                                           *((__int64 *)&v66 + 1))) & 4) != 0 )
          {
            _InterlockedOr(v63, 0);
            v35 = KeDisableInterrupts(v34, v14, ((unsigned __int64)(v33 + 8) >> 5) & 0x7F, KiHaltOnAddressHashTable);
            KiHaltOnAddressWakeEntireList(v38, _InterlockedExchange64((volatile __int64 *)(v37 + 8 * v36), 0LL));
            if ( v35 )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
              if ( SchedulerAssist )
              {
                _m_prefetchw(SchedulerAssist);
                v59 = *SchedulerAssist;
                do
                {
                  v60 = v59;
                  LODWORD(v60) = v59 & 0xFFDFFFFF;
                  v61 = v59;
                  v59 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v59 & 0xFFDFFFFF, v59);
                }
                while ( v61 != v59 );
                if ( (v59 & 0x200000) != 0 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb, v60, SchedulerAssist, v39);
              }
              _enable();
            }
          }
LABEL_45:
          v28 = 3;
          if ( !v22 )
            v28 = 1;
          v29 = v27 & 2;
          if ( !v22 )
            v29 = v27;
          v30 = v28 | 4;
          if ( !v29 )
            v30 = v28;
          if ( v69 )
          {
            v45 = KeGetCurrentIrql();
            v65 = v45;
            __writecr8(2uLL);
            if ( KiIrqlFlags )
              KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v45, 2LL);
            v46 = v69;
            v64 = KeGetCurrentPrcb();
            v47 = v30 & 4;
            do
            {
              v48 = v46;
              v46 = (_QWORD *)*v46;
              if ( v47 )
              {
                v49 = v48[6];
                if ( v49 )
                  KiAbConvertWaiterToOwnerEntry(*(_QWORD *)(v49 - 88LL * (*(_BYTE *)(v49 + 8) & 0x3F) - 16));
              }
              KiAcquireKobjectLockSafe(v48 + 3);
              v50 = v48 + 4;
              *((_DWORD *)v48 + 7) = 1;
              v51 = (_QWORD *)v48[4];
              while ( v51 != v50 )
              {
                v52 = v51;
                v53 = *v51;
                v70 = (_QWORD *)v53;
                v54 = (_QWORD *)v52[1];
                if ( *(_QWORD **)(v53 + 8) != v52 || (_QWORD *)*v54 != v52 )
                  goto LABEL_7;
                *v54 = v53;
                *(_QWORD *)(v53 + 8) = v54;
                v55 = *((_BYTE *)v52 + 16);
                if ( v55 == 1 )
                {
                  v56 = KiTryUnwaitThread(v64, v52, *((unsigned __int16 *)v52 + 9), 0LL);
                  v51 = v70;
                  v20 = v56 == 0;
                  v50 = v48 + 4;
                  if ( !v20 )
                  {
                    v20 = (*((_DWORD *)v48 + 7))-- == 1;
                    if ( v20 )
                      break;
                    v50 = v48 + 4;
                  }
                }
                else if ( v55 == 2 )
                {
                  *((_BYTE *)v52 + 17) = 5;
                  KiInsertQueueInternal(v52[3], v52);
                  v20 = (*((_DWORD *)v48 + 7))-- == 1;
                  if ( v20 )
                    break;
                  v51 = v70;
                  v50 = v48 + 4;
                }
                else
                {
                  if ( v55 == 4 )
                  {
                    *((_BYTE *)v52 + 17) = 5;
                    *((_DWORD *)v48 + 7) = 0;
                    KeInsertQueueDpc((PRKDPC)v52[3], v48 + 3, v52);
                  }
                  else
                  {
                    KiTryUnwaitThread(v64, v52, 256LL, 0LL);
                  }
                  v51 = v70;
                  v50 = v48 + 4;
                }
              }
              _InterlockedAnd((volatile signed __int32 *)v48 + 6, 0xFFFFFF7F);
              v47 = v30 & 4;
            }
            while ( v46 != v69 );
            v57 = v64;
            KiRemoveBoostThread(v64);
            KiExitDispatcher(v57, v65);
          }
          v31 = (__int64 *)*a2;
          v32 = (__int64 **)a2[1];
          if ( *(__int64 **)(*a2 + 8) == a2 && *v32 == a2 )
          {
            *v32 = v31;
            v31[1] = (__int64)v32;
            *a2 = 0LL;
            a2[1] = 0LL;
            a2[3] = 0LL;
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            __writecr8(CurrentIrql);
            goto LABEL_33;
          }
LABEL_7:
          __fastfail(3u);
        }
        if ( *((_DWORD *)BugCheckParameter2 + 14) )
        {
          v62 = BugCheckParameter2[1];
          BugCheckParameter2[1] = 0LL;
          v69 = (_QWORD *)v62;
          *((_DWORD *)BugCheckParameter2 + 14) = 0;
          goto LABEL_42;
        }
      }
      v69 = 0LL;
      goto LABEL_42;
    }
    v9 = v7;
    v7 = _InterlockedCompareExchange64(BugCheckParameter2, v8, v7);
  }
  while ( v9 != v7 );
  _disable();
  v10 = (__int64 *)*a2;
  v11 = (__int64 **)a2[1];
  if ( *(__int64 **)(*a2 + 8) != a2 || *v11 != a2 )
    goto LABEL_7;
  *v11 = v10;
  v10[1] = (__int64)v11;
  *a2 = 0LL;
  a2[1] = 0LL;
  v25 = KeGetCurrentPrcb();
  v26 = (unsigned __int32 *)v25->SchedulerAssist;
  if ( v26 )
  {
    _m_prefetchw(v26);
    v42 = *v26;
    do
    {
      v43 = v42;
      LODWORD(v43) = v42 & 0xFFDFFFFF;
      v44 = v42;
      v42 = _InterlockedCompareExchange((volatile signed __int32 *)v26, v42 & 0xFFDFFFFF, v42);
    }
    while ( v44 != v42 );
    if ( (v42 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v25, v43, v26, a4);
  }
  _enable();
  a2[3] = 0LL;
LABEL_33:
  result = *((unsigned __int8 *)a2 + 36);
  if ( (_BYTE)result )
  {
    result = KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2);
    *((_BYTE *)a2 + 36) = 0;
  }
  return result;
}
