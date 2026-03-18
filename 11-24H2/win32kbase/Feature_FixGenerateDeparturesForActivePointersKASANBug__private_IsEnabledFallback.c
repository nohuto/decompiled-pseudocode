/*
 * XREFs of Feature_FixGenerateDeparturesForActivePointersKASANBug__private_IsEnabledFallback @ 0x14020A46C
 * Callers:
 *     Feature_FixGenerateDeparturesForActivePointersKASANBug__private_IsEnabledDeviceUsageNoInline @ 0x14020A434 (Feature_FixGenerateDeparturesForActivePointersKASANBug__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140135FE4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_FixGenerateDeparturesForActivePointersKASANBug__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           &Feature_FixGenerateDeparturesForActivePointersKASANBug__private_descriptor);
}
