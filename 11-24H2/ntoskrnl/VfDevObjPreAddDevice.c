/*
 * XREFs of VfDevObjPreAddDevice @ 0x140BAB64C
 * Callers:
 *     PpvUtilCallAddDevice @ 0x1404A4010 (PpvUtilCallAddDevice.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x140499230 (MmIsDriverVerifying.c)
 *     VfFilterAttach @ 0x140B9ED90 (VfFilterAttach.c)
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
