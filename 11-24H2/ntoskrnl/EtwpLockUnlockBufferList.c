/*
 * XREFs of EtwpLockUnlockBufferList @ 0x1404189B8
 * Callers:
 *     EtwpBufferingModeFlush @ 0x140832840 (EtwpBufferingModeFlush.c)
 *     EtwpFlushActiveBuffers @ 0x1409D8040 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KeTestSpinLock @ 0x140418A40 (KeTestSpinLock.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140418A5C (ExfAcquireReleasePushLockExclusive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
      KiRaiseIrqlProcessIrqlFlags(v2, 15LL);
    }
    KxAcquireSpinLock(v1);
    KeReleaseSpinLock(v1, CurrentIrql);
  }
}
