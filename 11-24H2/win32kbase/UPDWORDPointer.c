/*
 * XREFs of UPDWORDPointer @ 0x1400ECE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UPDWORDPointer(__int64 a1)
{
  return 16 * (((unsigned int)(a1 - 0x2000) >> 1) + 1 + 4192LL) + W32GetUserSessionState(a1);
}
