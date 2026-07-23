/*
 * XREFs of RtlTimeToSecondsSince1970 @ 0x1800E43E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlTimeToSecondsSince1970(PLARGE_INTEGER Time, PULONG ElapsedSeconds)
{
  __int64 QuadPart; // rcx
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx

  QuadPart = Time->QuadPart;
  v4 = QuadPart;
  if ( QuadPart < 0 )
    v4 = -QuadPart;
  v5 = (unsigned __int64)(((unsigned __int64)v4 * (unsigned __int128)(unsigned __int64)Magic10000000) >> 64) >> 23;
  if ( QuadPart < 0 )
    v5 = -(__int64)v5;
  v6 = v5 - SecondsToStartOf1970;
  if ( HIDWORD(v6) )
    return 0;
  *ElapsedSeconds = v6;
  return 1;
}
