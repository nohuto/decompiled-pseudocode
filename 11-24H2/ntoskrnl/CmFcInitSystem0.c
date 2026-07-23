/*
 * XREFs of CmFcInitSystem0 @ 0x140C4C294
 * Callers:
 *     CmInitBootFeatureConfigurations @ 0x140C46FF8 (CmInitBootFeatureConfigurations.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies @ 0x1406F72C4 (wil_details_EvaluateFeatureDependencies.c)
 *     wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140C4C474 (wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers.c)
 *     CmFcManagerInitialize @ 0x140C4EFE8 (CmFcManagerInitialize.c)
 *     CmFcManagerStartBootPhase @ 0x140C4F244 (CmFcManagerStartBootPhase.c)
 */

__int64 __fastcall CmFcInitSystem0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  int v5; // ecx
  _QWORD v7[3]; // [rsp+60h] [rbp-18h] BYREF

  CmFcManagerInitialize();
  v2 = *(_QWORD *)(a1 + 240);
  v3 = *(_QWORD *)(v2 + 3960);
  v4 = (_QWORD *)(v2 + 3600);
  v7[0] = v2 + 3600;
  v7[1] = v3;
  wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers(v7);
  wil_details_EvaluateFeatureDependencies();
  if ( v3 )
    LOBYTE(v5) = *(_BYTE *)(v3 + 24);
  else
    LOBYTE(v5) = 0;
  return CmFcManagerStartBootPhase(v5, *v4, v4[1], v4[2], v4[3], v4[4]);
}
