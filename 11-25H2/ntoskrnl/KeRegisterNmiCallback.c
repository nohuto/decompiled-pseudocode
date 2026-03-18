/*
 * XREFs of KeRegisterNmiCallback @ 0x1405AD200
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
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
