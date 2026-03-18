/*
 * XREFs of PopPowerAggregatorPowerSettingCallback @ 0x140759AF0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
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
    PopAcquireRwLockExclusive(&PopPowerAggregatorLock);
    dword_140F08A28 = *Value;
    PopReleaseRwLock((signed __int64 *)&PopPowerAggregatorLock);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
