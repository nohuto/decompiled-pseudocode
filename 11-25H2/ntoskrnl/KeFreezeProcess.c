/*
 * XREFs of KeFreezeProcess @ 0x140494EF4
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x14065E768 (MiReAcquireOutSwappedProcessCommit.c)
 *     PsFreezeProcess @ 0x140AC7BE0 (PsFreezeProcess.c)
 * Callees:
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiFreezeSingleThread @ 0x1402F20B4 (KiFreezeSingleThread.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
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
    KiRaiseIrqlProcessIrqlFlags(a1);
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
      goto LABEL_8;
  }
  v9 = (_QWORD *)(v3 + 48);
  for ( i = *(_QWORD **)(v3 + 48); i != v9; i = (_QWORD *)*i )
    KiFreezeSingleThread((__int64)CurrentPrcb, (__int64)(i - 95), a2);
LABEL_8:
  ExReleaseSpinLockExclusiveFromDpcLevel(v6);
  KiExitDispatcher(CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v8;
}
