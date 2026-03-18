/*
 * XREFs of EngAcquireFastMutex @ 0x1400FEF50
 * Callers:
 *     <none>
 * Callees:
 *     GreAcquireFastMutex @ 0x14019D7F0 (GreAcquireFastMutex.c)
 */

void __stdcall EngAcquireFastMutex(HFASTMUTEX hfm)
{
  GreAcquireFastMutex(hfm);
}
