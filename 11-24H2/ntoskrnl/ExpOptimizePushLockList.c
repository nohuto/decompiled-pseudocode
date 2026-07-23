/*
 * XREFs of ExpOptimizePushLockList @ 0x140406034
 * Callers:
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 * Callees:
 *     ExpWakePushLock @ 0x1404060A0 (ExpWakePushLock.c)
 */

signed __int64 __fastcall ExpOptimizePushLockList(volatile signed __int64 *a1, signed __int64 a2)
{
  signed __int64 result; // rax
  _QWORD *v4; // rdx
  signed __int64 v5; // rtt
  _QWORD *v6; // rcx
  __int64 v7; // rcx

  result = a2;
  while ( (result & 1) != 0 )
  {
    v4 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !*(_QWORD *)((result & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) )
    {
      do
      {
        v6 = v4;
        v4 = (_QWORD *)v4[3];
        v4[5] = v6;
        v7 = v4[4];
      }
      while ( !v7 );
      if ( v4 != (_QWORD *)(result & 0xFFFFFFFFFFFFFFF0uLL) )
        *(_QWORD *)((result & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) = v7;
    }
    v5 = result;
    result = _InterlockedCompareExchange64(a1, result - 4, result);
    if ( v5 == result )
      return result;
  }
  return ExpWakePushLock(a1);
}
