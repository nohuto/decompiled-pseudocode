/*
 * XREFs of RtlpValidateContextFlags @ 0x180017E20
 * Callers:
 *     RtlUnwindEx @ 0x180015480 (RtlUnwindEx.c)
 *     RtlVirtualUnwind2 @ 0x180015F20 (RtlVirtualUnwind2.c)
 *     RtlpWalkFrameChain @ 0x180016100 (RtlpWalkFrameChain.c)
 *     RtlpSanitizeContextFlags @ 0x180018BC0 (RtlpSanitizeContextFlags.c)
 *     RtlVirtualUnwind @ 0x180018C20 (RtlVirtualUnwind.c)
 *     RtlpSanitizeContext @ 0x180018DD0 (RtlpSanitizeContext.c)
 *     RtlCopyContext @ 0x1800DDBD0 (RtlCopyContext.c)
 *     RtlpCopyExtendedContext @ 0x180143A40 (RtlpCopyExtendedContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpValidateContextFlags(__int64 a1, __int64 a2)
{
  return RtlpValidateContextFlags2(a1, a2, 2147353560LL);
}
