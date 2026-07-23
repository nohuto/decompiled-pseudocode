/*
 * XREFs of RtlpHpSegMgrCommitComplete @ 0x180112CC8
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x18009C5B0 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpHpSegMgrCommitComplete(
        __int64 a1,
        volatile signed __int16 *a2,
        int a3,
        int a4,
        PRTL_SRWLOCK SRWLock)
{
  signed __int16 v5; // ax
  signed __int16 v7; // cx
  signed __int16 v8; // r11
  __int16 v9; // dx
  signed __int16 v10; // tt

  v5 = *a2;
  while ( 1 )
  {
    v7 = v5;
    v8 = v5;
    if ( (v5 & 0x4000) != 0 )
    {
      if ( a4 && a3 > 0 )
        v9 = 0x8000;
      else
        v9 = 0;
      v7 = v9 | v5 & 0x3FFF;
    }
    if ( a3 <= 0 )
    {
      v7 += a3;
    }
    else if ( !a4 )
    {
      v7 -= a3;
    }
    if ( v7 == v5 )
      break;
    v10 = v5;
    v5 = _InterlockedCompareExchange16(a2, v7, v5);
    if ( v10 == v5 )
    {
      if ( (v8 & 0x4000) != 0 )
        RtlReleaseSRWLockExclusive(SRWLock);
      return;
    }
  }
}
