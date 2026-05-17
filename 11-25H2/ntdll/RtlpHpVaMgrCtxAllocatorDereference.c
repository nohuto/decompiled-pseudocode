/*
 * XREFs of RtlpHpVaMgrCtxAllocatorDereference @ 0x1800B9A2C
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x1800B9BB8 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAllocatorDereference(__int64 a1, unsigned int *a2)
{
  volatile signed __int64 *v2; // rsi
  __int64 v4; // rbx

  v2 = (volatile signed __int64 *)(a1 + 2144);
  v4 = a1 + 48 * (*a2 + 45LL);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 2144));
  if ( (*(_WORD *)(v4 + 42))-- == 1 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_OWORD *)(v4 + 16) = 0LL;
    *(_OWORD *)(v4 + 32) = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    --*(_DWORD *)(a1 + 2156);
  }
  return RtlReleaseSRWLockExclusive(v2);
}
