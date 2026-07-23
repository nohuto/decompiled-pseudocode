/*
 * XREFs of PopWnfSprActiveSessionChangeCallback @ 0x140904920
 * Callers:
 *     ExpWnfDispatchKernelSubscription @ 0x140904520 (ExpWnfDispatchKernelSubscription.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExpWnfReadStateData @ 0x140901C9C (ExpWnfReadStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409A2DCC (PopSetPowerSettingValueAcDc.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140A313DC (ExpWnfAcquireSubscriptionNameInstance.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopWnfSprActiveSessionChangeCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v2; // rdi
  int v3; // ebx
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+20h] [rbp-48h]
  int v14; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+38h] [rbp-30h] BYREF
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  char v17; // [rsp+50h] [rbp-18h]

  v14 = 20;
  v17 = 0;
  CurrentThread = KeGetCurrentThread();
  v16 = 0LL;
  --CurrentThread->KernelApcDisable;
  v2 = (struct _EX_RUNDOWN_REF *)ExpWnfAcquireSubscriptionNameInstance(a1, a1);
  if ( v2 )
  {
    v3 = ExpWnfReadStateData((__int64)v2, &v15, &v16, 0x14u, &v14);
    ExReleaseRundownProtection_0(v2 + 1);
    v4 = 0;
    if ( v3 < 0 )
      v4 = v3;
    KeLeaveCriticalRegion();
    v7 = v4;
    if ( v4 >= 0 && v14 == 20 )
    {
      PopAcquirePolicyLock(v6, v5);
      PopSetPowerSettingValueAcDc(&GUID_SPR_ACTIVE_SESSION_CHANGE, 20LL, &v16);
      PopReleasePolicyLock(v9, v8, v10, v11, v13);
    }
  }
  else
  {
    v7 = -1073741772;
    KeLeaveCriticalRegion();
  }
  return v7;
}
