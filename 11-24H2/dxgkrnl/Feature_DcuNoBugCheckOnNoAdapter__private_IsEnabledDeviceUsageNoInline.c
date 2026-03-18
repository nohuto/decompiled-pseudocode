/*
 * XREFs of Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline @ 0x140066334
 * Callers:
 *     ?FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z @ 0x14005D474 (-FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z.c)
 *     _lambda_d15561d970b8cd1158562b53bc5433ff_::operator() @ 0x1401BDBC0 (_lambda_d15561d970b8cd1158562b53bc5433ff_--operator().c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1404117C0 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledFallback @ 0x14006636C (Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledFallback.c)
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
