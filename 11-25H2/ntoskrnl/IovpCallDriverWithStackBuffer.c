/*
 * XREFs of IovpCallDriverWithStackBuffer @ 0x140B72950
 * Callers:
 *     IovCallDriver @ 0x140B97D60 (IovCallDriver.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopfCallDriver @ 0x14035C150 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x1404A068C (IopPerfCallDriver.c)
 *     VfBugCheckNoStackUsage @ 0x140605FC8 (VfBugCheckNoStackUsage.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IovpValidateDeviceObject @ 0x140B72C38 (IovpValidateDeviceObject.c)
 *     VfAfterCallDriver @ 0x140B7DAB4 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x140B7DC88 (VfBeforeCallDriver.c)
 */

__int64 __fastcall IovpCallDriverWithStackBuffer(PDEVICE_OBJECT DeviceObject, IRP *BugCheckParameter1, __int64 a3)
{
  bool v6; // zf
  KIRQL v7; // al
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  PFILE_OBJECT FileObject; // rax
  unsigned int v10; // eax
  unsigned int v12; // [rsp+20h] [rbp-89h] BYREF
  _BYTE v13[157]; // [rsp+28h] [rbp-81h] BYREF
  KIRQL v14; // [rsp+C5h] [rbp+1Ch]
  PDEVICE_OBJECT v15; // [rsp+C8h] [rbp+1Fh]
  IRP *v16; // [rsp+D0h] [rbp+27h]
  __int64 v17; // [rsp+D8h] [rbp+2Fh]

  memset_0(v13, 0, 0xC0uLL);
  v6 = BugCheckParameter1->Type == 6;
  v15 = DeviceObject;
  v16 = BugCheckParameter1;
  v17 = a3;
  if ( !v6 && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    ::BugCheckParameter1 = 3LL;
    qword_140FFCA40 = (ULONG_PTR)BugCheckParameter1;
    goto LABEL_7;
  }
  if ( !(unsigned __int8)IovpValidateDeviceObject(DeviceObject)
    && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    ::BugCheckParameter1 = 4LL;
    qword_140FFCA40 = (ULONG_PTR)DeviceObject;
LABEL_7:
    *(_QWORD *)&VfBugcheckTmpData = 201LL;
    *(_OWORD *)&xmmword_140FFCA48 = 0LL;
    v14 = v7;
    VfBugCheckNoStackUsage();
  }
  CurrentStackLocation = BugCheckParameter1->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation[-1].MajorFunction )
  {
    FileObject = CurrentStackLocation[-1].FileObject;
    if ( FileObject )
    {
      if ( (FileObject->Flags & 0x204000) == 0x204000 && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
      {
        v14 = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
        *(&xmmword_140FFCA48 + 1) = (ULONG_PTR)CurrentStackLocation[-1].FileObject;
        *(_QWORD *)&VfBugcheckTmpData = 201LL;
        ::BugCheckParameter1 = 15LL;
        qword_140FFCA40 = (ULONG_PTR)DeviceObject;
        xmmword_140FFCA48 = (ULONG_PTR)BugCheckParameter1;
        VfBugCheckNoStackUsage();
      }
    }
  }
  VfBeforeCallDriver(DeviceObject, BugCheckParameter1, v13);
  if ( (IopFunctionPointerMask & 2) != 0 )
    v10 = IopPerfCallDriver(DeviceObject, BugCheckParameter1);
  else
    v10 = IopfCallDriver(DeviceObject, BugCheckParameter1);
  v12 = v10;
  VfAfterCallDriver(v13, &v12);
  return v12;
}
