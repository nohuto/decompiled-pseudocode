/*
 * XREFs of VfIoDeleteDevice @ 0x140B9222C
 * Callers:
 *     IovDeleteDevice @ 0x140B82734 (IovDeleteDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     IovUtilMarkDeviceObject @ 0x1404AD250 (IovUtilMarkDeviceObject.c)
 *     RtlStringCbPrintfA @ 0x14053A038 (RtlStringCbPrintfA.c)
 *     VfUtilDbgPrint @ 0x14061029C (VfUtilDbgPrint.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     VfHalDeleteDevice @ 0x140B871A0 (VfHalDeleteDevice.c)
 *     ViDevObjRemove @ 0x140B9249C (ViDevObjRemove.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140B92A94 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x140B92B44 (IovUtilIsDeviceObjectMarked.c)
 *     ViErrorDisplayDescription @ 0x140B9362C (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140B9367C (ViErrorFinishReport.c)
 *     VfIrpLogDeleteDeviceLogs @ 0x140B9B59C (VfIrpLogDeleteDeviceLogs.c)
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
