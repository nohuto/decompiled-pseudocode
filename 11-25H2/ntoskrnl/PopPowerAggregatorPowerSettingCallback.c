/*
 * XREFs of PopPowerAggregatorPowerSettingCallback @ 0x14074D6A0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
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
    dword_140F083A8 = *Value;
    PopReleaseRwLock(&PopPowerAggregatorLock);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
