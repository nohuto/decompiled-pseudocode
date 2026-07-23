/*
 * XREFs of IovUtilWatermarkIrp @ 0x14047E134
 * Callers:
 *     IopEjectDevice @ 0x140731964 (IopEjectDevice.c)
 *     IopSynchronousCall @ 0x1408B9564 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x1409794B8 (IopFilterResourceRequirementsCall.c)
 *     PnpAsynchronousCall @ 0x140A44414 (PnpAsynchronousCall.c)
 *     VfIrpSendSynchronousIrp @ 0x140B8FF00 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     VfIrpWatermark @ 0x140B90080 (VfIrpWatermark.c)
 */

__int64 __fastcall IovUtilWatermarkIrp(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return VfIrpWatermark(a1, a2);
  return result;
}
