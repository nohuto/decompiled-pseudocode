/*
 * XREFs of wil_details_PopulateInitialConfiguredFeatureStatesWithDefaults @ 0x140C4C534
 * Callers:
 *     wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140C4C474 (wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1404B90F4 (wil_details_FeatureDescriptors_SkipPadding.c)
 */

void __fastcall wil_details_PopulateInitialConfiguredFeatureStatesWithDefaults(__int64 *a1)
{
  __int64 v1; // rdx

  if ( a1 )
  {
    v1 = 518LL;
    do
    {
      *(_QWORD *)*a1 = v1;
      a1 = wil_details_FeatureDescriptors_SkipPadding(a1 + 7);
    }
    while ( a1 );
  }
}
