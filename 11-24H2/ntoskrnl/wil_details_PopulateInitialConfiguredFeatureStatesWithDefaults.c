/*
 * XREFs of wil_details_PopulateInitialConfiguredFeatureStatesWithDefaults @ 0x140C4A398
 * Callers:
 *     wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140C4A2D8 (wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1404BDF84 (wil_details_FeatureDescriptors_SkipPadding.c)
 */

void __fastcall wil_details_PopulateInitialConfiguredFeatureStatesWithDefaults(__int64 (__fastcall **a1)())
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
