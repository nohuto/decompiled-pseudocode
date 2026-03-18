/*
 * XREFs of PsRemoveVirtualizedTimer @ 0x140331E64
 * Callers:
 *     ExpDeleteTimer @ 0x140331F50 (ExpDeleteTimer.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

LONG_PTR __fastcall PsRemoveVirtualizedTimer(PVOID *a1, _QWORD *a2, volatile signed __int64 *a3, unsigned __int8 a4)
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
  KxAcquireSpinLock((PKSPIN_LOCK)a3);
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
  KxReleaseSpinLock((volatile signed __int64 *)v4 + 225);
  if ( KiIrqlFlags )
  {
    LOBYTE(v11) = v7;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
  }
  __writecr8(v7);
  return ObfDereferenceObjectWithTag(v4, 0x54567350u);
}
