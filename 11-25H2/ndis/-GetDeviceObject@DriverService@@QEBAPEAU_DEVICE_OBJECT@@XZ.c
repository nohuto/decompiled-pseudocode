/*
 * XREFs of ?GetDeviceObject@DriverService@@QEBAPEAU_DEVICE_OBJECT@@XZ @ 0x1401561E0
 * Callers:
 *     ndisKLoaderIrpCreateHandler @ 0x1400E3C90 (ndisKLoaderIrpCreateHandler.c)
 * Callees:
 *     <none>
 */

struct _DEVICE_OBJECT *__fastcall DriverService::GetDeviceObject(DriverService *this)
{
  return (struct _DEVICE_OBJECT *)*((_QWORD *)this + 4);
}
