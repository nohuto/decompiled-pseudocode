/*
 * XREFs of RtlpHpSegMgrCommitComplete @ 0x1402FA834
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x1402F9CA8 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     RtlpHpReleaseLockExclusive @ 0x14031FBD0 (RtlpHpReleaseLockExclusive.c)
 */

signed __int16 RtlpHpSegMgrCommitComplete(
        _DWORD a1,
        volatile signed __int16 *a2,
        int a3,
        int a4,
        ULONG_PTR BugCheckParameter2,
        ...)
{
  signed __int16 result; // ax
  signed __int16 v6; // r10
  signed __int16 v7; // r11
  signed __int16 v8; // tt
  __int16 v9; // cx

  result = *a2;
  while ( 1 )
  {
    v6 = result;
    v7 = result;
    if ( (result & 0x4000) != 0 )
    {
      if ( a4 && a3 > 0 )
        v9 = 0x8000;
      else
        v9 = 0;
      v6 = v9 | result & 0x3FFF;
    }
    if ( a3 <= 0 )
    {
      v6 += a3;
    }
    else if ( !a4 )
    {
      v6 -= a3;
    }
    if ( v6 == result )
      break;
    v8 = result;
    result = _InterlockedCompareExchange16(a2, v6, result);
    if ( v8 == result )
    {
      if ( (v7 & 0x4000) != 0 )
        return RtlpHpReleaseLockExclusive(BugCheckParameter2);
      return result;
    }
  }
  return result;
}
