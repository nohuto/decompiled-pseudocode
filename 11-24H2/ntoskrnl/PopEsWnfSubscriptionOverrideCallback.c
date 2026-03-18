/*
 * XREFs of PopEsWnfSubscriptionOverrideCallback @ 0x140A3BAA0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     ExpWnfReadStateData @ 0x1408ABA3C (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140A3BBFC (ExpWnfAcquireSubscriptionNameInstance.c)
 *     PopEsWorkItemSchedule @ 0x140A3BCA4 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsWnfSubscriptionOverrideCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v2; // rbx
  int v3; // edi
  int v4; // ebx
  int v6; // ebx
  _DWORD v7[6]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+50h] [rbp+8h] BYREF
  int v9; // [rsp+68h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  --CurrentThread->KernelApcDisable;
  v2 = (struct _EX_RUNDOWN_REF *)ExpWnfAcquireSubscriptionNameInstance(a1, a1);
  if ( v2 )
  {
    v3 = ExpWnfReadStateData((__int64)v2, &v9, &v8, 4u, v7);
    ExReleaseRundownProtection_0(v2 + 1);
    v4 = 0;
    if ( v3 < 0 )
      v4 = v3;
    KeLeaveCriticalRegion();
    if ( v4 >= 0 )
    {
      v6 = v8;
      if ( v8 <= 2 )
      {
        PopAcquireRwLockExclusive(&PopEsLock);
        PopEsMode = v6;
        PopReleaseRwLock((signed __int64 *)&PopEsLock);
        PopEsWorkItemSchedule(2LL);
      }
    }
  }
  else
  {
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
