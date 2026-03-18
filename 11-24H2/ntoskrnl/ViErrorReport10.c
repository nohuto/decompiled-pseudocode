/*
 * XREFs of ViErrorReport10 @ 0x1406125F8
 * Callers:
 *     IovpCallDriver2 @ 0x140B8D280 (IovpCallDriver2.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140BA58F0 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140BA5BD0 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfWmiVerifyIrpStackUpward @ 0x140BA6210 (VfWmiVerifyIrpStackUpward.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x14053A038 (RtlStringCbPrintfA.c)
 *     VfUtilDbgPrint @ 0x14061029C (VfUtilDbgPrint.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ViErrorDisplayDescription @ 0x140B9362C (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140B9367C (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport10(unsigned int a1, const void *a2, const void *a3, const void *a4)
{
  char pszDest[112]; // [rsp+30h] [rbp-A8h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x63uLL, "CulpritAddress = %p, Irp = %p, DeviceObject = %p.\n", a2, a3, a4) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, a4);
}
