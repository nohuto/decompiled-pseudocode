/*
 * XREFs of Feature_FixGenerateDeparturesForActivePointersKASANBug__private_IsEnabledDeviceUsageNoInline @ 0x14020A434
 * Callers:
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z @ 0x1401F71B0 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z.c)
 *     ?GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z @ 0x1401FC890 (-GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z.c)
 * Callees:
 *     Feature_FixGenerateDeparturesForActivePointersKASANBug__private_IsEnabledFallback @ 0x14020A46C (Feature_FixGenerateDeparturesForActivePointersKASANBug__private_IsEnabledFallback.c)
 */

__int64 Feature_FixGenerateDeparturesForActivePointersKASANBug__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixGenerateDeparturesForActivePointersKASANBug__private_featureState & 0x10) != 0 )
    return Feature_FixGenerateDeparturesForActivePointersKASANBug__private_featureState & 1;
  else
    return Feature_FixGenerateDeparturesForActivePointersKASANBug__private_IsEnabledFallback(
             (unsigned int)Feature_FixGenerateDeparturesForActivePointersKASANBug__private_featureState,
             3LL);
}
