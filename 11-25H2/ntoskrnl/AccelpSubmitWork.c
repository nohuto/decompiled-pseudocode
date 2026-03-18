/*
 * XREFs of AccelpSubmitWork @ 0x1404F68DC
 * Callers:
 *     AccelFillMemory @ 0x140406838 (AccelFillMemory.c)
 *     AccelCompressBuffer @ 0x14065943C (AccelCompressBuffer.c)
 *     AccelDecompressBuffer @ 0x1406595AC (AccelDecompressBuffer.c)
 *     AccelpComputeHistogram @ 0x140659F70 (AccelpComputeHistogram.c)
 * Callees:
 *     AccelGetStatusFromCompletionRecord @ 0x1406596B4 (AccelGetStatusFromCompletionRecord.c)
 *     AccelSubmitWorkAsync @ 0x140659A64 (AccelSubmitWorkAsync.c)
 *     AccelWaitForWorkCompletion @ 0x140659AEC (AccelWaitForWorkCompletion.c)
 */

__int64 __fastcall AccelpSubmitWork(__int64 a1, __int64 a2)
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
