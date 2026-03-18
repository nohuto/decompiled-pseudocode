/*
 * XREFs of EtwpLockUnlockBufferList @ 0x14041D264
 * Callers:
 *     EtwpBufferingModeFlush @ 0x1408931C4 (EtwpBufferingModeFlush.c)
 *     EtwpFlushActiveBuffers @ 0x14098F3D0 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeTestSpinLock @ 0x14041D2F0 (KeTestSpinLock.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14041D30C (ExfAcquireReleasePushLockExclusive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall EtwpLockUnlockBufferList(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  __int64 v2; // rcx
  KIRQL CurrentIrql; // di
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = (KSPIN_LOCK *)(a1 + 696);
  if ( *(_DWORD *)(a1 + 300) == 1 )
  {
    _InterlockedOr(v4, 0);
    if ( (*v1 & 1) != 0 )
      ExfAcquireReleasePushLockExclusive(a1 + 696);
  }
  else if ( !KeTestSpinLock((PKSPIN_LOCK)(a1 + 696)) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v2) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v2);
    }
    KxAcquireSpinLock(v1);
    KeReleaseSpinLock(v1, CurrentIrql);
  }
}
