/*
 * XREFs of ViErrorReport1 @ 0x140610B34
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140B85FA0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140B861A0 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver1 @ 0x140B8ECB4 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x140B8F280 (IovpCallDriver2.c)
 *     IovpExamineIrpStackForwarding @ 0x140B8F650 (IovpExamineIrpStackForwarding.c)
 *     IovpValidateStatusInformation @ 0x140B8F7EC (IovpValidateStatusInformation.c)
 *     VfAfterCallDriver @ 0x140B8FA94 (VfAfterCallDriver.c)
 *     VfPnpVerifyIrpStackDownward @ 0x140BA7760 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140BA78F0 (VfPnpVerifyIrpStackUpward.c)
 *     VfPnpVerifyNewRequest @ 0x140BA7AF0 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140BA7BD0 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfPowerVerifyIrpStackDownward @ 0x140BA7F60 (VfPowerVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackUpward @ 0x140BA8050 (VfPowerVerifyIrpStackUpward.c)
 *     VfPowerVerifyNewRequest @ 0x140BA8090 (VfPowerVerifyNewRequest.c)
 *     VfWmiVerifyIrpStackDownward @ 0x140BA8190 (VfWmiVerifyIrpStackDownward.c)
 *     VfWmiVerifyNewRequest @ 0x140BA82F0 (VfWmiVerifyNewRequest.c)
 *     VfIoInitializeIrp @ 0x140BA86E4 (VfIoInitializeIrp.c)
 *     IovpCompleteRequest1 @ 0x140BA89E8 (IovpCompleteRequest1.c)
 *     IovpLocalCompletionRoutine @ 0x140BA8B70 (IovpLocalCompletionRoutine.c)
 *     IovFreeIrpPrivate @ 0x140BA8F30 (IovFreeIrpPrivate.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140537878 (RtlStringCbPrintfA.c)
 *     VfUtilDbgPrint @ 0x14060E85C (VfUtilDbgPrint.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ViErrorDisplayDescription @ 0x140B9562C (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140B9567C (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, 0LL);
}
