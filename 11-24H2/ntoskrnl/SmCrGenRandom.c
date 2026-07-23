/*
 * XREFs of SmCrGenRandom @ 0x14060DA54
 * Callers:
 *     SmKmKeyGenNewKey @ 0x14079A2D4 (SmKmKeyGenNewKey.c)
 *     SmCrEncStart @ 0x14079BB48 (SmCrEncStart.c)
 * Callees:
 *     BCryptGenRandom @ 0x14060597C (BCryptGenRandom.c)
 */

NTSTATUS __fastcall SmCrGenRandom(PUCHAR pbBuffer, ULONG cbBuffer, __int64 a3, ULONG a4)
{
  return BCryptGenRandom(pbBuffer, pbBuffer, cbBuffer, a4);
}
