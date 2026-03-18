/*
 * XREFs of SmCrGenRandom @ 0x14060F494
 * Callers:
 *     SmKmKeyGenNewKey @ 0x14079A1C4 (SmKmKeyGenNewKey.c)
 *     SmCrEncStart @ 0x14079BA38 (SmCrEncStart.c)
 * Callees:
 *     BCryptGenRandom @ 0x140608278 (BCryptGenRandom.c)
 */

NTSTATUS __fastcall SmCrGenRandom(PUCHAR pbBuffer, ULONG cbBuffer, __int64 a3, ULONG a4)
{
  return BCryptGenRandom(pbBuffer, pbBuffer, cbBuffer, a4);
}
