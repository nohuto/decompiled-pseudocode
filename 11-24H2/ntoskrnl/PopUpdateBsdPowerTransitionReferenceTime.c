/*
 * XREFs of PopUpdateBsdPowerTransitionReferenceTime @ 0x140A8BBC8
 * Callers:
 *     PopBsdHandleRequest @ 0x1404A3364 (PopBsdHandleRequest.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140455F70 (RtlComputeCrc32.c)
 */

ULONG32 PopUpdateBsdPowerTransitionReferenceTime()
{
  ULONG32 result; // eax

  *(_QWORD *)&xmmword_140E67468 = MEMORY[0xFFFFF78000000014];
  result = RtlComputeCrc32(0, &xmmword_140E67468, 8u);
  DWORD2(xmmword_140E67468) = result;
  return result;
}
