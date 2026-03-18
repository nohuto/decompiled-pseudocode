/*
 * XREFs of PopThermalTraceRundownEvents @ 0x1404A51F0
 * Callers:
 *     PopDiagTraceControlCallback @ 0x140A37E50 (PopDiagTraceControlCallback.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopDiagTraceThermalZoneRundown @ 0x1404A5288 (PopDiagTraceThermalZoneRundown.c)
 */

__int64 PopThermalTraceRundownEvents()
{
  int v0; // r8d
  PVOID *i; // rbx
  char v3; // r10

  PopAcquireRwLockShared((volatile signed __int64 *)&PopPolicyDeviceLock);
  for ( i = (PVOID *)PopThermal; i != &PopThermal; i = (PVOID *)*i )
  {
    LOBYTE(v0) = *((_BYTE *)i + 65);
    if ( (v0 & 2) != 0 )
    {
      v3 = v0 & 1;
      LOBYTE(v0) = (v0 & 4) != 0;
      PopDiagTraceThermalZoneRundown(
        (unsigned int)i[6],
        (_DWORD)i + 1040,
        v0,
        *((unsigned __int8 *)i + 69),
        v3,
        *((_DWORD *)i + 20),
        *((_BYTE *)i + 72),
        *((_BYTE *)i + 73));
    }
  }
  return PopReleaseRwLock((signed __int64 *)&PopPolicyDeviceLock);
}
