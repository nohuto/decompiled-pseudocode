/*
 * XREFs of AccelpSubmitWork @ 0x14040AB90
 * Callers:
 *     MiFillPhysicalPages @ 0x14021EFA0 (MiFillPhysicalPages.c)
 *     MiFillMemory @ 0x14040A5D0 (MiFillMemory.c)
 *     AccelFillMemory @ 0x14040A67C (AccelFillMemory.c)
 *     AccelCompressBuffer @ 0x1406656FC (AccelCompressBuffer.c)
 *     AccelDecompressBuffer @ 0x14066586C (AccelDecompressBuffer.c)
 *     AccelpComputeHistogram @ 0x140666040 (AccelpComputeHistogram.c)
 * Callees:
 *     AccelGetStatusFromCompletionRecord @ 0x14040A548 (AccelGetStatusFromCompletionRecord.c)
 *     AccelSubmitWorkAsync @ 0x14040ABE8 (AccelSubmitWorkAsync.c)
 *     AccelWaitForWorkCompletion @ 0x14040AC70 (AccelWaitForWorkCompletion.c)
 */

__int64 __fastcall AccelpSubmitWork(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx

  if ( (a2 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    return 3221225485LL;
  if ( (a2 & 4) != 0 )
    return AccelSubmitWorkAsync();
  if ( !a1 )
    return 3221225485LL;
  result = AccelSubmitWorkAsync();
  if ( (int)result >= 0 )
  {
    result = AccelWaitForWorkCompletion(a1, v4, 0LL);
    if ( (int)result >= 0 )
      return AccelGetStatusFromCompletionRecord(a1);
  }
  return result;
}
