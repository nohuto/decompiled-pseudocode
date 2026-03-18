/*
 * XREFs of Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline @ 0x14059238C
 * Callers:
 *     PspAllocateThread @ 0x1408F2828 (PspAllocateThread.c)
 *     PspThreadDelete @ 0x140AC7750 (PspThreadDelete.c)
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledFallback @ 0x1405923C4 (Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledFallback.c)
 */

__int64 Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_IoMgr_FileObject_Process_FastRef__private_featureState & 0x10) != 0 )
    return Feature_IoMgr_FileObject_Process_FastRef__private_featureState & 1;
  else
    return Feature_IoMgr_FileObject_Process_FastRef__private_IsEnabledFallback(
             (unsigned int)Feature_IoMgr_FileObject_Process_FastRef__private_featureState,
             3LL);
}
