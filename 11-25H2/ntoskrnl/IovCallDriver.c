/*
 * XREFs of IovCallDriver @ 0x140B97D60
 * Callers:
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x14049FA00 (IofCallDriverSpecifyReturn.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopfCallDriver @ 0x14035C150 (IopfCallDriver.c)
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     IopPerfCallDriver @ 0x1404A068C (IopPerfCallDriver.c)
 *     VfBugCheckNoStackUsage @ 0x140605FC8 (VfBugCheckNoStackUsage.c)
 *     IovpCallDriverNoIrpTracking @ 0x140B72908 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x140B72950 (IovpCallDriverWithStackBuffer.c)
 *     IovpValidateDeviceObject @ 0x140B72C38 (IovpValidateDeviceObject.c)
 *     VfAfterCallDriver @ 0x140B7DAB4 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x140B7DC88 (VfBeforeCallDriver.c)
 *     VfIrpAllocateCallDriverData @ 0x140B7DEC0 (VfIrpAllocateCallDriverData.c)
 */

NTSTATUS __fastcall IovCallDriver(PDEVICE_OBJECT DeviceObject, IRP *BugCheckParameter1, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  ULONG_PTR v8; // rax
  PVOID v9; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  PFILE_OBJECT FileObject; // rax
  int v12; // eax
  int v13; // ebx
  PVOID Entry; // [rsp+58h] [rbp+20h] BYREF

  Entry = 0LL;
  if ( (IovpEnabledInThePast || (MmVerifierData & 0x20) != 0)
    && (ViVerifyAllDrivers == 1 || (BugCheckParameter1->Flags & 0x40000000) != 0) )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
    {
      KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
      v8 = CurrentIrql;
      ::BugCheckParameter1 = 16LL;
      goto LABEL_21;
    }
    if ( !(unsigned int)VfIrpAllocateCallDriverData((__int64)BugCheckParameter1, &Entry) )
      return IovpCallDriverWithStackBuffer(DeviceObject, BugCheckParameter1, a3);
    v9 = Entry;
    if ( !Entry )
      return IovpCallDriverNoIrpTracking(DeviceObject, BugCheckParameter1);
    *((_QWORD *)Entry + 20) = DeviceObject;
    *((_QWORD *)v9 + 21) = BugCheckParameter1;
    *((_QWORD *)v9 + 22) = a3;
    if ( **((_WORD **)v9 + 21) != 6 && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
    {
      *((_BYTE *)v9 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
      v8 = *((_QWORD *)v9 + 21);
      ::BugCheckParameter1 = 3LL;
      goto LABEL_21;
    }
    if ( !IovpValidateDeviceObject((__int64)DeviceObject) && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
    {
      *((_BYTE *)v9 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
      v8 = *((_QWORD *)v9 + 20);
      ::BugCheckParameter1 = 4LL;
LABEL_21:
      *(_QWORD *)&VfBugcheckTmpData = 201LL;
      *(_OWORD *)&xmmword_140FFCA48 = 0LL;
      qword_140FFCA40 = v8;
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
          *((_BYTE *)v9 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
          qword_140FFCA40 = *((_QWORD *)v9 + 20);
          xmmword_140FFCA48 = *((_QWORD *)v9 + 21);
          *(&xmmword_140FFCA48 + 1) = (ULONG_PTR)CurrentStackLocation[-1].FileObject;
          *(_QWORD *)&VfBugcheckTmpData = 201LL;
          ::BugCheckParameter1 = 15LL;
          VfBugCheckNoStackUsage();
        }
      }
    }
    VfBeforeCallDriver((__int64)DeviceObject, (ULONG_PTR)BugCheckParameter1, (__int64)v9);
    if ( (IopFunctionPointerMask & 2) != 0 )
      v12 = IopPerfCallDriver(DeviceObject, BugCheckParameter1);
    else
      v12 = IopfCallDriver(DeviceObject, BugCheckParameter1);
    *((_DWORD *)v9 + 46) = v12;
    VfAfterCallDriver((__int64)v9, (int *)v9 + 46);
    v13 = *((_DWORD *)v9 + 46);
    ExFreeToNPagedLookasideList(&ViIrpCallDriverDataList, v9);
    return v13;
  }
  else if ( (IopFunctionPointerMask & 2) != 0 )
  {
    return IopPerfCallDriver(DeviceObject, BugCheckParameter1);
  }
  else
  {
    return IopfCallDriver(DeviceObject, BugCheckParameter1);
  }
}
