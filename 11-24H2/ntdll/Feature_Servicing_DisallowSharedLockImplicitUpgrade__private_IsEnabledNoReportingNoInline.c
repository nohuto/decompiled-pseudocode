/*
 * XREFs of Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledNoReportingNoInline @ 0x18013AA30
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

__int64 Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_featureState & 2) != 0 )
    return Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_featureState & 1;
  else
    return Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_featureState,
             0);
}
