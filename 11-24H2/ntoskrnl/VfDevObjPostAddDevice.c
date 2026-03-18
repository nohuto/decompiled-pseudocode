/*
 * XREFs of VfDevObjPostAddDevice @ 0x140BA9698
 * Callers:
 *     PpvUtilCallAddDevice @ 0x1404A9D40 (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x14049E430 (MmIsDriverVerifying.c)
 *     VfFilterAttach @ 0x140B9CD90 (VfFilterAttach.c)
 */

void __fastcall VfDevObjPostAddDevice(
        PDEVICE_OBJECT TargetDevice,
        struct _DRIVER_OBJECT *DriverObject,
        __int64 a3,
        int a4,
        int a5)
{
  int v7; // edx

  if ( a5 >= 0 && (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(DriverObject) )
  {
    v7 = 5;
    if ( a4 != 4 )
      v7 = a4;
    VfFilterAttach(TargetDevice, v7);
  }
}
