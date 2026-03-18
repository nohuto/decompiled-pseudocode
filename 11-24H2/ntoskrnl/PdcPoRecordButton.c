/*
 * XREFs of PdcPoRecordButton @ 0x14075D1B0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A8F44 (PopBsdHandleRequest.c)
 */

__int64 PdcPoRecordButton()
{
  __int64 v0; // rbx

  v0 = MEMORY[0xFFFFF78000000014];
  PopAcquireRwLockExclusive(&PopBsdUpdateLock);
  *(_QWORD *)&PopBsdPowerTransition = v0;
  PopBsdHandleRequest(1u);
  return PopReleaseRwLock((signed __int64 *)&PopBsdUpdateLock);
}
