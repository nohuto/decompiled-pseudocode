/*
 * XREFs of AccelpComputeHistogram @ 0x140666040
 * Callers:
 *     AccelCompressBuffer @ 0x1406656FC (AccelCompressBuffer.c)
 * Callees:
 *     AccelpSubmitWork @ 0x14040AB90 (AccelpSubmitWork.c)
 *     AccelpBuildDescriptorComputeHistogram @ 0x140665CA8 (AccelpBuildDescriptorComputeHistogram.c)
 */

__int64 __fastcall AccelpComputeHistogram(__int64 *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  result = AccelpBuildDescriptorComputeHistogram(a1, a2, a3, a4, a5);
  if ( (int)result >= 0 )
    return AccelpSubmitWork(a1, a5);
  return result;
}
