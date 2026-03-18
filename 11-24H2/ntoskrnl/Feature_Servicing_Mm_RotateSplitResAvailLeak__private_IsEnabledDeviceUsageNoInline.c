/*
 * XREFs of Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledDeviceUsageNoInline @ 0x14068EBE8
 * Callers:
 *     MiDeletePartialVad @ 0x1403CDE5C (MiDeletePartialVad.c)
 *     MiDeleteNewlyCreatedPartialVads @ 0x1407FF044 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiInitializePartialVad @ 0x140A246FC (MiInitializePartialVad.c)
 * Callees:
 *     Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledFallback @ 0x14068EC20 (Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_Mm_RotateSplitResAvailLeak__private_featureState & 0x10) != 0 )
    return Feature_Servicing_Mm_RotateSplitResAvailLeak__private_featureState & 1;
  else
    return Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Mm_RotateSplitResAvailLeak__private_featureState,
             3LL);
}
