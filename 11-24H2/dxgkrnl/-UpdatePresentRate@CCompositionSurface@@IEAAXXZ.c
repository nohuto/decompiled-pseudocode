/*
 * XREFs of ?UpdatePresentRate@CCompositionSurface@@IEAAXXZ @ 0x14001E498
 * Callers:
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x14001972C (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z @ 0x14001DAE0 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N@Z.c)
 * Callees:
 *     ?NotifyFrame@CPresentRate@@QEAAXXZ @ 0x14005F628 (-NotifyFrame@CPresentRate@@QEAAXXZ.c)
 *     Feature_DWM_MPO_Enhancement__private_IsEnabledDeviceUsageNoInline @ 0x14009D120 (Feature_DWM_MPO_Enhancement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?NotifyFrame@COldPresentRate@@QEAAXXZ @ 0x14009DBB8 (-NotifyFrame@COldPresentRate@@QEAAXXZ.c)
 */

void __fastcall CCompositionSurface::UpdatePresentRate(CCompositionSurface *this)
{
  if ( (unsigned int)Feature_DWM_MPO_Enhancement__private_IsEnabledDeviceUsageNoInline() )
    CPresentRate::NotifyFrame((CCompositionSurface *)((char *)this + 76));
  else
    COldPresentRate::NotifyFrame((CCompositionSurface *)((char *)this + 56));
}
