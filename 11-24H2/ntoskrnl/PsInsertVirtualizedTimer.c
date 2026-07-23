/*
 * XREFs of PsInsertVirtualizedTimer @ 0x140459FA8
 * Callers:
 *     ExpSetTimerObject @ 0x1402BD850 (ExpSetTimerObject.c)
 *     NtCreateTimer @ 0x1409EADF0 (NtCreateTimer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExpTimerPause @ 0x14046BB18 (ExpTimerPause.c)
 */

void __fastcall PsInsertVirtualizedTimer(KSPIN_LOCK *Object, _QWORD *a2, KSPIN_LOCK *a3, __int64 a4, KSPIN_LOCK **a5)
{
  char v5; // r14
  unsigned __int8 CurrentIrql; // bp
  PVOID *v10; // rdx

  v5 = a4;
  if ( (*((_DWORD *)Object + 125) & 0x40000008) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( a3 )
    {
      CurrentIrql = KeAcquireSpinLockRaiseToDpc(Object + 225);
      KxAcquireSpinLock(a3);
    }
    v10 = (PVOID *)Object[227];
    if ( *v10 != Object + 226 )
      __fastfail(3u);
    *a2 = Object + 226;
    a2[1] = v10;
    *v10 = a2;
    Object[227] = (KSPIN_LOCK)a2;
    if ( v5 )
    {
      LOBYTE(a4) = 1;
      ExpTimerPause(a2 - 36, MEMORY[0xFFFFF78000000014], MEMORY[0xFFFFF78000000008], a4);
    }
    ObfReferenceObjectWithTag(Object, 0x54567350u);
    *a5 = Object;
    if ( a3 )
    {
      KxReleaseSpinLock((volatile signed __int64 *)a3);
      KeReleaseSpinLock(Object + 225, CurrentIrql);
    }
  }
}
