/*
 * XREFs of ExpWnfValidateKernelCallbackEnvironment @ 0x140904A08
 * Callers:
 *     ExpWnfDispatchKernelSubscription @ 0x140904520 (ExpWnfDispatchKernelSubscription.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
