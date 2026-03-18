/*
 * XREFs of Feature_DcuOnExitAlwaysInCalleeContext__private_IsEnabledDeviceUsageNoInline @ 0x14006D114
 * Callers:
 *     _lambda_0e946522d05123f26763d9a2a20a36ba_::operator() @ 0x1401BAB6C (_lambda_0e946522d05123f26763d9a2a20a36ba_--operator().c)
 *     DxgkIddHandleSetDisplayConfig @ 0x140414B30 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     Feature_DcuOnExitAlwaysInCalleeContext__private_IsEnabledFallback @ 0x14006D14C (Feature_DcuOnExitAlwaysInCalleeContext__private_IsEnabledFallback.c)
 */

__int64 Feature_DcuOnExitAlwaysInCalleeContext__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DcuOnExitAlwaysInCalleeContext__private_featureState & 0x10) != 0 )
    return Feature_DcuOnExitAlwaysInCalleeContext__private_featureState & 1;
  else
    return Feature_DcuOnExitAlwaysInCalleeContext__private_IsEnabledFallback(
             (unsigned int)Feature_DcuOnExitAlwaysInCalleeContext__private_featureState,
             3LL);
}
