/*
 * XREFs of VfIoDetachDevice @ 0x140B9235C
 * Callers:
 *     IovDetachDevice @ 0x140B8274C (IovDetachDevice.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x14053A038 (RtlStringCbPrintfA.c)
 *     VfUtilDbgPrint @ 0x14061029C (VfUtilDbgPrint.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     IovUtilFlushStackCache @ 0x140B929FC (IovUtilFlushStackCache.c)
 *     ViErrorDisplayDescription @ 0x140B9362C (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140B9367C (ViErrorFinishReport.c)
 */

__int64 __fastcall VfIoDetachDevice(_QWORD *a1, const void *a2)
{
  char pszDest[80]; // [rsp+30h] [rbp-68h] BYREF

  if ( !a1[3] )
  {
    ViErrorDisplayDescription(514LL);
    if ( RtlStringCbPrintfA(pszDest, 0x49uLL, "CulpritAddress = %p, DeviceObject = %p.\n", a2, a1) >= 0 )
      VfUtilDbgPrint(pszDest);
    ViErrorFinishReport(514LL, a2, a1, 0LL);
  }
  return IovUtilFlushStackCache(a1);
}
