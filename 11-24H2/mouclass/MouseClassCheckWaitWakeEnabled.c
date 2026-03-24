/*
 * XREFs of MouseClassCheckWaitWakeEnabled @ 0x1C00037A0
 * Callers:
 *     MouseClassPower @ 0x1C00010F0 (MouseClassPower.c)
 *     MouseStart @ 0x1C00034B0 (MouseStart.c)
 *     MouseClassPoRequestComplete @ 0x1C0004FD0 (MouseClassPoRequestComplete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseClassCheckWaitWakeEnabled(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  __int64 v2; // rbx
  KIRQL v3; // al

  v1 = (KSPIN_LOCK *)(a1 + 72);
  v2 = a1;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 72));
  LOBYTE(v2) = *(_BYTE *)(v2 + 345);
  KeReleaseSpinLock(v1, v3);
  return (unsigned __int8)v2;
}
