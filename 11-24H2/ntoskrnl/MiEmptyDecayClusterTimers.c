/*
 * XREFs of MiEmptyDecayClusterTimers @ 0x140355310
 * Callers:
 *     MiWorkingSetManager @ 0x140354FA0 (MiWorkingSetManager.c)
 * Callees:
 *     MiDecayNodeNowEmpty @ 0x140225138 (MiDecayNodeNowEmpty.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiRelinkStandbyPage @ 0x140300158 (MiRelinkStandbyPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiRelinkDecayClusterTimer @ 0x1404402F0 (MiRelinkDecayClusterTimer.c)
 *     MiUnlinkDecayClusterTimer @ 0x140446934 (MiUnlinkDecayClusterTimer.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiEmptyDecayClusterTimers(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 i; // rcx
  unsigned int v7; // r12d
  unsigned __int8 CurrentIrql; // bl
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r15
  ULONG_PTR v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  ULONG_PTR v15; // rbp
  volatile LONG *v16; // rcx
  __int64 v17; // rcx
  int v18; // [rsp+50h] [rbp+8h]

  v2 = MEMORY[0xFFFFF780000003B0];
  result = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] - *(_QWORD *)(a1 + 16104);
  if ( result < 0x989680 )
    return result;
  v4 = *(_DWORD *)(a1 + 16096) & 3;
  *(_QWORD *)(a1 + 16104) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  v5 = (unsigned int)v4;
  i = 2LL;
  v7 = ((_BYTE)v4 + 1) & 3;
  if ( *(_QWORD *)(a1 + 8 * v4 + 16064) >> 33 != 0x7FFFFFFFLL )
    goto LABEL_14;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v2) = 2;
    LOBYTE(i) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(i, v2);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E35C60);
  if ( *(_QWORD *)(a1 + 8 * v5 + 16064) >> 33 == 0x7FFFFFFFLL )
  {
    *(_DWORD *)(a1 + 16096) = v7;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E35C60);
    goto LABEL_7;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E35C60);
  if ( KiIrqlFlags )
  {
    LOBYTE(v2) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
  }
  __writecr8(CurrentIrql);
  for ( i = 2LL; ; i = 2LL )
  {
LABEL_14:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v2) = 2;
      LOBYTE(i) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(i, v2);
    }
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 3736));
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E35C60);
    v10 = *(_QWORD *)(a1 + 8 * v5 + 16064) >> 33;
    if ( v10 == 0x7FFFFFFF )
      break;
    v11 = v10 + qword_140E35C40;
    v12 = 48 * (v10 + qword_140E35C40) - 0x220000000000LL;
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E35C60);
      v13 = *(_QWORD *)(v12 + 16);
      if ( qword_140E2DCC0 && (v13 & 0x10) == 0 )
        v13 &= ~qword_140E2DCC0;
      v14 = (v13 >> 12) & 0xFFFFFFFFFFLL;
      if ( v14 == v11 )
      {
        if ( (*(_DWORD *)(v12 + 32) & 0x8000000) != 0 )
        {
          ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E35C60);
          MiUnlinkDecayClusterTimer(v12);
          MiRelinkDecayClusterTimer(v12, v7);
          ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E35C60);
        }
        else
        {
          MiDecayNodeNowEmpty(v11);
        }
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 3736));
        v15 = v12;
LABEL_28:
        v17 = v15;
      }
      else
      {
        v15 = 48 * v14 - 0x220000000000LL;
        v16 = (volatile LONG *)(a1 + 3736);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v18 = *(_DWORD *)(v15 + 32);
          ExReleaseSpinLockSharedFromDpcLevel(v16);
          MiRelinkStandbyPage(v15, HIBYTE(v18) & 7);
          goto LABEL_28;
        }
        ExReleaseSpinLockSharedFromDpcLevel(v16);
        v17 = v12;
      }
      MiUnlockPage(v17, CurrentIrql);
      continue;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E35C60);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 3736));
    if ( KiIrqlFlags )
    {
      LOBYTE(v2) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
    }
    __writecr8(CurrentIrql);
  }
  *(_DWORD *)(a1 + 16096) = v7;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E35C60);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 3736));
LABEL_7:
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
