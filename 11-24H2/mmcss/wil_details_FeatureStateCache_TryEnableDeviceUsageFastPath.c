/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14000545C
 * Callers:
 *     wil_details_IsEnabledFallback @ 0x140005610 (wil_details_IsEnabledFallback.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(char a1, int a2)
{
  int v2; // edx
  int v3; // r8d
  signed __int32 v4; // eax
  signed __int32 v5; // r9d
  int v6; // edx
  int v7; // ecx

  v2 = a2 - 3;
  if ( v2 )
  {
    if ( v2 != 1 )
      return;
    v3 = 32;
  }
  else
  {
    v3 = 16;
  }
  v4 = *wil_details_featureDescriptors_a;
  v5 = *wil_details_featureDescriptors_a;
  v6 = *wil_details_featureDescriptors_a;
  if ( (*wil_details_featureDescriptors_a & 2) != 0 )
  {
    v7 = a1 & 1;
    do
    {
      if ( (v6 & 1) != v7 )
        break;
      v4 = _InterlockedCompareExchange(wil_details_featureDescriptors_a, v4 | v3, v5);
      if ( v5 == v4 )
        break;
      v5 = v4;
      LOBYTE(v6) = v4;
    }
    while ( (v4 & 2) != 0 );
  }
}
