/*
 * XREFs of ExpWnfValidateKernelCallbackEnvironment @ 0x1408AE7A8
 * Callers:
 *     ExpWnfDispatchKernelSubscription @ 0x1408AE2C0 (ExpWnfDispatchKernelSubscription.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

struct _KTHREAD *__fastcall ExpWnfValidateKernelCallbackEnvironment(ULONG_PTR BugCheckParameter4)
{
  struct _KTHREAD *CurrentThread; // rdx
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(
      0xE1u,
      *(_QWORD *)(BugCheckParameter4 + 80),
      KeGetCurrentIrql(),
      *(_QWORD *)(BugCheckParameter4 + 88),
      BugCheckParameter4);
  result = KeGetCurrentThread();
  if ( result->ApcStateIndex == 1 )
    KeBugCheckEx(
      5u,
      (ULONG_PTR)CurrentThread->Process,
      (ULONG_PTR)CurrentThread->ApcState.Process,
      CurrentThread->ApcStateIndex,
      (ULONG_PTR)CurrentThread);
  return result;
}
