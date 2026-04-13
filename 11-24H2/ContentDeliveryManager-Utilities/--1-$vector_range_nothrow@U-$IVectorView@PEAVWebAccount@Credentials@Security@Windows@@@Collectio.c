/*
 * XREFs of ??1?$vector_range_nothrow@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@wil@@QEAA@XZ @ 0x1800A778C
 * Callers:
 *     _MobilityExperienceManager::GetHasMobilityAccount_::_1_::dtor$4 @ 0x1800BC4CA (_MobilityExperienceManager--GetHasMobilityAccount_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *>>::~vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *>>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 32));
}
