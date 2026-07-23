/*
 * XREFs of PdcPoNetworkResiliency @ 0x14075C0B0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     PopNetResiliencyStateChanged @ 0x140AC71C0 (PopNetResiliencyStateChanged.c)
 */

NTSTATUS __fastcall PdcPoNetworkResiliency(char a1)
{
  BOOL v2; // eax
  BOOL Buffer; // [rsp+58h] [rbp+10h] BYREF

  PopNetResiliencyStateChanged();
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
  v2 = 1;
  if ( (_DWORD)xmmword_140F08C70 == 1 && BYTE11(xmmword_140F08C80) )
    v2 = a1 == 0;
  Buffer = v2;
  PopReleaseRwLock(&PopPowerAggregatorLock);
  return ZwUpdateWnfStateData(&WNF_PO_BLUETOOTH_STANDBY_POLICY, &Buffer, 4u, 0LL, 0LL, 0, 0);
}
