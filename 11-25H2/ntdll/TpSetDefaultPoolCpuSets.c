/*
 * XREFs of TpSetDefaultPoolCpuSets @ 0x18012085C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall TpSetDefaultPoolCpuSets(void *Src, unsigned int a2)
{
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&TppPoolpDefaultPoolCpuSetLock);
  TppPoolpDefaultPoolCpuSetCount = a2;
  memmove(&TppPoolpDefaultPoolCpuSets, Src, 8LL * a2);
  return RtlReleaseSRWLockExclusive(&TppPoolpDefaultPoolCpuSetLock);
}
