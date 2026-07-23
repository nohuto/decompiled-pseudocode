/*
 * XREFs of KiReduceToUnderMaxQuotaSet @ 0x1404623CC
 * Callers:
 *     KiSearchForNewThreadsOnTarget @ 0x1403BD660 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     KiCheckForMaxOverQuotaScb @ 0x1402A9700 (KiCheckForMaxOverQuotaScb.c)
 */

__int64 __fastcall KiReduceToUnderMaxQuotaSet(unsigned __int16 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r11
  int v6; // r10d
  unsigned __int64 v7; // rax
  char v8; // r8

  v3 = 0LL;
  v4 = a3;
  if ( a2 )
  {
    v6 = a1 << 6;
    do
    {
      _BitScanForward64(&v7, a2);
      if ( !KiCheckForMaxOverQuotaScb(v4 + 440LL * *((unsigned int *)qword_140F22998 + (unsigned int)(v6 + v7)) + 128) )
        v3 |= 1LL << v8;
    }
    while ( a2 );
  }
  return v3;
}
