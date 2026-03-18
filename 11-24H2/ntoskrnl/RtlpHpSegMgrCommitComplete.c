/*
 * XREFs of RtlpHpSegMgrCommitComplete @ 0x1402C2B44
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x1402C21D4 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     RtlpHpReleaseLockExclusive @ 0x1402B9650 (RtlpHpReleaseLockExclusive.c)
 */

void __fastcall RtlpHpSegMgrCommitComplete(
        __int64 a1,
        volatile signed __int16 *a2,
        int a3,
        int a4,
        ULONG_PTR BugCheckParameter2,
        char a6)
{
  signed __int16 v6; // ax
  signed __int16 v8; // r10
  signed __int16 v9; // r11
  signed __int16 v10; // tt
  __int16 v11; // cx

  v6 = *a2;
  while ( 1 )
  {
    v8 = v6;
    v9 = v6;
    if ( (v6 & 0x4000) != 0 )
    {
      if ( a4 && a3 > 0 )
        v11 = 0x8000;
      else
        v11 = 0;
      v8 = v11 | v6 & 0x3FFF;
    }
    if ( a3 <= 0 )
    {
      v8 += a3;
    }
    else if ( !a4 )
    {
      v8 -= a3;
    }
    if ( v8 == v6 )
      break;
    v10 = v6;
    v6 = _InterlockedCompareExchange16(a2, v8, v6);
    if ( v10 == v6 )
    {
      if ( (v9 & 0x4000) != 0 )
        RtlpHpReleaseLockExclusive(BugCheckParameter2, *(_DWORD *)(a1 + 40) & 1, a6);
      return;
    }
  }
}
