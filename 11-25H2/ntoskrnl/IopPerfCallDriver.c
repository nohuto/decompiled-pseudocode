/*
 * XREFs of IopPerfCallDriver @ 0x1404A068C
 * Callers:
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     IofCallDriverSpecifyReturn @ 0x14049FA00 (IofCallDriverSpecifyReturn.c)
 *     IovpCallDriverNoIrpTracking @ 0x140B72908 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x140B72950 (IovpCallDriverWithStackBuffer.c)
 *     IovCallDriver @ 0x140B97D60 (IovCallDriver.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     IopAllocateIrpExtension @ 0x1402D5250 (IopAllocateIrpExtension.c)
 *     IopfCallDriver @ 0x14035C150 (IopfCallDriver.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x14047FE48 (IopIrpHasValidCombinationOfExtensionTypes.c)
 *     IopPerfLogCallReturnEvent @ 0x1404A0774 (IopPerfLogCallReturnEvent.c)
 *     IopPerfLogCallEvent @ 0x1404A07E4 (IopPerfLogCallEvent.c)
 */

__int64 __fastcall IopPerfCallDriver(PDEVICE_OBJECT DeviceObject, IRP *BugCheckParameter1)
{
  unsigned __int32 v4; // ebx
  unsigned int v5; // ebp
  __int64 IrpExtension; // rcx

  if ( (IopPerfStatus & 2) != 0 && IopIrpHasValidCombinationOfExtensionTypes((__int64)BugCheckParameter1, 1) )
  {
    IrpExtension = IopAllocateIrpExtension((__int64)BugCheckParameter1, 1);
    if ( IrpExtension )
      *(_QWORD *)(IrpExtension + 40) = MEMORY[0xFFFFF78000000014];
  }
  if ( (IopPerfStatus & 1) != 0 )
  {
    ObfReferenceObjectWithTag(DeviceObject, 0x746C6644u);
    v4 = _InterlockedIncrement(&IopPerfDriverUniqueMatchId);
    IopPerfLogCallEvent(DeviceObject->DriverObject, BugCheckParameter1, v4);
    v5 = IopfCallDriver(DeviceObject, BugCheckParameter1);
    IopPerfLogCallReturnEvent(BugCheckParameter1, v4);
    ObfDereferenceObjectWithTag(DeviceObject, 0x746C6644u);
  }
  else
  {
    return (unsigned int)IopfCallDriver(DeviceObject, BugCheckParameter1);
  }
  return v5;
}
