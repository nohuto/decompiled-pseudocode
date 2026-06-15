/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@V?$com_ptr_t@UICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@EEAAXXZ @ 0x1801042A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_obj2<wil::com_ptr_t<Windows::Internal::CapabilityAccess::Management::ICapabilityUsageSession,wil::err_returncode_policy>>::_Destroy(
        __int64 a1)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(a1 + 16));
}
