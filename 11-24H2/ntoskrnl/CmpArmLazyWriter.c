/*
 * XREFs of CmpArmLazyWriter @ 0x140230640
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x14045AFD0 (CmpRecheckHiveVolumePolicy.c)
 *     CmpEnableLazyFlush @ 0x1404A7864 (CmpEnableLazyFlush.c)
 *     HvpMarkDirty @ 0x140886940 (HvpMarkDirty.c)
 *     HvMarkBaseBlockDirty @ 0x1409335C8 (HvMarkBaseBlockDirty.c)
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x1402BE1D0 (KeCancelTimer.c)
 *     KeSetCoalescableTimer @ 0x1402BE6B0 (KeSetCoalescableTimer.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall CmpArmLazyWriter(int a1, unsigned __int64 *a2, char a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rsi
  char *v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  ULONG v12; // r9d
  __int64 v13; // rdx

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
  v9 = (char *)&CmpLazyWriterData + v7;
  v10 = *(_QWORD *)((char *)&CmpLazyWriterData + v7 + 168) & 7LL;
  if ( v10 != 1 )
  {
    if ( v10 )
    {
      v11 = v10 - 2;
      if ( !v11 || v11 == 1 && v6 < (*(_QWORD *)((char *)&CmpLazyWriterData + v7 + 168) & 0xFFFFFFFFFFFFFFF8uLL) )
        *((_QWORD *)v9 + 21) = v6 & 0xFFFFFFFFFFFFFFF8uLL | 3;
      goto LABEL_8;
    }
    *((_QWORD *)v9 + 21) = 1LL;
    if ( !a3 )
    {
      v12 = *(_DWORD *)((char *)&CmpLazyWriterData + v7 + 184);
      v13 = -10000000LL * *(int *)((char *)&CmpLazyWriterData + v7 + 180);
LABEL_22:
      KeSetCoalescableTimer(
        (struct _KTIMER *)((char *)&CmpLazyWriterData + v7),
        (LARGE_INTEGER)v13,
        0,
        v12,
        (PKDPC)((char *)&CmpLazyWriterData + v7 + 64));
      goto LABEL_8;
    }
LABEL_25:
    v13 = -20000000LL;
    v12 = 1000;
    goto LABEL_22;
  }
  if ( a3 && KeCancelTimer((struct _KTIMER *)((char *)&CmpLazyWriterData + v7)) )
  {
    *((_QWORD *)v9 + 21) = 1LL;
    goto LABEL_25;
  }
LABEL_8:
  KxReleaseSpinLock((volatile signed __int64 *)((char *)&CmpLazyWriterData + v7 + 152));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v8);
  __writecr8(v8);
}
