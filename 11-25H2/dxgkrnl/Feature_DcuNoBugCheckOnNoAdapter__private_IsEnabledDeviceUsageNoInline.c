/*
 * XREFs of Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline @ 0x1400667C8
 * Callers:
 *     ?FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z @ 0x14005DA14 (-FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z.c)
 *     _lambda_0e946522d05123f26763d9a2a20a36ba_::operator() @ 0x1401BAB6C (_lambda_0e946522d05123f26763d9a2a20a36ba_--operator().c)
 *     DxgkIddHandleSetDisplayConfig @ 0x140414B30 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledFallback @ 0x140066800 (Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledFallback.c)
 */

__int64 Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DcuNoBugCheckOnNoAdapter__private_featureState & 0x10) != 0 )
    return Feature_DcuNoBugCheckOnNoAdapter__private_featureState & 1;
  else
    return Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledFallback(
             (unsigned int)Feature_DcuNoBugCheckOnNoAdapter__private_featureState,
             3LL);
}
