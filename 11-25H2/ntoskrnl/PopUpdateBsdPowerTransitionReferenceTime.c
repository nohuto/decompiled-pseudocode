/*
 * XREFs of PopUpdateBsdPowerTransitionReferenceTime @ 0x140A8A560
 * Callers:
 *     PopBsdHandleRequest @ 0x1404A7FA0 (PopBsdHandleRequest.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x14048AC80 (RtlComputeCrc32.c)
 */

ULONG32 PopUpdateBsdPowerTransitionReferenceTime()
{
  ULONG32 result; // eax

  *(_QWORD *)&xmmword_140E66FB0 = MEMORY[0xFFFFF78000000014];
  result = RtlComputeCrc32(0, &xmmword_140E66FB0, 8u);
  DWORD2(xmmword_140E66FB0) = result;
  return result;
}
