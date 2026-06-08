/*
 * XREFs of PctResetCountersOnD0 @ 0x140002140
 * Callers:
 *     <none>
 * Callees:
 *     PctSnapPlatformCtrsEx @ 0x140002164 (PctSnapPlatformCtrsEx.c)
 */

__int64 __fastcall PctResetCountersOnD0(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  return PctSnapPlatformCtrsEx(a1, 0x800000000000LL, a3);
}
