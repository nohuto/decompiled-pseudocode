/*
 * XREFs of KeFreezeProcess @ 0x14048E57C
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x14066B458 (MiReAcquireOutSwappedProcessCommit.c)
 *     PsFreezeProcess @ 0x140ACF964 (PsFreezeProcess.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiFreezeSingleThread @ 0x1402DD7D8 (KiFreezeSingleThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeFreezeProcess(__int64 a1, char a2)
{
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r15
  volatile LONG *v6; // r12
  int v7; // ecx
  unsigned int v8; // esi
  _QWORD *v9; // rdi
  _QWORD *i; // rbx

  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = (volatile LONG *)(v3 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  v7 = *(_DWORD *)(v3 + 336);
  v8 = v7 + ((*(_DWORD *)(v3 + 136) >> 3) & 1);
  if ( a2 )
  {
    *(_QWORD *)(v3 + 72) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    _interlockedbittestandset((volatile signed __int32 *)(v3 + 136), 3u);
  }
  else
  {
    *(_DWORD *)(v3 + 336) = v7 + 1;
    if ( v7 )
      goto LABEL_10;
  }
  v9 = (_QWORD *)(v3 + 48);
  for ( i = *(_QWORD **)(v3 + 48); i != v9; i = (_QWORD *)*i )
    KiFreezeSingleThread((__int64)CurrentPrcb, (__int64)(i - 95), a2);
LABEL_10:
  ExReleaseSpinLockExclusiveFromDpcLevel(v6);
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v8;
}
