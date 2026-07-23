/*
 * XREFs of RtlTimeToSecondsSince1980 @ 0x140445F10
 * Callers:
 *     <none>
 * Callees:
 *     RtlExtendedMagicDivide @ 0x140445F90 (RtlExtendedMagicDivide.c)
 */

BOOLEAN __stdcall RtlTimeToSecondsSince1980(PLARGE_INTEGER Time, PULONG ElapsedSeconds)
{
  LARGE_INTEGER v2; // rax
  LARGE_INTEGER v3; // r10

  v2.QuadPart = *(_QWORD *)&RtlExtendedMagicDivide(*Time, Magic10000000, 23) - SecondsToStartOf1980;
  if ( v2.HighPart )
    return 0;
  *(_DWORD *)v3.QuadPart = v2.LowPart;
  return 1;
}
