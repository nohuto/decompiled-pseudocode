/*
 * XREFs of PopPowerAggregatorPowerSettingCallback @ 0x140757F40
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 */

__int64 __fastcall PopPowerAggregatorPowerSettingCallback(
        _OWORD *SettingGuid,
        unsigned int *Value,
        ULONG ValueLength,
        PVOID Context)
{
  unsigned int v5; // ebx
  int v6; // ecx

  if ( *(_OWORD *)&GUID_LIDCLOSE_ACTION == *SettingGuid
    && ValueLength == 4
    && (v5 = 0, Value)
    && *Value <= 8
    && (v6 = 333, _bittest(&v6, *Value)) )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock);
    dword_140F08D88 = *Value;
    PopReleaseRwLock(&PopPowerAggregatorLock);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
