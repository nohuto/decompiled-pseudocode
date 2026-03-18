/*
 * XREFs of KiHandleMcheck @ 0x1405B7610
 * Callers:
 *     KxMcheckAbort @ 0x1406BB100 (KxMcheckAbort.c)
 * Callees:
 *     HalHandleMcheck @ 0x140543080 (HalHandleMcheck.c)
 *     KiFlushCurrentRsb @ 0x1406BF940 (KiFlushCurrentRsb.c)
 */

__int64 __fastcall KiHandleMcheck(__int64 a1, __int64 a2, int *a3, __int64 a4)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  __int64 result; // rax

  HalHandleMcheck(a1, a2, a3, a4);
  result = KiSpeculationFeatures;
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
    result = KiFlushCurrentRsb(v5, v4, v6, v7);
  _mm_lfence();
  return result;
}
