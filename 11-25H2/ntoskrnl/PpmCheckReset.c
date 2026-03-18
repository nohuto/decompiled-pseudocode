/*
 * XREFs of PpmCheckReset @ 0x1403EC9A0
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x1403ECADC (PpmResetPerfTimes.c)
 */

__int64 __fastcall PpmCheckReset(__int64 a1)
{
  PpmResetPerfTimes(a1 + 35248);
  return 0LL;
}
