/*
 * XREFs of NtUnsubscribeWnfStateChange @ 0x140901320
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExpWnfDeleteSubscription @ 0x1409005A8 (ExpWnfDeleteSubscription.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x140900E08 (ExpWnfAcquireSubscriptionByName.c)
 *     ExpCaptureWnfStateName @ 0x1409013E0 (ExpCaptureWnfStateName.c)
 */

NTSTATUS __cdecl NtUnsubscribeWnfStateChange(PCWNF_STATE_NAME StateName)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v2; // ebx
  _KPROCESS *Process; // rdi
  __int64 v4; // rdx
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = ExpCaptureWnfStateName((void *)StateName);
  if ( v2 >= 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v4 = *(_QWORD *)&Process[3].BasePriority;
    if ( v4 )
    {
      v2 = ExpWnfAcquireSubscriptionByName(0LL, v4, (struct _EX_RUNDOWN_REF **)&P);
      if ( v2 >= 0 )
      {
        ExpWnfDeleteSubscription((struct _EX_RUNDOWN_REF *)P, (__int64)Process);
        v2 = 0;
      }
    }
    else
    {
      v2 = -1073741772;
    }
  }
  KeLeaveCriticalRegion();
  return v2;
}
