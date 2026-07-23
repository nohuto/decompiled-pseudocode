/*
 * XREFs of VerifierKeInitializeTimer @ 0x140B975B0
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeInitializeTimerEx @ 0x140B975D0 (VerifierKeInitializeTimerEx.c)
 */

__int64 __fastcall VerifierKeInitializeTimer(__int64 a1)
{
  return VerifierKeInitializeTimerEx(a1, 0LL);
}
