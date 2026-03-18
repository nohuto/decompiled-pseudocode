/*
 * XREFs of Feature_SendPairingChangedWnfIfIddIsPartOfDesktop__private_IsEnabledDeviceUsageNoInline @ 0x140066388
 * Callers:
 *     ?DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14018EBD0 (-DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     Feature_SendPairingChangedWnfIfIddIsPartOfDesktop__private_IsEnabledFallback @ 0x1400663C0 (Feature_SendPairingChangedWnfIfIddIsPartOfDesktop__private_IsEnabledFallback.c)
 */

__int64 Feature_SendPairingChangedWnfIfIddIsPartOfDesktop__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SendPairingChangedWnfIfIddIsPartOfDesktop__private_featureState & 0x10) != 0 )
    return Feature_SendPairingChangedWnfIfIddIsPartOfDesktop__private_featureState & 1;
  else
    return Feature_SendPairingChangedWnfIfIddIsPartOfDesktop__private_IsEnabledFallback(
             (unsigned int)Feature_SendPairingChangedWnfIfIddIsPartOfDesktop__private_featureState,
             3LL);
}
