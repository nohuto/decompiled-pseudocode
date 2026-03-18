/*
 * XREFs of ExpReleaseFastResourceShared @ 0x14025C680
 * Callers:
 *     ExReleaseFastResourceShared @ 0x1404F49A0 (ExReleaseFastResourceShared.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiHaltOnAddressWakeEntireList @ 0x140321D94 (KiHaltOnAddressWakeEntireList.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KiRemoveBoostThread @ 0x1403230A4 (KiRemoveBoostThread.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x140323370 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiInsertQueueInternal @ 0x140323B94 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x1403D95F0 (KiTryUnwaitThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpReleaseFastResourceShared(signed __int64 *BugCheckParameter2, __int64 *a2)
{
  __int64 result; // rax
  signed __int64 v5; // rax
  signed __int64 v6; // rcx
  signed __int64 v7; // rtt
  __int64 *v8; // rcx
  __int64 **v9; // rax
  unsigned __int8 CurrentIrql; // r12
  signed __int64 v11; // rdx
  signed __int64 v12; // r9
  __int64 v13; // r8
  _BOOL8 v14; // rax
  BOOL v15; // r15d
  unsigned __int64 v16; // rcx
  bool v17; // zf
  signed __int64 v18; // rax
  signed __int64 v19; // r14
  signed __int64 *v20; // rcx
  struct _KPRCB *v21; // rcx
  signed __int32 *v22; // r8
  int v23; // r15d
  char v24; // cl
  int v25; // eax
  char v26; // di
  __int64 *v27; // rcx
  __int64 **v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  char v31; // di
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v37; // eax
  signed __int32 v38; // ett
  __int64 v39; // rax
  _QWORD *v40; // r15
  int v41; // eax
  _QWORD *v42; // r14
  __int64 v43; // rdx
  _QWORD *v44; // rax
  _QWORD *v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rcx
  _QWORD *v48; // rdx
  char v49; // cl
  char v50; // al
  struct _KPRCB *v51; // r14
  __int64 v52; // rax
  signed __int32 v53; // eax
  signed __int32 v54; // ett
  signed __int64 v55; // rax
  signed __int32 v56[8]; // [rsp+0h] [rbp-98h] BYREF
  struct _KPRCB *v57; // [rsp+30h] [rbp-68h]
  __int64 v58; // [rsp+38h] [rbp-60h]
  __int128 v59; // [rsp+40h] [rbp-58h] BYREF
  __int64 v60; // [rsp+50h] [rbp-48h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  _QWORD *v62; // [rsp+B0h] [rbp+18h]
  _QWORD *v63; // [rsp+B8h] [rbp+20h]

  --*((_DWORD *)a2 + 8);
  v59 = 0LL;
  v60 = 0LL;
  result = *((unsigned int *)a2 + 8);
  if ( (int)result > 0 )
    return result;
  _m_prefetchw(BugCheckParameter2);
  v5 = *BugCheckParameter2;
  do
  {
    v6 = v5 ^ (v5 ^ ((v5 & 0xFFFFFFFFFFFFFFFCuLL) - 1)) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v6 & 2) != 0 && (v6 < 0 || (v6 & 0xFFFFFFFFFFFFFFFCuLL) == 0) )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      *((_QWORD *)&v59 + 1) = BugCheckParameter2 + 6;
      *(_QWORD *)&v59 = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        if ( _InterlockedExchange64(BugCheckParameter2 + 6, (__int64)&v59) )
          KxWaitForLockOwnerShip(&v59);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(&v59, BugCheckParameter2 + 6);
      }
      _m_prefetchw(BugCheckParameter2);
      v11 = *BugCheckParameter2;
      do
      {
        v12 = BugCheckParameter2[2];
        v13 = (v11 >> 2) - 1;
        v14 = v12 || *((_DWORD *)BugCheckParameter2 + 14);
        v15 = v14;
        v16 = (v11 & 0xFFFFFFFFFFFFFFFDuLL | (2 * v14)) ^ ((v11 & 0xFFFFFFFFFFFFFFFDuLL | (2 * v14)) ^ ((v11 & 0xFFFFFFFFFFFFFFFCuLL | (2 * v14) & 0xFFFFFFFFFFFFFFFCuLL) - 1)) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v11 >> 2 == 1 )
        {
          if ( v12 )
          {
            v16 |= 1uLL;
          }
          else
          {
            v52 = *((unsigned int *)BugCheckParameter2 + 14);
            if ( (_DWORD)v52 )
              v16 ^= (v16 ^ (v16 + 4 * v52)) & 0xFFFFFFFFFFFFFFFCuLL;
          }
        }
        if ( v16 == v11 )
          break;
        v18 = _InterlockedCompareExchange64(BugCheckParameter2, v16, v11);
        v17 = v11 == v18;
        v11 = v18;
      }
      while ( !v17 );
      v19 = 0LL;
      if ( !v13 )
      {
        v20 = (signed __int64 *)BugCheckParameter2[2];
        if ( v20 )
        {
          v11 = *v20;
          if ( (signed __int64 *)*v20 == v20 )
          {
            BugCheckParameter2[2] = 0LL;
          }
          else
          {
            BugCheckParameter2[2] = v11;
            v13 = *v20;
            v11 = v20[1];
            if ( *(signed __int64 **)(*v20 + 8) != v20 || *(signed __int64 **)v11 != v20 )
              goto LABEL_7;
            *(_QWORD *)v11 = v13;
            *(_QWORD *)(v13 + 8) = v11;
          }
          v19 = v20[2];
          v20[1] = (signed __int64)v20;
          *v20 = (signed __int64)v20;
          v62 = v20;
LABEL_42:
          v23 = 2 * v15;
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
          {
            KiReleaseQueuedSpinLockInstrumented(&v59, retaddr, v13, v12);
            goto LABEL_45;
          }
          _m_prefetchw(&v59);
          v29 = v59;
          if ( !(_QWORD)v59 )
          {
            if ( (__int128 *)_InterlockedCompareExchange64(
                               *((volatile signed __int64 **)&v59 + 1),
                               0LL,
                               (signed __int64)&v59) == &v59 )
              goto LABEL_45;
            v29 = KxWaitForLockChainValid(&v59, v11, v13, v12);
          }
          *(_QWORD *)&v59 = 0LL;
          v30 = *((_QWORD *)&v59 + 1);
          if ( (((unsigned __int8)v30 ^ (unsigned __int8)_InterlockedExchange64(
                                                           (volatile __int64 *)(v29 + 8),
                                                           *((__int64 *)&v59 + 1))) & 4) != 0 )
          {
            _InterlockedOr(v56, 0);
            v31 = KeDisableInterrupts(v30, v11, ((unsigned __int64)(v29 + 8) >> 5) & 0x7F);
            KiHaltOnAddressWakeEntireList(v34, _InterlockedExchange64((volatile __int64 *)(v33 + 8 * v32), 0LL));
            if ( v31 )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
              if ( SchedulerAssist )
              {
                _m_prefetchw(SchedulerAssist);
                v53 = *SchedulerAssist;
                do
                {
                  v54 = v53;
                  v53 = _InterlockedCompareExchange(SchedulerAssist, v53 & 0xFFDFFFFF, v53);
                }
                while ( v54 != v53 );
                if ( (v53 & 0x200000) != 0 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
              _enable();
            }
          }
LABEL_45:
          v24 = 3;
          if ( !v19 )
            v24 = 1;
          v25 = v23 & 2;
          if ( !v19 )
            v25 = v23;
          v26 = v24 | 4;
          if ( !v25 )
            v26 = v24;
          if ( v62 )
          {
            v39 = KeGetCurrentIrql();
            v58 = v39;
            __writecr8(2uLL);
            if ( KiIrqlFlags )
              KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v39, 2LL);
            v40 = v62;
            v57 = KeGetCurrentPrcb();
            v41 = v26 & 4;
            do
            {
              v42 = v40;
              v40 = (_QWORD *)*v40;
              if ( v41 )
              {
                v43 = v42[6];
                if ( v43 )
                  KiAbConvertWaiterToOwnerEntry(*(_QWORD *)(v43 - 88LL * (*(_BYTE *)(v43 + 8) & 0x3F) - 16));
              }
              KiAcquireKobjectLockSafe(v42 + 3);
              v44 = v42 + 4;
              *((_DWORD *)v42 + 7) = 1;
              v45 = (_QWORD *)v42[4];
              while ( v45 != v44 )
              {
                v46 = v45;
                v47 = *v45;
                v63 = (_QWORD *)v47;
                v48 = (_QWORD *)v46[1];
                if ( *(_QWORD **)(v47 + 8) != v46 || (_QWORD *)*v48 != v46 )
                  goto LABEL_7;
                *v48 = v47;
                *(_QWORD *)(v47 + 8) = v48;
                v49 = *((_BYTE *)v46 + 16);
                if ( v49 == 1 )
                {
                  v50 = KiTryUnwaitThread(v57, v46, *((unsigned __int16 *)v46 + 9), 0LL);
                  v45 = v63;
                  v17 = v50 == 0;
                  v44 = v42 + 4;
                  if ( !v17 )
                  {
                    v17 = (*((_DWORD *)v42 + 7))-- == 1;
                    if ( v17 )
                      break;
                    v44 = v42 + 4;
                  }
                }
                else if ( v49 == 2 )
                {
                  *((_BYTE *)v46 + 17) = 5;
                  KiInsertQueueInternal(v46[3], v46);
                  v17 = (*((_DWORD *)v42 + 7))-- == 1;
                  if ( v17 )
                    break;
                  v45 = v63;
                  v44 = v42 + 4;
                }
                else
                {
                  if ( v49 == 4 )
                  {
                    *((_BYTE *)v46 + 17) = 5;
                    *((_DWORD *)v42 + 7) = 0;
                    KeInsertQueueDpc((PRKDPC)v46[3], v42 + 3, v46);
                  }
                  else
                  {
                    KiTryUnwaitThread(v57, v46, 256LL, 0LL);
                  }
                  v45 = v63;
                  v44 = v42 + 4;
                }
              }
              _InterlockedAnd((volatile signed __int32 *)v42 + 6, 0xFFFFFF7F);
              v41 = v26 & 4;
            }
            while ( v40 != v62 );
            v51 = v57;
            KiRemoveBoostThread(v57);
            KiExitDispatcher(v51, v58);
          }
          v27 = (__int64 *)*a2;
          v28 = (__int64 **)a2[1];
          if ( *(__int64 **)(*a2 + 8) == a2 && *v28 == a2 )
          {
            *v28 = v27;
            v27[1] = (__int64)v28;
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
          v55 = BugCheckParameter2[1];
          BugCheckParameter2[1] = 0LL;
          v62 = (_QWORD *)v55;
          *((_DWORD *)BugCheckParameter2 + 14) = 0;
          goto LABEL_42;
        }
      }
      v62 = 0LL;
      goto LABEL_42;
    }
    v7 = v5;
    v5 = _InterlockedCompareExchange64(BugCheckParameter2, v6, v5);
  }
  while ( v7 != v5 );
  _disable();
  v8 = (__int64 *)*a2;
  v9 = (__int64 **)a2[1];
  if ( *(__int64 **)(*a2 + 8) != a2 || *v9 != a2 )
    goto LABEL_7;
  *v9 = v8;
  v8[1] = (__int64)v9;
  *a2 = 0LL;
  a2[1] = 0LL;
  v21 = KeGetCurrentPrcb();
  v22 = (signed __int32 *)v21->SchedulerAssist;
  if ( v22 )
  {
    _m_prefetchw(v22);
    v37 = *v22;
    do
    {
      v38 = v37;
      v37 = _InterlockedCompareExchange(v22, v37 & 0xFFDFFFFF, v37);
    }
    while ( v38 != v37 );
    if ( (v37 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v21);
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
