/*
 * XREFs of RtlConvertSRWLockExclusiveToShared @ 0x18013C1D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     RtlpWakeSRWLock @ 0x1800DC1A0 (RtlpWakeSRWLock.c)
 */

char __fastcall RtlConvertSRWLockExclusiveToShared(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax

  v1 = _InterlockedCompareExchange64(a1, 17LL, 1LL);
  if ( v1 != 1 )
  {
    if ( (v1 & 1) == 0 )
      RtlRaiseStatus(-1073741212);
    if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 2uLL) )
      return 0;
    RtlpWakeSRWLock(a1, v1 | 4, 1);
  }
  return 1;
}
