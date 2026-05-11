/*
 * XREFs of Feature_Servicing_UACSidebandDeinitOptimization__private_IsEnabledFallback @ 0x140014D14
 * Callers:
 *     Feature_Servicing_UACSidebandDeinitOptimization__private_IsEnabledDeviceUsageNoInline @ 0x140014CDC (Feature_Servicing_UACSidebandDeinitOptimization__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14000D218 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_UACSidebandDeinitOptimization__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_Servicing_UACSidebandDeinitOptimization__private_descriptor);
}
