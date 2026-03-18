/*
 * XREFs of ??B?$SGDgSessionId@K@@QEBAKXZ @ 0x1C01A3D58
 * Callers:
 *     RawInputThread @ 0x1C00D6580 (RawInputThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGDgSessionId<unsigned long>::operator unsigned long(__int64 a1)
{
  return *(unsigned int *)SGDGetUserSessionState(a1);
}
