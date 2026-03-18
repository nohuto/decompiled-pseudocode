/*
 * XREFs of PopDispatchCallback @ 0x14075A340
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x14024D520 (ExNotifyCallback.c)
 */

struct _KTHREAD *__fastcall PopDispatchCallback(PVOID Argument1)
{
  struct _KTHREAD *result; // rax

  ExNotifyCallback(ExCbPowerState, (PVOID)(unsigned int)Argument1, 0LL);
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
