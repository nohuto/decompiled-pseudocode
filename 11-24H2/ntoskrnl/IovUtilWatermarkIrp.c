/*
 * XREFs of IovUtilWatermarkIrp @ 0x140482F44
 * Callers:
 *     IopEjectDevice @ 0x140733A30 (IopEjectDevice.c)
 *     IopSynchronousCall @ 0x1408BBC08 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x14098E480 (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x140A4D884 (PnpAsynchronousCall.c)
 *     VfIrpSendSynchronousIrp @ 0x140B8DF00 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     VfIrpWatermark @ 0x140B8E080 (VfIrpWatermark.c)
 */

__int64 __fastcall IovUtilWatermarkIrp(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return VfIrpWatermark(a1, a2);
  return result;
}
