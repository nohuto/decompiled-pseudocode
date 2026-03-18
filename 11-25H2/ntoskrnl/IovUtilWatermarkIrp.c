/*
 * XREFs of IovUtilWatermarkIrp @ 0x140482194
 * Callers:
 *     IopEjectDevice @ 0x140727798 (IopEjectDevice.c)
 *     IopFilterResourceRequirementsCall @ 0x14083168C (IopFilterResourceRequirementsCall.c)
 *     IopSynchronousCall @ 0x140834D44 (IopSynchronousCall.c)
 *     PnpAsynchronousCall @ 0x140A4B038 (PnpAsynchronousCall.c)
 *     VfIrpSendSynchronousIrp @ 0x140B7DF20 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     VfIrpWatermark @ 0x140B7E0A0 (VfIrpWatermark.c)
 */

__int64 __fastcall IovUtilWatermarkIrp(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return VfIrpWatermark(a1, a2);
  return result;
}
