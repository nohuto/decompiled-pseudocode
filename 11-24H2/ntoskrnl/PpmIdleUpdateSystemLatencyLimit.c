/*
 * XREFs of PpmIdleUpdateSystemLatencyLimit @ 0x1403B5810
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x1403B5638 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402A1504 (PpmReleaseLock.c)
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140354CF8 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x1403B5A90 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PpmAcquireLock @ 0x1403B64F8 (PpmAcquireLock.c)
 *     HalRequestIpi @ 0x1403B67D0 (HalRequestIpi.c)
 *     PpmEventAffinityMask @ 0x1405D8D90 (PpmEventAffinityMask.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

LONG __fastcall PpmIdleUpdateSystemLatencyLimit(int a1)
{
  unsigned __int64 v1; // rdi
  __int64 v2; // rbx
  unsigned __int64 v3; // rdx
  __int64 Prcb; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int16 i; // cx
  struct _KAFFINITY_EX v15; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v17[33]; // [rsp+150h] [rbp+48h] BYREF

  LODWORD(v2) = a1;
  memset_0(&v15.8, 0, sizeof(v15.8));
  memset_0(v17, 0, 0x100uLL);
  v16 = 2097153LL;
  memset_0(v17, 0, 0x100uLL);
  *(_QWORD *)&v15.Count = 2097153LL;
  memset_0(&v15.8, 0, sizeof(v15.8));
  PpmAcquireLock(&PpmPerfPolicyLock);
  PopAcquireRwLockShared(&PpmIdlePolicyLock);
  PpmIdleUnparkedLatencyLimit = v2;
  KiSubtractAffinityEx(&KeActiveProcessors, &PpmPerfCoreParkingMask, &v15, 0x20u);
  v1 = v15.Bitmap[0];
  LOWORD(v2) = 0;
  while ( 1 )
  {
    while ( v1 )
    {
      _BitScanForward64(&v3, v1);
      v1 &= ~(1LL << v3);
      Prcb = KeGetPrcb(*((_DWORD *)qword_140F21E78 + 64 * (unsigned __int16)v2 + (unsigned __int8)v3));
      PpmIdleUpdateProcessorLatencyLimit(Prcb, &v16);
    }
    v2 = (unsigned __int16)(v2 + 1);
    if ( (unsigned int)v2 >= v15.Count )
      break;
    v1 = v15.Bitmap[v2];
  }
  v5 = PpmParkSoftParkingMask.Bitmap[0];
  LOWORD(v6) = 0;
  while ( 1 )
  {
    while ( v5 )
    {
      _BitScanForward64(&v7, v5);
      v5 &= ~(1LL << v7);
      v8 = KeGetPrcb(*((_DWORD *)qword_140F21E78 + 64 * (unsigned __int16)v6 + (unsigned __int8)v7));
      PpmIdleUpdateProcessorLatencyLimit(v8, &v16);
    }
    v6 = (unsigned __int16)(v6 + 1);
    if ( (unsigned int)v6 >= PpmParkSoftParkingMask.Count )
      break;
    v5 = PpmParkSoftParkingMask.Bitmap[v6];
  }
  KiSubtractAffinityEx(&PpmPerfCoreParkingMask, &PpmParkSoftParkingMask, &v15, v15.Size);
  v9 = v15.Bitmap[0];
  LOWORD(v10) = 0;
  while ( 1 )
  {
    while ( v9 )
    {
      _BitScanForward64(&v11, v9);
      v9 &= ~(1LL << v11);
      v12 = KeGetPrcb(*((_DWORD *)qword_140F21E78 + 64 * (unsigned __int16)v10 + (unsigned __int8)v11));
      PpmIdleUpdateProcessorLatencyLimit(v12, &v16);
    }
    v10 = (unsigned __int16)(v10 + 1);
    if ( (unsigned int)v10 >= v15.Count )
      break;
    v9 = v15.Bitmap[v10];
  }
  for ( i = 0; i < (unsigned __int16)v16; ++i )
  {
    if ( v17[i] )
    {
      PpmEventAffinityMask(&PPM_ETW_PROCESSOR_LATENCY_REEVALUATION_WAKE);
      HalRequestIpi(0LL, &v16);
      break;
    }
  }
  PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  return PpmReleaseLock(&PpmPerfPolicyLock);
}
