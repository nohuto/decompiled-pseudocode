/*
 * XREFs of KeFreezeProcess @ 0x1404634A0
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x14066A288 (MiReAcquireOutSwappedProcessCommit.c)
 *     PsFreezeProcess @ 0x14093A750 (PsFreezeProcess.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KiFreezeSingleThread @ 0x1404635BC (KiFreezeSingleThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeFreezeProcess(__int64 a1, char a2)
{
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r15
  volatile LONG *v6; // r12
  __int64 v7; // r8
  int v8; // ecx
  unsigned int v9; // esi
  _QWORD *v10; // rdi
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
  v8 = *(_DWORD *)(v3 + 336);
  v9 = v8 + ((*(_DWORD *)(v3 + 136) >> 3) & 1);
  if ( a2 )
  {
    *(_QWORD *)(v3 + 72) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    _interlockedbittestandset((volatile signed __int32 *)(v3 + 136), 3u);
  }
  else
  {
    *(_DWORD *)(v3 + 336) = v8 + 1;
    if ( v8 )
      goto LABEL_10;
  }
  v10 = (_QWORD *)(v3 + 48);
  for ( i = *(_QWORD **)(v3 + 48); i != v10; i = (_QWORD *)*i )
  {
    LOBYTE(v7) = a2;
    KiFreezeSingleThread(CurrentPrcb, i - 95, v7);
  }
LABEL_10:
  ExReleaseSpinLockExclusiveFromDpcLevel(v6);
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v9;
}
