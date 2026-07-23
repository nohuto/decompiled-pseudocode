/*
 * XREFs of PpmIdleUpdateSystemLatencyLimit @ 0x1402AEDA4
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x1402AD9A8 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x1402AE9D0 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402B2A28 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     HalRequestIpi @ 0x140371AA0 (HalRequestIpi.c)
 *     PpmEventAffinityMask @ 0x1405D6230 (PpmEventAffinityMask.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

LONG __fastcall PpmIdleUpdateSystemLatencyLimit(int a1)
{
  __int64 v1; // rdx
  unsigned int v2; // r8d
  unsigned __int64 v3; // rdi
  __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  struct _KPRCB *Prcb; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  struct _KPRCB *v10; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  struct _KPRCB *v14; // rax
  unsigned __int16 i; // cx
  struct _KAFFINITY_EX v17; // [rsp+38h] [rbp-D0h] BYREF
  struct _KAFFINITY_EX v18; // [rsp+148h] [rbp+40h] BYREF

  LODWORD(v4) = a1;
  memset_0(&v17.8, 0, sizeof(v17.8));
  memset_0(&v18.8, 0, sizeof(v18.8));
  *(_QWORD *)&v18.Count = 2097153LL;
  memset_0(&v18.8, 0, sizeof(v18.8));
  *(_QWORD *)&v17.Count = 2097153LL;
  memset_0(&v17.8, 0, sizeof(v17.8));
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, v1, v2);
  PopAcquireRwLockShared((volatile signed __int64 *)&PpmIdlePolicyLock);
  PpmIdleUnparkedLatencyLimit = v4;
  KiSubtractAffinityEx(&KeActiveProcessors, &PpmPerfCoreParkingMask, &v17, 0x20u);
  v3 = v17.Bitmap[0];
  LOWORD(v4) = 0;
  while ( 1 )
  {
    while ( v3 )
    {
      _BitScanForward64(&v5, v3);
      v3 &= ~(1LL << v5);
      Prcb = (struct _KPRCB *)KeGetPrcb(*((unsigned int *)qword_140F22998
                                        + 64 * (unsigned __int16)v4
                                        + (unsigned __int8)v5));
      PpmIdleUpdateProcessorLatencyLimit(Prcb, &v18);
    }
    v4 = (unsigned __int16)(v4 + 1);
    if ( (unsigned int)v4 >= v17.Count )
      break;
    v3 = v17.Bitmap[v4];
  }
  v7 = PpmParkSoftParkingMask.Bitmap[0];
  LOWORD(v8) = 0;
  while ( 1 )
  {
    while ( v7 )
    {
      _BitScanForward64(&v9, v7);
      v7 &= ~(1LL << v9);
      v10 = (struct _KPRCB *)KeGetPrcb(*((unsigned int *)qword_140F22998
                                       + 64 * (unsigned __int16)v8
                                       + (unsigned __int8)v9));
      PpmIdleUpdateProcessorLatencyLimit(v10, &v18);
    }
    v8 = (unsigned __int16)(v8 + 1);
    if ( (unsigned int)v8 >= PpmParkSoftParkingMask.Count )
      break;
    v7 = PpmParkSoftParkingMask.Bitmap[v8];
  }
  KiSubtractAffinityEx(&PpmPerfCoreParkingMask, &PpmParkSoftParkingMask, &v17, v17.Size);
  v11 = v17.Bitmap[0];
  LOWORD(v12) = 0;
  while ( 1 )
  {
    while ( v11 )
    {
      _BitScanForward64(&v13, v11);
      v11 &= ~(1LL << v13);
      v14 = (struct _KPRCB *)KeGetPrcb(*((unsigned int *)qword_140F22998
                                       + 64 * (unsigned __int16)v12
                                       + (unsigned __int8)v13));
      PpmIdleUpdateProcessorLatencyLimit(v14, &v18);
    }
    v12 = (unsigned __int16)(v12 + 1);
    if ( (unsigned int)v12 >= v17.Count )
      break;
    v11 = v17.Bitmap[v12];
  }
  for ( i = 0; i < v18.Count; ++i )
  {
    if ( v18.Bitmap[i] )
    {
      PpmEventAffinityMask(&PPM_ETW_PROCESSOR_LATENCY_REEVALUATION_WAKE);
      HalRequestIpi(0LL, &v18);
      break;
    }
  }
  PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
  return PpmReleaseLock(&PpmPerfPolicyLock);
}
