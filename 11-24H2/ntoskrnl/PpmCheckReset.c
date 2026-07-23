/*
 * XREFs of PpmCheckReset @ 0x140440500
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x14044063C (PpmResetPerfTimes.c)
 */

__int64 __fastcall PpmCheckReset(__int64 a1)
{
  PpmResetPerfTimes(a1 + 35248);
  return 0LL;
}
