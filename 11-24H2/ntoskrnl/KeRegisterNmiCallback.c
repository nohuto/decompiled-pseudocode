/*
 * XREFs of KeRegisterNmiCallback @ 0x1405ADB00
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

PVOID __stdcall KeRegisterNmiCallback(PNMI_CALLBACK CallbackRoutine, PVOID Context)
{
  PVOID *Pool2; // rbx
  PVOID result; // rax
  KIRQL v6; // al

  Pool2 = (PVOID *)ExAllocatePool2(0x40uLL, 0x20uLL, 0x494D4E4Bu);
  result = 0LL;
  if ( Pool2 )
  {
    Pool2[1] = CallbackRoutine;
    Pool2[2] = Context;
    Pool2[3] = Pool2;
    v6 = KeAcquireSpinLockRaiseToDpc(&KiNmiCallbackListLock);
    *Pool2 = KiNmiCallbackListHead;
    KiNmiCallbackListHead = Pool2;
    KeReleaseSpinLock(&KiNmiCallbackListLock, v6);
    return Pool2[3];
  }
  return result;
}
