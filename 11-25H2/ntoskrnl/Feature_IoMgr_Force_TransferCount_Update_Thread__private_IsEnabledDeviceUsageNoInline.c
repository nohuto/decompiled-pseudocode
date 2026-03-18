/*
 * XREFs of Feature_IoMgr_Force_TransferCount_Update_Thread__private_IsEnabledDeviceUsageNoInline @ 0x1405923E0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     Feature_IoMgr_Force_TransferCount_Update_Thread__private_IsEnabledFallback @ 0x140592418 (Feature_IoMgr_Force_TransferCount_Update_Thread__private_IsEnabledFallback.c)
 */

__int64 Feature_IoMgr_Force_TransferCount_Update_Thread__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_IoMgr_Force_TransferCount_Update_Thread__private_featureState & 0x10) != 0 )
    return Feature_IoMgr_Force_TransferCount_Update_Thread__private_featureState & 1;
  else
    return Feature_IoMgr_Force_TransferCount_Update_Thread__private_IsEnabledFallback(
             (unsigned int)Feature_IoMgr_Force_TransferCount_Update_Thread__private_featureState,
             3LL);
}
