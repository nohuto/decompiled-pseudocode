/*
 * XREFs of PdcPoNetworkResiliency @ 0x140750790
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KeCancelTimer2 @ 0x14036FE50 (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x140370EF0 (KeSetTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x140497BA0 (PopQueueWorkItem.c)
 *     PopNetUpdateDsAccounting @ 0x1404C3750 (PopNetUpdateDsAccounting.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

NTSTATUS __fastcall PdcPoNetworkResiliency(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  BOOL v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+20h] [rbp-28h]
  BOOL Buffer; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1;
  PopAcquirePolicyLock(a1, a2);
  PopNetUpdateDsAccounting(v2);
  v5 = 0LL;
  if ( v2 )
  {
    v6 = 1;
    PopNetResiliencyEngaged = 1;
    _InterlockedExchange(&PopNetGracePeriodState, 1);
    v7 = 10000000LL * (unsigned int)PopStandbyConnectivityGracePeriod;
    if ( MEMORY[0xFFFFF78000000008] < (unsigned __int64)(qword_140E279C8 + v7) )
      v5 = v7 + qword_140E279C8 - MEMORY[0xFFFFF78000000008];
    KeSetTimer2((__int64)&PopNetEvaluationTimer, (LARGE_INTEGER)-v5, 0LL, 0LL);
  }
  else
  {
    PopNetResiliencyEngaged = 0;
    KeCancelTimer2((__int64)&PopNetEvaluationTimer, 0LL, v3, v4);
    _InterlockedExchange(&PopNetGracePeriodState, 0);
    v6 = 1;
    PopQueueWorkItem((__int64)&unk_140F073A8, DelayedWorkQueue);
  }
  PopReleasePolicyLock(v9, v8, v10, v11, v13);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140F08290 == 1 && BYTE11(xmmword_140F082A0) )
    v6 = v2 == 0;
  Buffer = v6;
  PopReleaseRwLock(&PopPowerAggregatorLock);
  return ZwUpdateWnfStateData(&WNF_PO_BLUETOOTH_STANDBY_POLICY, &Buffer, 4u, 0LL, 0LL, 0, 0);
}
