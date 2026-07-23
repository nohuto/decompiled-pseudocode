/*
 * XREFs of PopGetTransitionsToOnCount @ 0x14041B928
 * Callers:
 *     PopSetSleepMarker @ 0x140A8D7A8 (PopSetSleepMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 */

__int64 PopGetTransitionsToOnCount()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive(&PopTelemetryOsState);
  v0 = dword_140F0A9C8;
  PopReleaseRwLock(&PopTelemetryOsState);
  return v0;
}
