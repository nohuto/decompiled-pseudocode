/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14008AD9C
 * Callers:
 *     wil_details_IsEnabledFallback @ 0x14008AF60 (wil_details_IsEnabledFallback.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        wil_details_FeatureStateCache observedState,
        wil_ReportingKind kind,
        const wil_details_FeatureDescriptor *descriptor)
{
  wil_details_FeatureStateCache *featureStateCache; // r9
  int v4; // edx
  unsigned int v5; // r10d
  signed __int32 exchange; // eax
  signed __int32 v7; // r8d
  volatile signed __int32 v8; // edx
  int v9; // ecx

  featureStateCache = descriptor->featureStateCache;
  v4 = kind - 3;
  if ( v4 )
  {
    if ( v4 != 1 )
      return;
    v5 = 32;
  }
  else
  {
    v5 = 16;
  }
  if ( descriptor->isAlwaysEnabled || descriptor->isAlwaysDisabled )
  {
    _InterlockedOr((volatile signed __int32 *)featureStateCache, v5);
  }
  else
  {
    exchange = featureStateCache->exchange;
    v7 = featureStateCache->exchange;
    v8 = featureStateCache->exchange;
    if ( (featureStateCache->exchange & 2) != 0 )
    {
      v9 = observedState.exchange64 & 1;
      do
      {
        if ( (v8 & 1) != v9 )
          break;
        exchange = _InterlockedCompareExchange((volatile signed __int32 *)featureStateCache, exchange | v5, v7);
        if ( v7 == exchange )
          break;
        v7 = exchange;
        LOBYTE(v8) = exchange;
      }
      while ( (exchange & 2) != 0 );
    }
  }
}
