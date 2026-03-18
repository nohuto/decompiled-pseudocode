/*
 * XREFs of MiReturnLockedVadOrNextVa @ 0x1402FC120
 * Callers:
 *     MmQueryVirtualMemory @ 0x140986420 (MmQueryVirtualMemory.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     MiGetNextVad @ 0x1402614BC (MiGetNextVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     MiUnlockAndDereferenceVadShared @ 0x1402BB330 (MiUnlockAndDereferenceVadShared.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiWaitForVadDeletion @ 0x1402FBA58 (MiWaitForVadDeletion.c)
 *     MiLockVadShared @ 0x1402FC580 (MiLockVadShared.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReturnLockedVadOrNextVa(unsigned __int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  _KPROCESS *Process; // r15
  __int64 v8; // rdx
  _DWORD *v9; // rbx
  unsigned __int8 CurrentIrql; // si
  _QWORD *v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  bool v20; // zf
  __int64 result; // rax
  _KPROCESS *v22; // rcx
  volatile signed __int32 *v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 NextVad; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
LABEL_2:
  v8 = 2LL;
LABEL_3:
  --CurrentThread->SpecialApcDisable;
  v9 = (_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v8) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v8);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v9);
    v28 = *v9 & 0x7FFFFFFF;
    while ( 1 )
    {
      v29 = v28;
      v28 = _InterlockedCompareExchange(v9, v28 + 1, v28);
      if ( v29 == v28 )
        break;
      if ( v28 < 0 )
      {
        ExpWaitForSpinLockSharedAndAcquire(v9, CurrentIrql);
        break;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v9, CurrentIrql);
  }
  if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    MiUnlockVadTree(0, CurrentIrql);
    v20 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v20 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v31, v30);
    *a2 = 0LL;
    return 3221225738LL;
  }
  else
  {
    v11 = *(_QWORD **)&Process[3].Header.Lock;
    if ( v11 )
    {
      v12 = a1 >> 12;
      while ( 1 )
      {
        v13 = (unsigned __int64)v11;
        if ( !v11 )
          break;
        v14 = *((unsigned int *)v11 + 6) | ((unsigned __int64)*((unsigned __int8 *)v11 + 32) << 32);
        if ( v12 < v14 )
          goto LABEL_16;
        if ( v12 <= (*((unsigned int *)v11 + 7) | ((unsigned __int64)*((unsigned __int8 *)v11 + 33) << 32)) )
        {
          if ( !_InterlockedIncrement((volatile signed __int32 *)v11 + 9) )
            __fastfail(0xEu);
          v22 = KeGetCurrentThread()->ApcState.Process;
          v23 = (volatile signed __int32 *)&v22[2].ActiveProcessors[3].StaticBitmap[25] + 1;
          if ( CurrentIrql == 17 )
          {
            ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&v22[2].ActiveProcessors[3].StaticBitmap[25] + 1);
          }
          else
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            {
              _InterlockedAnd(v23, 0xBFFFFFFF);
              _InterlockedDecrement(v23);
            }
            else
            {
              ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v23, retaddr);
            }
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            __writecr8(CurrentIrql);
          }
          MiLockVadShared(CurrentThread, v11);
          if ( (v11[6] & 4) == 0 )
          {
            v20 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v20
              && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery(v25, v24);
            }
            if ( v12 >= (*((unsigned int *)v11 + 6) | ((unsigned __int64)*((unsigned __int8 *)v11 + 32) << 32))
              && v12 <= (*((unsigned int *)v11 + 7) | ((unsigned __int64)*((unsigned __int8 *)v11 + 33) << 32)) )
            {
              *a2 = v11;
              return 0LL;
            }
            MiUnlockAndDereferenceVadShared((__int64)v11, v24, v26, v27);
            goto LABEL_2;
          }
          LODWORD(CurrentThread[1].Queue) &= ~0x4000u;
          if ( _InterlockedCompareExchange64(v11 + 5, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v11 + 5);
          KeAbPostRelease((ULONG_PTR)(v11 + 5));
          v20 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v20
            && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v34, v33);
          }
          --CurrentThread->SpecialApcDisable;
          v35 = KeAbPreAcquire(v11 + 5, 0LL, 0LL);
          v36 = v35;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v11 + 10, 0LL) )
            ExfAcquirePushLockExclusiveEx(v11 + 5, v35, v11 + 5);
          if ( v36 )
            *(_BYTE *)(v36 + 10) = 1;
          LODWORD(CurrentThread[1].Queue) |= 0x80u;
          MiWaitForVadDeletion((__int64)v11);
          MiUnlockAndDereferenceVad(v11);
          v8 = 2LL;
          v20 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v20
            && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v37, 2LL);
            goto LABEL_2;
          }
          goto LABEL_3;
        }
        if ( v12 < v14 )
LABEL_16:
          v15 = (_QWORD *)*v11;
        else
          v15 = (_QWORD *)v11[1];
        v11 = v15;
        if ( !v15 )
        {
          v16 = *(unsigned int *)(v13 + 24);
          if ( (v16 | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32)) >= v12 )
          {
            v17 = (v16 | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32)) << 12;
            goto LABEL_23;
          }
          NextVad = MiGetNextVad(v13);
          if ( NextVad )
          {
            v17 = (*(unsigned int *)(NextVad + 24) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 32) << 32)) << 12;
            goto LABEL_23;
          }
          break;
        }
      }
    }
    v17 = 0x7FFFFFFF0000LL;
LABEL_23:
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    v20 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v20 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v19, v18);
    result = 0LL;
    *a3 = v17;
    *a2 = 0LL;
  }
  return result;
}
