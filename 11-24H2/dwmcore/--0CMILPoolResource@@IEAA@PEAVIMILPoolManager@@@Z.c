/*
 * XREFs of ??0CMILPoolResource@@IEAA@PEAVIMILPoolManager@@@Z @ 0x18005BD1C
 * Callers:
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x180043AEC (--0CD3DResource@@IEAA@_N@Z.c)
 * Callees:
 *     ??$?0$$V@?$CDeviceResourceT@V?$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@@@IEAA@XZ @ 0x18005B96C (--$-0$$V@-$CDeviceResourceT@V-$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@@@IEAA@XZ.c)
 */

CMILPoolResource *__fastcall CMILPoolResource::CMILPoolResource(CMILPoolResource *this, struct IMILPoolManager *a2)
{
  CMILPoolResource *v2; // rcx

  CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>::CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>(this);
  *((_QWORD *)v2 + 5) = 0LL;
  return v2;
}
