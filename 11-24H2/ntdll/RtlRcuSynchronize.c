/*
 * XREFs of RtlRcuSynchronize @ 0x180147D80
 * Callers:
 *     <none>
 * Callees:
 *     RtlpWaitOnAddress @ 0x18009B780 (RtlpWaitOnAddress.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x1800A4630 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlpRcuCurrentThreadData @ 0x180147E48 (RtlpRcuCurrentThreadData.c)
 */

signed __int64 __fastcall RtlRcuSynchronize(__int64 a1)
{
  _QWORD *v2; // rax
  volatile signed __int32 **v3; // rdx
  unsigned __int64 v4; // r8
  signed __int64 v5; // rcx
  signed __int64 v6; // rsi
  __int64 i; // rdi
  __int64 v8; // rax
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = (_QWORD *)RtlpRcuCurrentThreadData(a1, 0LL);
  if ( v2 && *v2 )
    __fastfail(0x38u);
  do
  {
    _m_prefetchw((const void *)(a1 + 16));
    v5 = *(_QWORD *)(a1 + 16);
    v6 = (v5 & 0xFFFFFFFFFFFFFFFEuLL) + 2;
  }
  while ( v5 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v6, v5) );
  RtlAcquireReleaseSRWLockExclusive((volatile signed __int32 *)(a1 + 120), v3, v4);
  for ( i = *(_QWORD *)(a1 + 32); i; i = *(_QWORD *)(i + 24) )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(i + 16);
      v10 = v8;
      if ( (v8 & 1) != 0 || v8 - v6 > -1 )
        break;
      RtlpWaitOnAddress(i + 16, &v10, 8LL, 0LL, (unsigned int)RtlpWaitOnAddressSpinCycleCount, 0LL);
    }
  }
  return _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v6 | 1, v6);
}
