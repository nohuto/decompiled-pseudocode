/*
 * XREFs of KeRegisterNmiCallback @ 0x1405B0B90
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

PVOID __stdcall KeRegisterNmiCallback(PNMI_CALLBACK CallbackRoutine, PVOID Context)
{
  PVOID *Pool2; // rbx
  PVOID result; // rax
  KIRQL v6; // al

  Pool2 = (PVOID *)ExAllocatePool2(0x40uLL);
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
