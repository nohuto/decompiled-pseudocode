/*
 * XREFs of imp_VfWdfFileObjectGetFlags @ 0x1400DEC30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfFileObjectGetFlags(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFFILEOBJECT__ *FileObject)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFFILEOBJECT__ *))WdfVersion.Functions.pfnWdfFileObjectGetFlags)(
           DriverGlobals,
           FileObject);
}
