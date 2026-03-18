/*
 * XREFs of IoRegisterDriverReinitialization @ 0x140708170
 * Callers:
 *     DifIoRegisterDriverReinitializationWrapper @ 0x14061E3D0 (DifIoRegisterDriverReinitializationWrapper.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     IopInterlockedInsertTailList @ 0x140592E90 (IopInterlockedInsertTailList.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
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
