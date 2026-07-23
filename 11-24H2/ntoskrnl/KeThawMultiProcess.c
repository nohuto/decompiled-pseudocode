/*
 * XREFs of KeThawMultiProcess @ 0x14048A9E4
 * Callers:
 *     PsThawMultiProcess @ 0x1404E6564 (PsThawMultiProcess.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiThawSingleThread @ 0x1402DD1F8 (KiThawSingleThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiReleaseProcessLockExclusive @ 0x1403A2318 (KiReleaseProcessLockExclusive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeThawMultiProcess(__int64 a1, char a2, unsigned int a3)
{
  _QWORD **v4; // rdi
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r15
  volatile LONG *v9; // r13
  __int64 v10; // rdx
  unsigned int v11; // esi
  signed __int8 v12; // cl
  __int64 v13; // r8
  _QWORD *i; // rax
  int v15; // ecx
  _QWORD *j; // rbx

  v4 = (_QWORD **)(a1 + 48);
  v6 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = (volatile LONG *)(v6 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v6 + 64));
  v10 = *(unsigned int *)(v6 + 336);
  v11 = v10 + ((*(_DWORD *)(v6 + 136) >> 3) & 1);
  if ( !a2 )
  {
    v15 = 0;
    if ( a3 <= (unsigned int)v10 )
      v15 = v10 - a3;
    *(_DWORD *)(v6 + 336) = v15;
    if ( (_DWORD)v10 && !v15 )
      goto LABEL_14;
LABEL_10:
    LOBYTE(v10) = CurrentIrql;
    KiReleaseProcessLockExclusive(v6, v10);
    return v11;
  }
  v12 = _interlockedbittestandreset((volatile signed __int32 *)(v6 + 136), 3u);
  v13 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v6 + 72) - MEMORY[0xFFFFF780000003B0];
  if ( (*(_DWORD *)(v6 + 136) & 0x10) != 0 )
  {
    for ( i = *v4; i != v4; i = (_QWORD *)*i )
      *(i - 64) += v13;
  }
  if ( !v12 )
    goto LABEL_10;
LABEL_14:
  for ( j = *v4; j != v4; j = (_QWORD *)*j )
    KiThawSingleThread((__int64)CurrentPrcb, (__int64)(j - 95), 0, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel(v9);
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v11;
}
