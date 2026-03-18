/*
 * XREFs of PdcPoNetworkResiliency @ 0x14075D110
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     PopNetResiliencyStateChanged @ 0x140AC9288 (PopNetResiliencyStateChanged.c)
 */

__int64 __fastcall PdcPoNetworkResiliency(char a1)
{
  BOOL v2; // eax
  BOOL v4; // [rsp+58h] [rbp+10h] BYREF

  PopNetResiliencyStateChanged();
  PopAcquireRwLockExclusive(&PopPowerAggregatorLock);
  v2 = 1;
  if ( (_DWORD)xmmword_140F08910 == 1 && BYTE11(xmmword_140F08920) )
    v2 = a1 == 0;
  v4 = v2;
  PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
  return ZwUpdateWnfStateData((__int64)&WNF_PO_BLUETOOTH_STANDBY_POLICY, (__int64)&v4);
}
