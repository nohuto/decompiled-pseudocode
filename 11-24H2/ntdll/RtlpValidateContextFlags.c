/*
 * XREFs of RtlpValidateContextFlags @ 0x180044820
 * Callers:
 *     RtlUnwindEx @ 0x180041E80 (RtlUnwindEx.c)
 *     RtlVirtualUnwind2 @ 0x180042920 (RtlVirtualUnwind2.c)
 *     RtlpWalkFrameChain @ 0x180042B00 (RtlpWalkFrameChain.c)
 *     RtlpSanitizeContextFlags @ 0x1800455C0 (RtlpSanitizeContextFlags.c)
 *     RtlVirtualUnwind @ 0x180045620 (RtlVirtualUnwind.c)
 *     RtlpSanitizeContext @ 0x1800457D0 (RtlpSanitizeContext.c)
 *     RtlCopyContext @ 0x1800D8D40 (RtlCopyContext.c)
 *     RtlpCopyExtendedContext @ 0x180141DF0 (RtlpCopyExtendedContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpValidateContextFlags(__int64 a1, __int64 a2)
{
  return RtlpValidateContextFlags2(a1, a2, 2147353560LL);
}
