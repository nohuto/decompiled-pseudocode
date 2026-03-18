/*
 * XREFs of PopDispatchAcDcCallback @ 0x14074DD10
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x1402EACD0 (ExNotifyCallback.c)
 */

struct _KTHREAD *PopDispatchAcDcCallback()
{
  struct _KTHREAD *result; // rax

  ExNotifyCallback(ExCbPowerState, (PVOID)1, (PVOID)(dword_140F0B70C == 0));
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
