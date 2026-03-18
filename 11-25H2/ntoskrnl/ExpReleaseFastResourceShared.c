/*
 * XREFs of ExpReleaseFastResourceShared @ 0x14027CE20
 * Callers:
 *     ExReleaseFastResourceShared @ 0x1404F2490 (ExReleaseFastResourceShared.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x14027E670 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiRemoveBoostThread @ 0x14027EE94 (KiRemoveBoostThread.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
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
  signed __int32 *v26; // r8
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  int v29; // r15d
  __int64 v30; // rax
  __int64 v31; // rcx
  char v32; // di
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int v38; // ecx
  int v39; // eax
  unsigned int v40; // edi
  __int64 *v41; // rcx
  __int64 **v42; // rax
  signed __int32 v43; // eax
  signed __int32 v44; // ett
  __int64 v45; // rax
  int v46; // ecx
  _QWORD *v47; // rax
  _QWORD *v48; // r13
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  _QWORD *v52; // r14
  _QWORD *v53; // rcx
  _QWORD *v54; // rax
  _QWORD *v55; // rdx
  char v56; // cl
  __int64 v57; // rax
  signed __int64 v58; // rax
  signed __int32 v59[8]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD *v60; // [rsp+30h] [rbp-68h]
  __int64 v61; // [rsp+38h] [rbp-60h]
  __int128 v62; // [rsp+40h] [rbp-58h] BYREF
  __int64 v63; // [rsp+50h] [rbp-48h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  _QWORD *v65; // [rsp+B0h] [rbp+18h]
  struct _KPRCB *v66; // [rsp+B8h] [rbp+20h]

  --*((_DWORD *)a2 + 8);
  v62 = 0LL;
  v63 = 0LL;
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
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
      *((_QWORD *)&v62 + 1) = BugCheckParameter2 + 6;
      *(_QWORD *)&v62 = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v13 = _InterlockedExchange64(BugCheckParameter2 + 6, (__int64)&v62);
        if ( v13 )
          KxWaitForLockOwnerShip(&v62, v13, a3, a4);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(&v62, BugCheckParameter2 + 6);
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
            v57 = *((unsigned int *)BugCheckParameter2 + 14);
            if ( (_DWORD)v57 )
              v19 ^= (v19 ^ (v19 + 4 * v57)) & 0xFFFFFFFFFFFFFFFCuLL;
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
          v65 = v23;
LABEL_41:
          v29 = 2 * v18;
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            _m_prefetchw(&v62);
            v30 = v62;
            if ( !(_QWORD)v62 )
            {
              if ( (__int128 *)_InterlockedCompareExchange64(
                                 *((volatile signed __int64 **)&v62 + 1),
                                 0LL,
                                 (signed __int64)&v62) == &v62 )
                goto LABEL_49;
              v30 = KxWaitForLockChainValid(&v62);
            }
            *(_QWORD *)&v62 = 0LL;
            v31 = *((_QWORD *)&v62 + 1);
            if ( (((unsigned __int8)v31 ^ (unsigned __int8)_InterlockedExchange64(
                                                             (volatile __int64 *)(v30 + 8),
                                                             *((__int64 *)&v62 + 1))) & 4) != 0 )
            {
              _InterlockedOr(v59, 0);
              v32 = KeDisableInterrupts(v31, v14, ((unsigned __int64)(v30 + 8) >> 5) & 0x7F);
              KiHaltOnAddressWakeEntireList(v35, _InterlockedExchange64((volatile __int64 *)(v34 + 8 * v33), 0LL));
              if ( v32 )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
                if ( SchedulerAssist )
                {
                  _m_prefetchw(SchedulerAssist);
                  v43 = *SchedulerAssist;
                  do
                  {
                    v44 = v43;
                    v43 = _InterlockedCompareExchange(SchedulerAssist, v43 & 0xFFDFFFFF, v43);
                  }
                  while ( v44 != v43 );
                  if ( (v43 & 0x200000) != 0 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
                _enable();
              }
            }
          }
          else
          {
            KiReleaseQueuedSpinLockInstrumented(&v62, retaddr);
          }
LABEL_49:
          v38 = 3;
          if ( !v22 )
            v38 = 1;
          v39 = v29 & 2;
          if ( !v22 )
            v39 = v29;
          v40 = v38 | 4;
          if ( !v39 )
            v40 = v38;
          if ( !v65 )
          {
LABEL_56:
            v41 = (__int64 *)*a2;
            v42 = (__int64 **)a2[1];
            if ( *(__int64 **)(*a2 + 8) == a2 && *v42 == a2 )
            {
              *v42 = v41;
              v41[1] = (__int64)v42;
              *a2 = 0LL;
              a2[1] = 0LL;
              a2[3] = 0LL;
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
              __writecr8(CurrentIrql);
              goto LABEL_30;
            }
LABEL_7:
            __fastfail(3u);
          }
          v45 = KeGetCurrentIrql();
          v61 = v45;
          __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v45);
          v46 = v40 & 4;
          v66 = KeGetCurrentPrcb();
          v47 = v65;
LABEL_70:
          v48 = v47;
          v60 = (_QWORD *)*v47;
          if ( v46 )
          {
            v49 = v47[6];
            if ( v49 )
              KiAbConvertWaiterToOwnerEntry(*(_QWORD *)(v49 - 88LL * (*(_BYTE *)(v49 + 8) & 0x3F) - 16));
          }
          KiAcquireKobjectLockSafe(v48 + 3);
          *((_DWORD *)v48 + 7) = 1;
          v52 = (_QWORD *)v48[4];
          while ( 1 )
          {
            while ( 1 )
            {
              if ( v52 == v48 + 4 )
              {
LABEL_80:
                _InterlockedAnd((volatile signed __int32 *)v48 + 6, 0xFFFFFF7F);
                v47 = v60;
                v46 = v40 & 4;
                if ( v60 == v65 )
                {
                  KiRemoveBoostThread(v66, v66->CurrentThread, v50, v51);
                  KiExitDispatcher((_DWORD)v66, 0, 1, (v40 >> 1) & 1, v61);
                  goto LABEL_56;
                }
                goto LABEL_70;
              }
              v53 = (_QWORD *)*v52;
              v54 = v52;
              v52 = v53;
              v55 = (_QWORD *)v54[1];
              if ( (_QWORD *)v53[1] != v54 || (_QWORD *)*v55 != v54 )
                goto LABEL_7;
              *v55 = v53;
              v53[1] = v55;
              v56 = *((_BYTE *)v54 + 16);
              if ( v56 != 1 )
                break;
              if ( (unsigned __int8)KiTryUnwaitThread(v66, v54, *((unsigned __int16 *)v54 + 9), 0LL) )
              {
LABEL_79:
                v20 = (*((_DWORD *)v48 + 7))-- == 1;
                if ( v20 )
                  goto LABEL_80;
              }
            }
            if ( v56 == 2 )
            {
              *((_BYTE *)v54 + 17) = 5;
              KiInsertQueueInternal(v54[3], v54);
              goto LABEL_79;
            }
            if ( v56 == 4 )
            {
              *((_BYTE *)v54 + 17) = 5;
              *((_DWORD *)v48 + 7) = 0;
              KeInsertQueueDpc((PRKDPC)v54[3], v48 + 3, v54);
            }
            else
            {
              KiTryUnwaitThread(v66, v54, 256LL, 0LL);
            }
          }
        }
        if ( *((_DWORD *)BugCheckParameter2 + 14) )
        {
          v58 = BugCheckParameter2[1];
          BugCheckParameter2[1] = 0LL;
          v65 = (_QWORD *)v58;
          *((_DWORD *)BugCheckParameter2 + 14) = 0;
          goto LABEL_41;
        }
      }
      v65 = 0LL;
      goto LABEL_41;
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
  v26 = (signed __int32 *)v25->SchedulerAssist;
  if ( v26 )
  {
    _m_prefetchw(v26);
    v27 = *v26;
    do
    {
      v28 = v27;
      v27 = _InterlockedCompareExchange(v26, v27 & 0xFFDFFFFF, v27);
    }
    while ( v28 != v27 );
    if ( (v27 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v25);
  }
  _enable();
  a2[3] = 0LL;
LABEL_30:
  result = *((unsigned __int8 *)a2 + 36);
  if ( (_BYTE)result )
  {
    result = KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2);
    *((_BYTE *)a2 + 36) = 0;
  }
  return result;
}
