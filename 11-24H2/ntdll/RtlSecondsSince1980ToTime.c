/*
 * XREFs of RtlSecondsSince1980ToTime @ 0x180141DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlSecondsSince1980ToTime(ULONG ElapsedSeconds, PLARGE_INTEGER Time)
{
  Time->QuadPart = 10000000 * (ElapsedSeconds + SecondsToStartOf1980);
}
