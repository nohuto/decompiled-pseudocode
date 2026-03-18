/*
 * XREFs of PsInsertVirtualizedTimer @ 0x140464158
 * Callers:
 *     ExpSetTimerObject @ 0x1402EB930 (ExpSetTimerObject.c)
 *     NtCreateTimer @ 0x1409FAF30 (NtCreateTimer.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExpTimerPause @ 0x1402F45E8 (ExpTimerPause.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 */

void __fastcall PsInsertVirtualizedTimer(KSPIN_LOCK *Object, _QWORD *a2, KSPIN_LOCK *a3, char a4, KSPIN_LOCK **a5)
{
  unsigned __int8 CurrentIrql; // bp
  PVOID *v10; // rdx

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
    if ( a4 )
      ExpTimerPause((__int64)(a2 - 36), MEMORY[0xFFFFF78000000014], MEMORY[0xFFFFF78000000008], 1);
    ObfReferenceObjectWithTag(Object, 0x54567350u);
    *a5 = Object;
    if ( a3 )
    {
      KxReleaseSpinLock((volatile signed __int64 *)a3);
      KeReleaseSpinLock(Object + 225, CurrentIrql);
    }
  }
}
