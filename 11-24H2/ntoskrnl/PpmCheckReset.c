/*
 * XREFs of PpmCheckReset @ 0x140447DE0
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x140447F1C (PpmResetPerfTimes.c)
 */

__int64 __fastcall PpmCheckReset(__int64 a1)
{
  PpmResetPerfTimes(a1 + 35248);
  return 0LL;
}
