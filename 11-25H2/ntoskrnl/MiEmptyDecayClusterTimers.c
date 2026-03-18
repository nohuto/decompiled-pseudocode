/*
 * XREFs of MiEmptyDecayClusterTimers @ 0x1403B3A50
 * Callers:
 *     MiWorkingSetManager @ 0x1403B36E0 (MiWorkingSetManager.c)
 * Callees:
 *     MiRelinkStandbyPage @ 0x14021A0E8 (MiRelinkStandbyPage.c)
 *     MiDecayNodeNowEmpty @ 0x14021BFD8 (MiDecayNodeNowEmpty.c)
 *     MiRelinkDecayClusterTimer @ 0x14021C10C (MiRelinkDecayClusterTimer.c)
 *     MiUnlinkDecayClusterTimer @ 0x14021C658 (MiUnlinkDecayClusterTimer.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiEmptyDecayClusterTimers(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 i; // rcx
  unsigned int v6; // r12d
  unsigned __int8 CurrentIrql; // bl
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  ULONG_PTR v16; // rbp
  volatile LONG *v17; // rcx
  __int64 v18; // rcx
  int v19; // [rsp+50h] [rbp+8h]

  result = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] - *(_QWORD *)(a1 + 16104);
  if ( result < 0x989680 )
    return result;
  v3 = *(_DWORD *)(a1 + 16096) & 3;
  *(_QWORD *)(a1 + 16104) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  v4 = (unsigned int)v3;
  i = 2LL;
  v6 = ((_BYTE)v3 + 1) & 3;
  if ( *(_QWORD *)(a1 + 8 * v3 + 16064) >> 33 != 0x7FFFFFFFLL )
    goto LABEL_14;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(i) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(i);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E358E0);
  if ( *(_QWORD *)(a1 + 8 * v4 + 16064) >> 33 == 0x7FFFFFFFLL )
  {
    *(_DWORD *)(a1 + 16096) = v6;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E358E0);
    goto LABEL_7;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E358E0);
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
  }
  __writecr8(CurrentIrql);
  for ( i = 2LL; ; i = 2LL )
  {
LABEL_14:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(i) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(i);
    }
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 3736));
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E358E0);
    v10 = *(_QWORD *)(a1 + 8 * v4 + 16064) >> 33;
    if ( v10 == 0x7FFFFFFF )
      break;
    v11 = v10 + qword_140E358C0;
    v12 = 48 * (v10 + qword_140E358C0) - 0x220000000000LL;
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E358E0);
      v14 = *(_QWORD *)(v12 + 16);
      if ( qword_140E2D940 && (v14 & 0x10) == 0 )
        v14 &= ~qword_140E2D940;
      v15 = (v14 >> 12) & 0xFFFFFFFFFFLL;
      if ( v15 == v11 )
      {
        if ( (*(_DWORD *)(v12 + 32) & 0x8000000) != 0 )
        {
          ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E358E0);
          MiUnlinkDecayClusterTimer(v12);
          MiRelinkDecayClusterTimer(v12, v6);
          ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E358E0);
        }
        else
        {
          MiDecayNodeNowEmpty(v11);
        }
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 3736));
        v16 = v12;
LABEL_27:
        v18 = v16;
      }
      else
      {
        v16 = 48 * v15 - 0x220000000000LL;
        v17 = (volatile LONG *)(a1 + 3736);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v19 = *(_DWORD *)(v16 + 32);
          ExReleaseSpinLockSharedFromDpcLevel(v17);
          MiRelinkStandbyPage(v16, HIBYTE(v19) & 7);
          goto LABEL_27;
        }
        ExReleaseSpinLockSharedFromDpcLevel(v17);
        v18 = v12;
      }
      MiUnlockPage(v18, CurrentIrql);
      continue;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E358E0);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 3736));
    if ( KiIrqlFlags )
    {
      LOBYTE(v13) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
    }
    __writecr8(CurrentIrql);
  }
  *(_DWORD *)(a1 + 16096) = v6;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E358E0);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 3736));
LABEL_7:
  if ( KiIrqlFlags )
  {
    LOBYTE(v8) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
