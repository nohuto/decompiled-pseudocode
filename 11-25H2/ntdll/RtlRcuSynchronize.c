/*
 * XREFs of RtlRcuSynchronize @ 0x180149330
 * Callers:
 *     <none>
 * Callees:
 *     RtlpWaitOnAddress @ 0x180006DF0 (RtlpWaitOnAddress.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x180033EB0 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlpRcuCurrentThreadData @ 0x1801493F8 (RtlpRcuCurrentThreadData.c)
 */

signed __int64 __fastcall RtlRcuSynchronize(_RTL_SRWLOCK *a1)
{
  _QWORD *v2; // rax
  signed __int64 Value; // rcx
  signed __int64 v4; // rsi
  unsigned __int64 i; // rdi
  __int64 v6; // rax
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = (_QWORD *)RtlpRcuCurrentThreadData(a1, 0LL);
  if ( v2 && *v2 )
    __fastfail(0x38u);
  do
  {
    _m_prefetchw(&a1[2]);
    Value = a1[2].Value;
    v4 = (Value & 0xFFFFFFFFFFFFFFFEuLL) + 2;
  }
  while ( Value != _InterlockedCompareExchange64((volatile signed __int64 *)&a1[2], v4, Value) );
  RtlAcquireReleaseSRWLockExclusive(a1 + 15);
  for ( i = a1[4].Value; i; i = *(_QWORD *)(i + 24) )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(i + 16);
      v8 = v6;
      if ( (v6 & 1) != 0 || v6 - v4 > -1 )
        break;
      RtlpWaitOnAddress(i + 16, &v8, 8LL, 0LL, (unsigned int)RtlpWaitOnAddressSpinCycleCount, 0LL);
    }
  }
  return _InterlockedCompareExchange64((volatile signed __int64 *)&a1[2], v4 | 1, v4);
}
