/*
 * XREFs of IoRegisterBootDriverReinitialization @ 0x140AABF00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     IopInterlockedInsertTailList @ 0x1405964F0 (IopInterlockedInsertTailList.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

void __stdcall IoRegisterBootDriverReinitialization(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_REINITIALIZE DriverReinitializationRoutine,
        PVOID Context)
{
  _QWORD *Pool2; // rax

  if ( IopBootDriverReinitCompleted != 1 )
  {
    PsReferenceSiloContext(DriverObject);
    Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      DriverObject->Flags |= 0x20u;
      Pool2[2] = DriverObject;
      Pool2[3] = DriverReinitializationRoutine;
      Pool2[4] = Context;
      IopInterlockedInsertTailList((__int64)&IopBootDriverReinitializeQueueHead, Pool2);
    }
    else
    {
      ObfDereferenceObject(DriverObject);
    }
  }
}
