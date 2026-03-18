/*
 * XREFs of PopGetTransitionsToOnCount @ 0x140431228
 * Callers:
 *     PopSetSleepMarker @ 0x140A8BFA8 (PopSetSleepMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 */

__int64 PopGetTransitionsToOnCount()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive(&PopTelemetryOsState);
  v0 = dword_140F0A1A8;
  PopReleaseRwLock(&PopTelemetryOsState);
  return v0;
}
