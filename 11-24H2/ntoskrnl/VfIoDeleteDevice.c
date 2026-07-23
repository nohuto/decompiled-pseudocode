/*
 * XREFs of VfIoDeleteDevice @ 0x140B9422C
 * Callers:
 *     IovDeleteDevice @ 0x140B84734 (IovDeleteDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     IovUtilMarkDeviceObject @ 0x1404A7930 (IovUtilMarkDeviceObject.c)
 *     RtlStringCbPrintfA @ 0x140537878 (RtlStringCbPrintfA.c)
 *     VfUtilDbgPrint @ 0x14060E85C (VfUtilDbgPrint.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     VfHalDeleteDevice @ 0x140B891A0 (VfHalDeleteDevice.c)
 *     ViDevObjRemove @ 0x140B9449C (ViDevObjRemove.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140B94A94 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x140B94B44 (IovUtilIsDeviceObjectMarked.c)
 *     ViErrorDisplayDescription @ 0x140B9562C (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140B9567C (ViErrorFinishReport.c)
 *     VfIrpLogDeleteDeviceLogs @ 0x140B9D59C (VfIrpLogDeleteDeviceLogs.c)
 */

LONG_PTR __fastcall VfIoDeleteDevice(struct _LIST_ENTRY *BugCheckParameter2, const void *a2)
{
  LONG_PTR result; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  void *v7; // rsi
  char pszDest[40]; // [rsp+20h] [rbp-38h] BYREF

  VfHalDeleteDevice(BugCheckParameter2);
  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
  {
    ViDevObjRemove((ULONG_PTR)BugCheckParameter2);
    if ( (unsigned int)IovUtilIsDeviceObjectMarked(BugCheckParameter2, 0LL, v5) )
    {
      ViErrorDisplayDescription(576LL);
      if ( RtlStringCbPrintfA(pszDest, 0x26uLL, "CulpritAddress = %p.\n", a2) >= 0 )
        VfUtilDbgPrint(pszDest);
      ViErrorFinishReport(576LL, a2, 0LL, 0LL);
    }
    IovUtilMarkDeviceObject();
    result = IovUtilGetLowerDeviceObjectWithTag(v6);
    v7 = (void *)result;
    if ( result )
    {
      ViErrorDisplayDescription(513LL);
      if ( RtlStringCbPrintfA(pszDest, 0x26uLL, "CulpritAddress = %p.\n", a2) >= 0 )
        VfUtilDbgPrint(pszDest);
      ViErrorFinishReport(513LL, a2, 0LL, 0LL);
      result = ObfDereferenceObjectWithTag(v7, 0x49667256u);
    }
    if ( (MmVerifierData & 0x400) != 0 )
      return VfIrpLogDeleteDeviceLogs(BugCheckParameter2);
  }
  return result;
}
