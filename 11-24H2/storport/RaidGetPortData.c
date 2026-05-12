/*
 * XREFs of RaidGetPortData @ 0x140009B64
 * Callers:
 *     RaUnitGetInstances @ 0x1400097E8 (RaUnitGetInstances.c)
 *     StorEtwEnableCallback @ 0x140009BE0 (StorEtwEnableCallback.c)
 *     StorpLogStatistics @ 0x14003FE88 (StorpLogStatistics.c)
 *     RemoveNvmeIceInterfaceFromList @ 0x14006ABFC (RemoveNvmeIceInterfaceFromList.c)
 *     StorPortInitialize @ 0x14006FD50 (StorPortInitialize.c)
 *     StorEtwResetCounters @ 0x1400AA828 (StorEtwResetCounters.c)
 * Callees:
 *     <none>
 */

__int64 RaidGetPortData()
{
  __int64 result; // rax
  __int64 v1; // rbx
  _QWORD *v2; // rax

  if ( RaidpPortData )
  {
    _InterlockedIncrement((volatile signed __int32 *)RaidpPortData);
    return RaidpPortData;
  }
  result = ExAllocatePool2(64LL, 40LL, 1146118482LL);
  v1 = result;
  if ( result )
  {
    v2 = (_QWORD *)(result + 8);
    v2[1] = v2;
    *v2 = v2;
    KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 24));
    *(_DWORD *)(v1 + 32) = 0;
    *(_DWORD *)v1 = 1;
    RaidpPortData = v1;
    return RaidpPortData;
  }
  return result;
}
