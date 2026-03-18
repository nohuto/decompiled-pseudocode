/*
 * XREFs of NtUnsubscribeWnfStateChange @ 0x1408AB0C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExpWnfDeleteSubscription @ 0x1408AA348 (ExpWnfDeleteSubscription.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x1408AABA8 (ExpWnfAcquireSubscriptionByName.c)
 *     ExpCaptureWnfStateName @ 0x1408AB180 (ExpCaptureWnfStateName.c)
 */

__int64 __fastcall NtUnsubscribeWnfStateChange(void *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // ebx
  _KPROCESS *Process; // rdi
  __int64 v4; // rdx
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = ExpCaptureWnfStateName(a1);
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
  return (unsigned int)v2;
}
