/*
 * XREFs of ?RegisterCOMObject@?$Module@$01VSvcHostModule@Internal@Windows@@@WRL@Microsoft@@UEAAJPEBGPEAU_GUID@@PEAPEAUIClassFactory@@PEAKI@Z @ 0x1800CEE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Module<2,Windows::Internal::SvcHostModule>::RegisterCOMObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        LPUNKNOWN *a4,
        DWORD *a5,
        unsigned int a6)
{
  return Microsoft::WRL::Details::RegisterCOMObject<1>(a1, a3, a4, a5, a6);
}
