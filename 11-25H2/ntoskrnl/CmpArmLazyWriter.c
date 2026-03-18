/*
 * XREFs of CmpArmLazyWriter @ 0x140349918
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x140465694 (CmpRecheckHiveVolumePolicy.c)
 *     CmpEnableLazyFlush @ 0x1404ABD84 (CmpEnableLazyFlush.c)
 *     HvpMarkDirty @ 0x140880BA0 (HvpMarkDirty.c)
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 *     HvMarkBaseBlockDirty @ 0x140A4B658 (HvMarkBaseBlockDirty.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 *     KeSetCoalescableTimer @ 0x1402ECF90 (KeSetCoalescableTimer.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall CmpArmLazyWriter(int a1, unsigned __int64 *a2, char a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  ULONG v10; // r9d
  __int64 v11; // rdx

  if ( !CmpWorkerDataInitialized || CmpHoldLazyFlush )
    return;
  v4 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  if ( a2 )
  {
    v5 = v4 + 10000000LL * *((unsigned int *)&CmpLazyWriterData + 48 * a1 + 45);
    v6 = *a2;
    if ( *a2 >= v5 )
      v6 = v5;
  }
  else if ( a3 )
  {
    v6 = v4 + 20000000;
  }
  else
  {
    v6 = 10000000LL * *((unsigned int *)&CmpLazyWriterData + 48 * a1 + 45) + v4;
  }
  v7 = 192LL * a1;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)((char *)&CmpLazyWriterData + v7 + 152));
  if ( (*(_QWORD *)((char *)&CmpLazyWriterData + v7 + 168) & 7) == 0 )
  {
    *(_QWORD *)((char *)&CmpLazyWriterData + v7 + 168) = 1LL;
    if ( !a3 )
    {
      v10 = *(_DWORD *)((char *)&CmpLazyWriterData + v7 + 184);
      v11 = -10000000LL * *(int *)((char *)&CmpLazyWriterData + v7 + 180);
LABEL_22:
      KeSetCoalescableTimer(
        (struct _KTIMER *)((char *)&CmpLazyWriterData + v7),
        (LARGE_INTEGER)v11,
        0,
        v10,
        (PKDPC)((char *)&CmpLazyWriterData + v7 + 64));
      goto LABEL_9;
    }
LABEL_25:
    v11 = -20000000LL;
    v10 = 1000;
    goto LABEL_22;
  }
  if ( (*(_QWORD *)((char *)&CmpLazyWriterData + v7 + 168) & 7LL) != 1 )
  {
    if ( (*(_QWORD *)((char *)&CmpLazyWriterData + v7 + 168) & 7LL) == 2
      || (*(_QWORD *)((char *)&CmpLazyWriterData + v7 + 168) & 7LL) == 3
      && v6 < (*(_QWORD *)((char *)&CmpLazyWriterData + v7 + 168) & 0xFFFFFFFFFFFFFFF8uLL) )
    {
      *(_QWORD *)((char *)&CmpLazyWriterData + v7 + 168) = v6 & 0xFFFFFFFFFFFFFFF8uLL | 3;
    }
    goto LABEL_9;
  }
  if ( a3 && KeCancelTimer((struct _KTIMER *)((char *)&CmpLazyWriterData + v7)) )
  {
    *(_QWORD *)((char *)&CmpLazyWriterData + v7 + 168) = 1LL;
    goto LABEL_25;
  }
LABEL_9:
  KxReleaseSpinLock((char *)&CmpLazyWriterData + v7 + 152);
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = v8;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
  }
  __writecr8(v8);
}
