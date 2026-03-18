/*
 * XREFs of PsRemoveVirtualizedTimer @ 0x1402EADDC
 * Callers:
 *     ExpDeleteTimer @ 0x1402EAEC0 (ExpDeleteTimer.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

LONG_PTR __fastcall PsRemoveVirtualizedTimer(PVOID *a1, _QWORD *a2, KSPIN_LOCK *a3, unsigned __int8 a4)
{
  KSPIN_LOCK *v4; // rsi
  unsigned __int64 v7; // rbp
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx

  v4 = (KSPIN_LOCK *)*a1;
  v7 = a4;
  ObfReferenceObjectWithTag(*a1, 0x54567350u);
  KxReleaseSpinLock(a3);
  KxAcquireSpinLock(v4 + 225);
  KxAcquireSpinLock(a3);
  if ( *a1 )
  {
    v9 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v10 = (_QWORD *)a2[1], (_QWORD *)*v10 != a2) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    ObfDereferenceObjectWithTag(v4, 0x54567350u);
  }
  KxReleaseSpinLock(a3);
  KxReleaseSpinLock(v4 + 225);
  if ( KiIrqlFlags )
  {
    LOBYTE(v11) = v7;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
  }
  __writecr8(v7);
  return ObfDereferenceObjectWithTag(v4, 0x54567350u);
}
