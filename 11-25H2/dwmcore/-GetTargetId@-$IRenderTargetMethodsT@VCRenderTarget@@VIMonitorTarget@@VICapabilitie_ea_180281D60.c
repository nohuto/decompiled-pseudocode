/*
 * XREFs of ?GetTargetId@?$IRenderTargetMethodsT@VCRenderTarget@@VIMonitorTarget@@VICapabilitiesContributorTarget@@@@WFA@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180281D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct tagCOMPOSITION_TARGET_ID *__fastcall IRenderTargetMethodsT<CRenderTarget,IMonitorTarget,ICapabilitiesContributorTarget>::GetTargetId(
        __int64 a1)
{
  return IRenderTarget::GetTargetId((IRenderTarget *)(a1 - 80));
}
