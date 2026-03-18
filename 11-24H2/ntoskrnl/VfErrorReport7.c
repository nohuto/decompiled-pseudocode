/*
 * XREFs of VfErrorReport7 @ 0x140B934C0
 * Callers:
 *     PpvUtilFailDriver @ 0x1405A94A0 (PpvUtilFailDriver.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x14053A038 (RtlStringCbPrintfA.c)
 *     VfUtilDbgPrint @ 0x14061029C (VfUtilDbgPrint.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ViErrorDisplayDescription @ 0x140B9362C (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140B9367C (ViErrorFinishReport.c)
 */

__int64 __fastcall VfErrorReport7(__int64 a1, const void *a2, const void *a3, const void *a4)
{
  char pszDest[112]; // [rsp+30h] [rbp-98h] BYREF

  ViErrorDisplayDescription(585LL);
  if ( RtlStringCbPrintfA(
         pszDest,
         0x6EuLL,
         "CulpritAddress = %p, DeviceObject1 = %p, DeviceObject2 = %p.\n",
         a2,
         a3,
         a4) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(585LL, a2, a3, a4);
}
