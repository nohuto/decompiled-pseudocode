/*
 * XREFs of Feature_Servicing_Mm_StoreModWriteDelay__private_IsEnabledNoReportingNoInline @ 0x14066781C
 * Callers:
 *     MiGatherPagefilePages @ 0x1403C0730 (MiGatherPagefilePages.c)
 *     MiWriteComplete @ 0x14040E620 (MiWriteComplete.c)
 * Callees:
 *     Feature_Servicing_Mm_StoreModWriteDelay__private_IsEnabledFallback @ 0x140667800 (Feature_Servicing_Mm_StoreModWriteDelay__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_Mm_StoreModWriteDelay__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_Servicing_Mm_StoreModWriteDelay__private_featureState & 2) != 0 )
    return Feature_Servicing_Mm_StoreModWriteDelay__private_featureState & 1;
  else
    return Feature_Servicing_Mm_StoreModWriteDelay__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_Mm_StoreModWriteDelay__private_featureState,
             0);
}
