/*
 * XREFs of ?ShutdownTrustedComponentForegroundControl@CortanaSharedExperienceManager@@UEAAJXZ @ 0x18037D6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::ShutdownTrustedComponentForegroundControl(
        CortanaSharedExperienceManager *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 49);
  return 0LL;
}
