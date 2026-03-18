/*
 * XREFs of Feature_SavePairedAdapterInRemoteSession__private_IsEnabledDeviceUsageNoInline @ 0x140067A44
 * Callers:
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x14019B038 (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 *     ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1401CF2E0 (-IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z.c)
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1403DABE8 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 * Callees:
 *     Feature_SavePairedAdapterInRemoteSession__private_IsEnabledFallback @ 0x140067A7C (Feature_SavePairedAdapterInRemoteSession__private_IsEnabledFallback.c)
 */

__int64 Feature_SavePairedAdapterInRemoteSession__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SavePairedAdapterInRemoteSession__private_featureState & 0x10) != 0 )
    return Feature_SavePairedAdapterInRemoteSession__private_featureState & 1;
  else
    return Feature_SavePairedAdapterInRemoteSession__private_IsEnabledFallback(
             (unsigned int)Feature_SavePairedAdapterInRemoteSession__private_featureState,
             3LL);
}
