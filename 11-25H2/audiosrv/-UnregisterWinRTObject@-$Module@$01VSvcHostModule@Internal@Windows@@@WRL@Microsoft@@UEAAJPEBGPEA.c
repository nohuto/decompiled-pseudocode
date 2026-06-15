/*
 * XREFs of ?UnregisterWinRTObject@?$Module@$01VSvcHostModule@Internal@Windows@@@WRL@Microsoft@@UEAAJPEBGPEAU_RO_REGISTRATION_COOKIE@@@Z @ 0x1800CF010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Module<2,Windows::Internal::SvcHostModule>::UnregisterWinRTObject(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  RoRevokeActivationFactories(a3);
  return 0LL;
}
