/*
 * XREFs of PopWnfFullscreenVideoCallback @ 0x140A30D70
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1402AD9A8 (PoFxSendSystemLatencyUpdate.c)
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExpWnfReadStateData @ 0x140901C9C (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140A313DC (ExpWnfAcquireSubscriptionNameInstance.c)
 */

__int64 __fastcall PopWnfFullscreenVideoCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v2; // rdi
  int v3; // edi
  int v4; // ebx
  __int64 v5; // rdx
  unsigned int v6; // r8d
  unsigned int v8; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+38h] [rbp-20h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v8 = 8;
  --CurrentThread->KernelApcDisable;
  v2 = (struct _EX_RUNDOWN_REF *)ExpWnfAcquireSubscriptionNameInstance(a1, a1);
  if ( !v2 )
  {
    KeLeaveCriticalRegion();
    return (unsigned int)-1073741772;
  }
  v4 = ExpWnfReadStateData((__int64)v2, &v9, &v10, 8u, &v8);
  ExReleaseRundownProtection_0(v2 + 1);
  v3 = 0;
  if ( v4 < 0 )
    v3 = v4;
  KeLeaveCriticalRegion();
  if ( v3 >= 0 )
  {
    if ( v8 < 8 )
      return 0;
    PpmAcquireLock(&PopFxSystemLatencyLock, v5, v6);
    if ( byte_140F0B3CE )
    {
      if ( (v10 & 2) == 0 )
      {
LABEL_12:
        byte_140F0B3CE = (v10 & 2) != 0;
        PoFxSendSystemLatencyUpdate();
      }
    }
    else if ( (v10 & 2) != 0 )
    {
      goto LABEL_12;
    }
    PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
  }
  return (unsigned int)v3;
}
