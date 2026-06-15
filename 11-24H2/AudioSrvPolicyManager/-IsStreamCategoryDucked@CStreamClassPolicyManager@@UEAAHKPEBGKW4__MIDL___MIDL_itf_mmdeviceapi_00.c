/*
 * XREFs of ?IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@H@Z @ 0x18003C070
 * Callers:
 *     <none>
 * Callees:
 *     ?TsSessionIdIsStreamCategoryDucked@@YA_NKPEBGKH@Z @ 0x18003FB90 (-TsSessionIdIsStreamCategoryDucked@@YA_NKPEBGKH@Z.c)
 */

_BOOL8 __fastcall CStreamClassPolicyManager::IsStreamCategoryDucked(
        CStreamClassPolicyManager *this,
        unsigned int a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a5,
        int a6)
{
  return TsSessionIdIsStreamCategoryDucked(a2, a3, a4, a6);
}
