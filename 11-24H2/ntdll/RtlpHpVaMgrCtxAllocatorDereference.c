/*
 * XREFs of RtlpHpVaMgrCtxAllocatorDereference @ 0x18009B238
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x18009B3C4 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpHpVaMgrCtxAllocatorDereference(__int64 a1, unsigned int *a2)
{
  _RTL_SRWLOCK *v2; // rsi
  __int64 v4; // rbx

  v2 = (_RTL_SRWLOCK *)(a1 + 2144);
  v4 = a1 + 48 * (*a2 + 45LL);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 2144));
  if ( (*(_WORD *)(v4 + 42))-- == 1 )
  {
    *(_OWORD *)v4 = 0LL;
    *(_OWORD *)(v4 + 16) = 0LL;
    *(_OWORD *)(v4 + 32) = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    --*(_DWORD *)(a1 + 2156);
  }
  RtlReleaseSRWLockExclusive(v2);
}
