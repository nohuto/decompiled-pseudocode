/*
 * XREFs of ?AddRef@CortanaSharedExperienceManager@@W7EAAKXZ @ 0x18037A490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CortanaSharedExperienceManager::AddRef(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::AddRef(a1 - 8);
}
