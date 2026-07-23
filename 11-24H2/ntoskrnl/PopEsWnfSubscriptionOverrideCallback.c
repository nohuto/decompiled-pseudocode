/*
 * XREFs of PopEsWnfSubscriptionOverrideCallback @ 0x140A31280
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     ExpWnfReadStateData @ 0x140901C9C (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140A313DC (ExpWnfAcquireSubscriptionNameInstance.c)
 *     PopEsWorkItemSchedule @ 0x140A31484 (PopEsWorkItemSchedule.c)
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
        PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
        PopEsMode = v6;
        PopReleaseRwLock(&PopEsLock);
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
