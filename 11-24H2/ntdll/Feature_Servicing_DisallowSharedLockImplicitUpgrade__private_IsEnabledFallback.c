/*
 * XREFs of Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledFallback @ 0x180138C4C
 * Callers:
 *     Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledNoReportingNoInline @ 0x180138C60 (Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Servicing_DisallowSharedLockImplicitUpgrade__private_descriptor);
}
