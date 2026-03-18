/*
 * XREFs of SmCrGenRandom @ 0x1406034D4
 * Callers:
 *     SmKmKeyGenNewKey @ 0x14078ADFC (SmKmKeyGenNewKey.c)
 *     SmCrEncStart @ 0x14078C678 (SmCrEncStart.c)
 * Callees:
 *     BCryptGenRandom @ 0x1405FBFC4 (BCryptGenRandom.c)
 */

NTSTATUS __fastcall SmCrGenRandom(PUCHAR pbBuffer, ULONG cbBuffer, __int64 a3, ULONG a4)
{
  return BCryptGenRandom(pbBuffer, pbBuffer, cbBuffer, a4);
}
