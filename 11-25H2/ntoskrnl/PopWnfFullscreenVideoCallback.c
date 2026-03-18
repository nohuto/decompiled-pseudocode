/*
 * XREFs of PopWnfFullscreenVideoCallback @ 0x140A36800
 * Callers:
 *     <none>
 * Callees:
 *     PoFxSendSystemLatencyUpdate @ 0x140203AF8 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExpWnfReadStateData @ 0x1408E32C8 (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140A36EFC (ExpWnfAcquireSubscriptionNameInstance.c)
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
    if ( byte_140F0B74E )
    {
      if ( (v10 & 2) == 0 )
      {
LABEL_12:
        byte_140F0B74E = (v10 & 2) != 0;
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
