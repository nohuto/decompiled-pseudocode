/*
 * XREFs of ??1?$CAutoPtr@USaDeviceParams@@@ATL@@QEAA@XZ @ 0x18006F0C8
 * Callers:
 *     _CloneSaDeviceParams_::_1_::dtor$0 @ 0x180168EB4 (_CloneSaDeviceParams_--_1_--dtor$0.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$7 @ 0x18016A9BA (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$7.c)
 *     _DeriveSaDeviceParametersForStream_::_1_::dtor$0 @ 0x18016B837 (_DeriveSaDeviceParametersForStream_--_1_--dtor$0.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$1 @ 0x18016B92E (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$1.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$6 @ 0x18016C7AD (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$6.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$1 @ 0x18016DBC6 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$1.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$2 @ 0x18016DBD8 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$2.c)
 * Callees:
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800161E8 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 */

SaDeviceParams *__fastcall ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>(SaDeviceParams **a1)
{
  SaDeviceParams *v2; // rcx
  SaDeviceParams *result; // rax

  v2 = *a1;
  if ( v2 )
    result = SaDeviceParams::`scalar deleting destructor'(v2);
  *a1 = 0LL;
  return result;
}
