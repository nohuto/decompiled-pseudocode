/*
 * XREFs of ?ndisAllocationExecutionRoutine@@YA?AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX2@Z @ 0x1400A4C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisAllocationExecutionRoutine(
        struct _DEVICE_OBJECT *a1,
        struct _IRP *a2,
        void *a3,
        unsigned __int16 *a4)
{
  *(_QWORD *)(*((_QWORD *)a4 + 19) + 16LL * a4[84]) = a3;
  KeSetEvent(*((PRKEVENT *)a4 + 20), 0, 0);
  return 3LL;
}
