/*
 * XREFs of RtlpHpVaMgrCtxAllocatorDereference @ 0x1800906AC
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x180090838 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAllocatorDereference(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  volatile signed __int64 *v3; // rsi
  __int64 v5; // rbx

  v3 = (volatile signed __int64 *)(a1 + 2144);
  v5 = a1 + 48 * (*(unsigned int *)a2 + 45LL);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 2144), a2, a3);
  if ( (*(_WORD *)(v5 + 42))-- == 1 )
  {
    *(_OWORD *)v5 = 0LL;
    *(_OWORD *)(v5 + 16) = 0LL;
    *(_OWORD *)(v5 + 32) = 0LL;
    *(_QWORD *)(v5 + 16) = 0LL;
    --*(_DWORD *)(a1 + 2156);
  }
  return RtlReleaseSRWLockExclusive(v3);
}
