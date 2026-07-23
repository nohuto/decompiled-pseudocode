/*
 * XREFs of MiReturnLockedVadOrNextVa @ 0x140345020
 * Callers:
 *     MmQueryVirtualMemory @ 0x14096EC30 (MmQueryVirtualMemory.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiGetNextVad @ 0x140291ACC (MiGetNextVad.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockVadShared @ 0x140345480 (MiLockVadShared.c)
 *     MiWaitForVadDeletion @ 0x140345500 (MiWaitForVadDeletion.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140362A70 (MiUnlockAndDereferenceVadShared.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReturnLockedVadOrNextVa(unsigned __int64 a1, _QWORD *a2, unsigned __int64 *a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  _KPROCESS *Process; // r15
  __int64 v9; // rdx
  _DWORD *v10; // rbx
  unsigned __int8 CurrentIrql; // si
  _QWORD *v12; // rbx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  bool v23; // zf
  __int64 result; // rax
  _KPROCESS *v25; // rcx
  volatile signed __int32 *v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  signed __int32 v31; // eax
  signed __int32 v32; // ett
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int64 NextVad; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  char *v42; // rax
  char *v43; // rsi
  __int64 v44; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
LABEL_2:
  v9 = 2LL;
LABEL_3:
  --CurrentThread->SpecialApcDisable;
  v10 = (_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v9);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v10);
    v31 = *v10 & 0x7FFFFFFF;
    while ( 1 )
    {
      v32 = v31;
      v31 = _InterlockedCompareExchange(v10, v31 + 1, v31);
      if ( v32 == v31 )
        break;
      if ( v31 < 0 )
      {
        ExpWaitForSpinLockSharedAndAcquire(v10, CurrentIrql, (__int64)a3, a4);
        break;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10, CurrentIrql);
  }
  if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    MiUnlockVadTree(0, CurrentIrql);
    v23 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v23 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v34, v33, v35, v36);
    *a2 = 0LL;
    return 3221225738LL;
  }
  else
  {
    v12 = *(_QWORD **)&Process[3].Header.Lock;
    if ( v12 )
    {
      v13 = a1 >> 12;
      while ( 1 )
      {
        v14 = (unsigned __int64)v12;
        if ( !v12 )
          break;
        v15 = *((unsigned int *)v12 + 6) | ((unsigned __int64)*((unsigned __int8 *)v12 + 32) << 32);
        if ( v13 < v15 )
          goto LABEL_16;
        if ( v13 <= (*((unsigned int *)v12 + 7) | ((unsigned __int64)*((unsigned __int8 *)v12 + 33) << 32)) )
        {
          if ( !_InterlockedIncrement((volatile signed __int32 *)v12 + 9) )
            __fastfail(0xEu);
          v25 = KeGetCurrentThread()->ApcState.Process;
          v26 = (volatile signed __int32 *)&v25[2].ActiveProcessors[3].StaticBitmap[25] + 1;
          if ( CurrentIrql == 17 )
          {
            ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&v25[2].ActiveProcessors[3].StaticBitmap[25] + 1);
          }
          else
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            {
              _InterlockedAnd(v26, 0xBFFFFFFF);
              _InterlockedDecrement(v26);
            }
            else
            {
              ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v26, retaddr);
            }
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            __writecr8(CurrentIrql);
          }
          MiLockVadShared(CurrentThread, v12);
          if ( (v12[6] & 4) == 0 )
          {
            v23 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v23
              && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery(v28, v27, v29, v30);
            }
            if ( v13 >= (*((unsigned int *)v12 + 6) | ((unsigned __int64)*((unsigned __int8 *)v12 + 32) << 32))
              && v13 <= (*((unsigned int *)v12 + 7) | ((unsigned __int64)*((unsigned __int8 *)v12 + 33) << 32)) )
            {
              *a2 = v12;
              return 0LL;
            }
            MiUnlockAndDereferenceVadShared(v12);
            goto LABEL_2;
          }
          LODWORD(CurrentThread[1].Queue) &= ~0x4000u;
          if ( _InterlockedCompareExchange64(v12 + 5, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v12 + 5);
          KeAbPostRelease((ULONG_PTR)(v12 + 5));
          v23 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v23
            && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v39, v38, v40, v41);
          }
          --CurrentThread->SpecialApcDisable;
          v42 = (char *)KeAbPreAcquire((__int64)(v12 + 5), 0LL);
          v43 = v42;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v12 + 10, 0LL) )
            ExfAcquirePushLockExclusiveEx(v12 + 5, v42, (__int64)(v12 + 5));
          if ( v43 )
            v43[10] = 1;
          LODWORD(CurrentThread[1].Queue) |= 0x80u;
          MiWaitForVadDeletion(v12);
          MiUnlockAndDereferenceVad(v12);
          v9 = 2LL;
          v23 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v23
            && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v44, 2LL, a3, a4);
            goto LABEL_2;
          }
          goto LABEL_3;
        }
        if ( v13 < v15 )
LABEL_16:
          v16 = (_QWORD *)*v12;
        else
          v16 = (_QWORD *)v12[1];
        v12 = v16;
        if ( !v16 )
        {
          v17 = *(unsigned int *)(v14 + 24);
          if ( (v17 | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) >= v13 )
          {
            v18 = (v17 | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) << 12;
            goto LABEL_23;
          }
          NextVad = MiGetNextVad(v14);
          if ( NextVad )
          {
            v18 = (*(unsigned int *)(NextVad + 24) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 32)) << 12;
            goto LABEL_23;
          }
          break;
        }
      }
    }
    v18 = 0x7FFFFFFF0000LL;
LABEL_23:
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    v23 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v23 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v20, v19, v21, v22);
    result = 0LL;
    *a3 = v18;
    *a2 = 0LL;
  }
  return result;
}
