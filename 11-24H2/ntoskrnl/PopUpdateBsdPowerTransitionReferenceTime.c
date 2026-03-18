/*
 * XREFs of PopUpdateBsdPowerTransitionReferenceTime @ 0x140A8F530
 * Callers:
 *     PopBsdHandleRequest @ 0x1404A8F44 (PopBsdHandleRequest.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140460AE0 (RtlComputeCrc32.c)
 */

__int64 PopUpdateBsdPowerTransitionReferenceTime()
{
  __int64 result; // rax

  *(_QWORD *)&xmmword_140E67258 = MEMORY[0xFFFFF78000000014];
  result = RtlComputeCrc32(0LL, (__int64)&xmmword_140E67258, 8LL);
  DWORD2(xmmword_140E67258) = result;
  return result;
}
