/*
 * XREFs of Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage @ 0x1C00D6694
 * Callers:
 *     ImpInitializeWork @ 0x1C007AD6C (ImpInitializeWork.c)
 *     ImpAllocate @ 0x1C007B048 (ImpAllocate.c)
 *     ImpWorkerRoutine @ 0x1C007B0F0 (ImpWorkerRoutine.c)
 *     ImSessionStop @ 0x1C007B908 (ImSessionStop.c)
 *     ImSessionStart @ 0x1C00BB5B0 (ImSessionStart.c)
 *     ImpRpcDisconnect @ 0x1C00BF044 (ImpRpcDisconnect.c)
 *     ImpCleanupWork @ 0x1C00C2E38 (ImpCleanupWork.c)
 * Callees:
 *     Feature_IMRespectWTDToggle__private_IsEnabledFallback @ 0x1C00D66CC (Feature_IMRespectWTDToggle__private_IsEnabledFallback.c)
 */

__int64 Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage()
{
  if ( (Feature_IMRespectWTDToggle__private_featureState & 0x10) != 0 )
    return Feature_IMRespectWTDToggle__private_featureState & 1;
  else
    return Feature_IMRespectWTDToggle__private_IsEnabledFallback(
             (unsigned int)Feature_IMRespectWTDToggle__private_featureState,
             3LL);
}
