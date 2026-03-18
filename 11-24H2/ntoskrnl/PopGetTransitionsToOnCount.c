/*
 * XREFs of PopGetTransitionsToOnCount @ 0x140427798
 * Callers:
 *     PopSetSleepMarker @ 0x140A910AC (PopSetSleepMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 */

__int64 PopGetTransitionsToOnCount()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive(&PopTelemetryOsState);
  v0 = dword_140F0A848;
  PopReleaseRwLock((signed __int64 *)&PopTelemetryOsState);
  return v0;
}
