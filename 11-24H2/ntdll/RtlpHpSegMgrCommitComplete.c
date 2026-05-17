/*
 * XREFs of RtlpHpSegMgrCommitComplete @ 0x180117B98
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x180091A20 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

signed __int16 __fastcall RtlpHpSegMgrCommitComplete(
        __int64 a1,
        volatile signed __int16 *a2,
        int a3,
        int a4,
        volatile signed __int64 *a5)
{
  signed __int16 result; // ax
  signed __int16 v7; // cx
  signed __int16 v8; // r11
  __int16 v9; // dx
  signed __int16 v10; // tt

  result = *a2;
  while ( 1 )
  {
    v7 = result;
    v8 = result;
    if ( (result & 0x4000) != 0 )
    {
      if ( a4 && a3 > 0 )
        v9 = 0x8000;
      else
        v9 = 0;
      v7 = v9 | result & 0x3FFF;
    }
    if ( a3 <= 0 )
    {
      v7 += a3;
    }
    else if ( !a4 )
    {
      v7 -= a3;
    }
    if ( v7 == result )
      break;
    v10 = result;
    result = _InterlockedCompareExchange16(a2, v7, result);
    if ( v10 == result )
    {
      if ( (v8 & 0x4000) != 0 )
        return RtlReleaseSRWLockExclusive(a5);
      return result;
    }
  }
  return result;
}
