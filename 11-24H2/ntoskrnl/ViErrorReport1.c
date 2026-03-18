/*
 * XREFs of ViErrorReport1 @ 0x140612574
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140B83FA0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140B841A0 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver1 @ 0x140B8CCB4 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x140B8D280 (IovpCallDriver2.c)
 *     IovpExamineIrpStackForwarding @ 0x140B8D650 (IovpExamineIrpStackForwarding.c)
 *     IovpValidateStatusInformation @ 0x140B8D7EC (IovpValidateStatusInformation.c)
 *     VfAfterCallDriver @ 0x140B8DA94 (VfAfterCallDriver.c)
 *     VfPnpVerifyIrpStackDownward @ 0x140BA5760 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140BA58F0 (VfPnpVerifyIrpStackUpward.c)
 *     VfPnpVerifyNewRequest @ 0x140BA5AF0 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140BA5BD0 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfPowerVerifyIrpStackDownward @ 0x140BA5F60 (VfPowerVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackUpward @ 0x140BA6050 (VfPowerVerifyIrpStackUpward.c)
 *     VfPowerVerifyNewRequest @ 0x140BA6090 (VfPowerVerifyNewRequest.c)
 *     VfWmiVerifyIrpStackDownward @ 0x140BA6190 (VfWmiVerifyIrpStackDownward.c)
 *     VfWmiVerifyNewRequest @ 0x140BA62F0 (VfWmiVerifyNewRequest.c)
 *     VfIoInitializeIrp @ 0x140BA66E4 (VfIoInitializeIrp.c)
 *     IovpCompleteRequest1 @ 0x140BA69E8 (IovpCompleteRequest1.c)
 *     IovpLocalCompletionRoutine @ 0x140BA6B70 (IovpLocalCompletionRoutine.c)
 *     IovFreeIrpPrivate @ 0x140BA6F30 (IovFreeIrpPrivate.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x14053A038 (RtlStringCbPrintfA.c)
 *     VfUtilDbgPrint @ 0x14061029C (VfUtilDbgPrint.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ViErrorDisplayDescription @ 0x140B9362C (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140B9367C (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, 0LL);
}
