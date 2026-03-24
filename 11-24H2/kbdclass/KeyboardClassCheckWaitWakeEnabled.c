/*
 * XREFs of KeyboardClassCheckWaitWakeEnabled @ 0x1C0003960
 * Callers:
 *     KeyboardStart @ 0x1C0001F70 (KeyboardStart.c)
 *     KeyboardClassPower @ 0x1C00031A0 (KeyboardClassPower.c)
 *     KeyboardClassPoRequestComplete @ 0x1C0005070 (KeyboardClassPoRequestComplete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardClassCheckWaitWakeEnabled(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  __int64 v2; // rbx
  KIRQL v3; // al

  v1 = (KSPIN_LOCK *)(a1 + 72);
  v2 = a1;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 72));
  LOBYTE(v2) = *(_BYTE *)(v2 + 362);
  KeReleaseSpinLock(v1, v3);
  return (unsigned __int8)v2;
}
