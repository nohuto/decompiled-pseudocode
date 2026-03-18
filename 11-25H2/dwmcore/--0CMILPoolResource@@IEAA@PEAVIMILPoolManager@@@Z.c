/*
 * XREFs of ??0CMILPoolResource@@IEAA@PEAVIMILPoolManager@@@Z @ 0x18004310C
 * Callers:
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x18006D76C (--0CD3DResource@@IEAA@_N@Z.c)
 * Callees:
 *     ??$?0$$V@?$CDeviceResourceT@V?$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@@@IEAA@XZ @ 0x180042D2C (--$-0$$V@-$CDeviceResourceT@V-$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@@@IEAA@XZ.c)
 */

CMILPoolResource *__fastcall CMILPoolResource::CMILPoolResource(CMILPoolResource *this, struct IMILPoolManager *a2)
{
  CMILPoolResource *v2; // rcx

  CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>::CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>(this);
  *((_QWORD *)v2 + 5) = 0LL;
  return v2;
}
