/*
 * XREFs of ?GetTargetId@?$IRenderTargetMethodsT@VCRenderTarget@@VIMonitorTarget@@VICapabilitiesContributorTarget@@@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180277070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct tagCOMPOSITION_TARGET_ID *__fastcall IRenderTargetMethodsT<CRenderTarget,IMonitorTarget,ICapabilitiesContributorTarget>::GetTargetId(
        __int64 a1)
{
  return IRenderTarget::GetTargetId((IRenderTarget *)(a1 - 72));
}
