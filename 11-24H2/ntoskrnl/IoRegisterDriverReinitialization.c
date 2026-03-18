/*
 * XREFs of IoRegisterDriverReinitialization @ 0x140714270
 * Callers:
 *     DifIoRegisterDriverReinitializationWrapper @ 0x14062A390 (DifIoRegisterDriverReinitializationWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     IopInterlockedInsertTailList @ 0x1405964F0 (IopInterlockedInsertTailList.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

void __stdcall IoRegisterDriverReinitialization(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_REINITIALIZE DriverReinitializationRoutine,
        PVOID Context)
{
  _QWORD *Pool2; // rax

  PsReferenceSiloContext(DriverObject);
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    DriverObject->Flags |= 8u;
    Pool2[2] = DriverObject;
    Pool2[3] = DriverReinitializationRoutine;
    Pool2[4] = Context;
    IopInterlockedInsertTailList((__int64)&IopDriverReinitializeQueueHead, Pool2);
  }
  else
  {
    ObfDereferenceObject(DriverObject);
  }
}
