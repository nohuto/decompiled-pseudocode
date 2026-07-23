/*
 * XREFs of AccelpSubmitWork @ 0x140403070
 * Callers:
 *     MiFillPhysicalPages @ 0x14024BCF0 (MiFillPhysicalPages.c)
 *     MiFillMemory @ 0x140402AB0 (MiFillMemory.c)
 *     AccelFillMemory @ 0x140402B5C (AccelFillMemory.c)
 *     AccelCompressBuffer @ 0x140663FEC (AccelCompressBuffer.c)
 *     AccelDecompressBuffer @ 0x14066415C (AccelDecompressBuffer.c)
 *     AccelpComputeHistogram @ 0x140664930 (AccelpComputeHistogram.c)
 * Callees:
 *     AccelGetStatusFromCompletionRecord @ 0x140402A28 (AccelGetStatusFromCompletionRecord.c)
 *     AccelSubmitWorkAsync @ 0x1404030C8 (AccelSubmitWorkAsync.c)
 *     AccelWaitForWorkCompletion @ 0x140403150 (AccelWaitForWorkCompletion.c)
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
