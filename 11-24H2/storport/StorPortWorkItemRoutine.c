/*
 * XREFs of StorPortWorkItemRoutine @ 0x14004CEC0
 * Callers:
 *     <none>
 * Callees:
 *     StorPortWorkItemRoutineInternal @ 0x140074BAC (StorPortWorkItemRoutineInternal.c)
 */

void __fastcall StorPortWorkItemRoutine(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  StorPortWorkItemRoutineInternal(DeviceObject, Context);
}
