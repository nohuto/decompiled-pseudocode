/*
 * XREFs of TpSetDefaultPoolCpuSets @ 0x18011EF8C
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall TpSetDefaultPoolCpuSets(void *Src, volatile signed __int32 **a2, unsigned __int64 a3)
{
  unsigned int v4; // ebx

  v4 = (unsigned int)a2;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&TppPoolpDefaultPoolCpuSetLock, a2, a3);
  TppPoolpDefaultPoolCpuSetCount = v4;
  memmove(&TppPoolpDefaultPoolCpuSets, Src, 8LL * v4);
  return RtlReleaseSRWLockExclusive(&TppPoolpDefaultPoolCpuSetLock);
}
