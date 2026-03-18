/*
 * XREFs of VfDevObjPreAddDevice @ 0x140BA964C
 * Callers:
 *     PpvUtilCallAddDevice @ 0x1404A9D40 (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x14049E430 (MmIsDriverVerifying.c)
 *     VfFilterAttach @ 0x140B9CD90 (VfFilterAttach.c)
 */

void __fastcall VfDevObjPreAddDevice(
        PDEVICE_OBJECT TargetDevice,
        struct _DRIVER_OBJECT *DriverObject,
        __int64 a3,
        int a4)
{
  int v6; // edx

  if ( MmIsDriverVerifying(DriverObject) && (MmVerifierData & 0x10) != 0 )
  {
    v6 = 3;
    if ( a4 != 4 )
      v6 = a4;
    VfFilterAttach(TargetDevice, v6);
  }
}
